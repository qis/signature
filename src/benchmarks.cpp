#include "memory.hpp"
#include <benchmark/benchmark.h>
#include <algorithm>
#include <charconv>
#include <chrono>
#include <format>
#include <vector>
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
      auto info = context;
      info.name_field_width = 22;
      if (!ConsoleReporter::ReportContext(info)) {
        return false;
      }
#ifdef QIS_BENCHMARK_PRINT_LEGEND
      std::string legend;
      auto i = std::back_inserter(legend);
      std::format_to(i, "\nSignature Type\n");
      std::format_to(i, "* find: {}\n", mem::find());
      std::format_to(i, "* scan: {}\n", mem::scan());
      std::format_to(i, "\nCompilation Flags\n");
      std::format_to(i, "* avx: QIS_SIGNATURE_USE_AVX 1\n");
      std::format_to(i, "* tbb: QIS_SIGNATURE_USE_TBB 1\n");
      std::format_to(i, "\nSignature Length\n");
      std::format_to(i, "* Searched for number of bytes from \"find\" or \"scan\".\n");
      std::format_to(i, "\nData Size\n");
      std::format_to(i, "* Size of the searched memory block.\n");
      std::format_to(i, "* Signature found at the end of the memory block.\n");
      std::puts(legend.data());
#endif
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

    std::size_t type = 0;
    auto [scan_end, scan_ec] = std::from_chars(begin, end, type);
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

    std::string type_text;
    std::string signature;
    if (type > 200) {
      type_text = "scan";
      signature = std::format("{:02d}", type - 200);
    } else {
      type_text = "find";
      signature = std::format("{:02d}", type - 100);
    }

    std::string test_text;
    std::string_view abi(size_end, end);
    if (abi.size() == 7 && abi[3] == '_') {
      test_text.append(abi.substr(0, 3));
      test_text.append(abi.substr(4, 3) == "tbb" ? " tbb" : "    ");
    } else {
      test_text = abi;
    }

    return type_text + ' ' + test_text + ' ' + signature + ' ' + size_text;
  }

  bool context_{ true };
};

std::vector<std::pair<std::size_t, std::size_t>> benchmarks;

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
  std::fputs("Initializing data ...", stdout);
  std::fflush(stdout);
  std::vector<std::size_t> sizes;
  sizes.resize(benchmarks.size());
  std::transform(benchmarks.begin(), benchmarks.end(), sizes.begin(), [](const auto& e) {
    return e.second;
  });
  std::sort(sizes.begin(), sizes.end());
  sizes.erase(std::unique(sizes.begin(), sizes.end()), sizes.end());
  mem::initialize(sizes);
  std::puts("\n");

  // Measure benchmark duration.
  const auto tp1 = std::chrono::high_resolution_clock::now();

  // Run benchmarks.
  Reporter reporter;
  for (auto size : sizes) {
    const auto find = std::find_if(benchmarks.begin(), benchmarks.end(), [size](const auto& e) {
      return e.first < 200 && e.second == size;
    });
    if (find != benchmarks.end()) {
      benchmark::RunSpecifiedBenchmarks(&reporter, std::format("1..:{:08X}:", size));
    }
    const auto scan = std::find_if(benchmarks.begin(), benchmarks.end(), [size](const auto& e) {
      return e.first >= 200 && e.second == size;
    });
    if (scan != benchmarks.end()) {
      benchmark::RunSpecifiedBenchmarks(&reporter, std::format("2..:{:08X}:", size));
    }
    if (find != benchmarks.end() || scan != benchmarks.end()) {
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