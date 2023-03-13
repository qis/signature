#include "memory.hpp"
#include <benchmark/benchmark.h>
#include <algorithm>
#include <charconv>
#include <chrono>
#include <format>
#include <set>
#include <cstdio>
#include <cstdlib>

using namespace mem::literals;

class Reporter : public benchmark::ConsoleReporter {
public:
  using ConsoleReporter::ConsoleReporter;

  bool ReportContext(const Context& context) override
  {
    if (context_) {
      context_ = false;
      return ConsoleReporter::ReportContext(context);
    }
    return true;
  }

  void ReportRuns(const std::vector<Run>& reports) override
  {
    auto runs = reports;
    for (auto& run : runs) {
      run.run_name.function_name = format(run.run_name.function_name);
      run.run_name.iterations.clear();
      run.run_name.time_type.clear();
      run.run_name.args.clear();
      if (run.run_name.threads == "threads:1") {
        run.run_name.threads.clear();
      }
    }
    ConsoleReporter::ReportRuns(runs);
  }

private:
  std::string format(const std::string& name)
  {
    const auto begin = name.data();
    const auto end = begin + name.size();

    std::size_t scan = 0;
    auto [scan_end, scan_ec] = std::from_chars(begin, end, scan);
    if (scan_ec != std::errc() || ++scan_end >= end) {
      return name;
    }

    std::size_t size = 0;
    auto [size_end, size_ec] = std::from_chars(scan_end, end, size, 16);
    if (size_ec != std::errc() || ++size_end >= end) {
      return name;
    }

    std::string size_text;
    if (size / 1_gb > 0 && size % 1_gb == 0) {
      size_text = std::format("{} gb", size / 1024 / 1024 / 1024);
    } else if (size / 1_mb > 0 && size % 1_mb == 0) {
      size_text = std::format("{} mb", size / 1024 / 1024);
    } else if (size / 1_kb > 0 && size % 1_kb == 0) {
      size_text = std::format("{} kb", size / 1024);
    } else {
      size_text = std::format("{}", size);
    }

    std::string scan_text;
    if (scan > 200) {
      scan_text = std::format("mask {:02d}", scan - 200);
    } else {
      scan_text = std::format("data {:02d}", scan - 100);
    }

    std::string test_text;
    std::string_view abi(size_end, end);
    if (abi.size() == 7 && abi[3] == '_') {
      test_text.append(abi.substr(0, 3));
      test_text.append(abi.substr(4, 3) == "tbb" ? " tbb" : "    ");
    } else {
      test_text = abi;
    }

    return scan_text + ' ' + test_text + ' ' + size_text;
  }

  bool context_{ true };
};

std::set<std::pair<std::size_t, std::size_t>> benchmarks;

int main(int argc, char** argv)
{
  // Measure initialization duration.
  const auto tp0 = std::chrono::high_resolution_clock::now();

  // Initialize benchmark.
  benchmark::Initialize(&argc, argv);
  if (benchmark::ReportUnrecognizedArguments(argc, argv)) {
    return EXIT_FAILURE;
  }

  // Initialize data.
  std::puts("Initializing data ...");
  std::vector<std::size_t> sizes;
  for (const auto& benchmark : benchmarks) {
    sizes.push_back(benchmark.second);
  }
  mem::initialize(sizes);

  // Measure benchmark duration.
  const auto tp1 = std::chrono::high_resolution_clock::now();

  // Run benchmarks.
  Reporter reporter;
  for (auto size : sizes) {
    const auto data = std::find_if(benchmarks.begin(), benchmarks.end(), [size](const auto& e) {
      return e.first < 200 && e.second == size;
    });
    if (data != benchmarks.end()) {
      benchmark::RunSpecifiedBenchmarks(&reporter, std::format("1..:{:08X}:", size));
      std::puts("");
    }
    const auto mask = std::find_if(benchmarks.begin(), benchmarks.end(), [size](const auto& e) {
      return e.first >= 200 && e.second == size;
    });
    if (mask != benchmarks.end()) {
      benchmark::RunSpecifiedBenchmarks(&reporter, std::format("2..:{:08X}:", size));
      std::puts("");
    }
  }

  // Report initialization and benchmark durations.
  const auto tp2 = std::chrono::high_resolution_clock::now();
  using seconds = std::chrono::duration<double, std::chrono::seconds::period>;
  const auto s0 = std::chrono::duration_cast<seconds>(tp1 - tp0).count();
  const auto s1 = std::chrono::duration_cast<seconds>(tp2 - tp1).count();
  std::puts(std::format("finished in {:.1f} + {:.1f} seconds", s0, s1).data());
  return EXIT_SUCCESS;
}