#include "memory.hpp"
#include <benchmark/benchmark.h>
#include <algorithm>
#include <charconv>
#include <chrono>
#include <format>
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace mem::literals;

class Reporter : public benchmark::ConsoleReporter {
public:
  using ConsoleReporter::ConsoleReporter;

  void printed_header(bool value) noexcept
  {
    printed_header_ = value;
  }

  bool ReportContext(const Context& context) override
  {
    name_field_width_ = 26;
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
    if (abi.size() >= 7 && abi[3] == '_') {
      test_text.append(abi.substr(0, 3) == "avx" ? "avx " : "    ");
      test_text.append(abi.substr(4, 3) == "tbb" ? "tbb " : "    ");
      test_text.append(abi.size() > 7 ? "noe " : "    ");
    } else {
      test_text = abi;
      test_text.push_back(' ');
    }

    return type_text + ' ' + test_text + signature + ' ' + size_text;
  }
};

std::vector<std::pair<std::size_t, std::size_t>> benchmarks;

int main(int argc, char** argv)
{
  // Initialize benchmark.
  benchmark::Initialize(&argc, argv);
  if (benchmark::ReportUnrecognizedArguments(argc, argv)) {
    return EXIT_FAILURE;
  }

  // Initialize data.
  std::vector<std::size_t> sizes;
  sizes.resize(benchmarks.size());
  std::transform(benchmarks.begin(), benchmarks.end(), sizes.begin(), [](const auto& e) {
    return e.second;
  });
  std::sort(sizes.begin(), sizes.end());
  sizes.erase(std::unique(sizes.begin(), sizes.end()), sizes.end());
  mem::initialize(sizes);

  // Run benchmarks.
  Reporter reporter;
  for (auto size : sizes) {
    const auto find = std::find_if(benchmarks.begin(), benchmarks.end(), [size](const auto& e) {
      return e.first < 200 && e.second == size;
    });
    const auto scan = std::find_if(benchmarks.begin(), benchmarks.end(), [size](const auto& e) {
      return e.first >= 200 && e.second == size;
    });
    if (find != benchmarks.end() || scan != benchmarks.end()) {
      std::string size_text;
      if (size / 1_gb > 0 && size % 1_gb == 0) {
        size_text = std::format("{} GiB", size / 1024 / 1024 / 1024);
      } else if (size / 1_mb > 0 && size % 1_mb == 0) {
        size_text = std::format("{} MiB", size / 1024 / 1024);
      } else if (size / 1_kb > 0 && size % 1_kb == 0) {
        size_text = std::format("{} KiB", size / 1024);
      } else {
        size_text = std::format("{} Bytes", size);
      }
      std::cout << "<details>" << std::endl;
      std::cout << "<summary>" + size_text + "</summary>" << std::endl;
      std::cout << std::endl;
      std::cout << "```" << std::endl;
      reporter.printed_header(false);
    }
    if (find != benchmarks.end()) {
      benchmark::RunSpecifiedBenchmarks(&reporter, std::format("1..:{:08X}:", size));
    }
    if (find != benchmarks.end() && scan != benchmarks.end()) {
      std::cout << std::endl;
    }
    if (scan != benchmarks.end()) {
      benchmark::RunSpecifiedBenchmarks(&reporter, std::format("2..:{:08X}:", size));
    }
    if (find != benchmarks.end() || scan != benchmarks.end()) {
      std::cout << "```" << std::endl;
      std::cout << std::endl;
      std::cout << "</details>" << std::endl;
      std::cout << std::endl;
    }
  }
  return EXIT_SUCCESS;
}
