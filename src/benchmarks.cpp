#include "memory.hpp"
#include <benchmark/benchmark.h>
#include <algorithm>
#include <charconv>
#include <format>
#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdlib>

using namespace mem::literals;

class console_reporter : public benchmark::ConsoleReporter {
public:
  using ConsoleReporter::ConsoleReporter;

  void printed_header(bool value) noexcept
  {
    printed_header_ = value;
  }

  bool ReportContext(const Context& context) override
  {
    name_field_width_ = 19;
    return true;
  }

  void ReportRuns(const std::vector<Run>& reports) override
  {
    auto runs = reports;
    for (auto& run : runs) {
      run.run_name.function_name = format(run.run_name.function_name, run.run_name.args);
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
  static std::string format(const std::string& function, const std::string& args)
  {
    std::size_t type = 0;
    std::from_chars(args.data(), args.data() + 3, type);

    std::size_t size = 0;
    std::from_chars(args.data() + 4, args.data() + args.size(), size);

    const auto data = type < 200;
    auto name = std::format("{} | {:2d} | ", data ? "data" : "mask", data ? type - 100 : type - 200);

    if (const auto opt = function.substr(0, 3); opt == "std") {
      name.append("   ");
    } else {
      name.append(opt);
    }
    name.push_back(' ');
    if (const auto con = function.substr(4, 3); con == "seq") {
      name.append("   ");
    } else {
      name.append(con);
    }

    return name;
  }
};

std::set<std::size_t>& memory()
{
  static std::set<std::size_t> memory;
  return memory;
}

int main(int argc, char** argv)
{
  try {
    // Initialize benchmark.
    benchmark::Initialize(&argc, argv);
    if (benchmark::ReportUnrecognizedArguments(argc, argv)) {
      return EXIT_FAILURE;
    }

    // Initialize memory.
    std::vector<std::size_t> sizes;
    for (auto e : memory()) {
      sizes.push_back(e);
    }
    std::sort(sizes.begin(), sizes.end());
    mem::initialize(sizes);

    // Run benchmarks.
    console_reporter reporter;
    for (auto size : sizes) {
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

      for (int i = 1; i <= 26; i++) {
        if (i > 1) {
          std::cout << std::endl;
        }
        benchmark::RunSpecifiedBenchmarks(
          &reporter,
          std::format("std_seq::scan/{}/{}/", 100 + i, size));
        benchmark::RunSpecifiedBenchmarks(
          &reporter,
          std::format("avx_seq::scan/{}/{}/", 100 + i, size));
        benchmark::RunSpecifiedBenchmarks(
          &reporter,
          std::format("std_tbb::scan/{}/{}/", 100 + i, size));
        benchmark::RunSpecifiedBenchmarks(
          &reporter,
          std::format("avx_tbb::scan/{}/{}/", 100 + i, size));
        benchmark::RunSpecifiedBenchmarks(
          &reporter,
          std::format("std_seq::scan/{}/{}/", 200 + i, size));
        benchmark::RunSpecifiedBenchmarks(
          &reporter,
          std::format("avx_seq::scan/{}/{}/", 200 + i, size));
        benchmark::RunSpecifiedBenchmarks(
          &reporter,
          std::format("std_tbb::scan/{}/{}/", 200 + i, size));
        benchmark::RunSpecifiedBenchmarks(
          &reporter,
          std::format("avx_tbb::scan/{}/{}/", 200 + i, size));
      }

      std::cout << "```" << std::endl;
      std::cout << std::endl;
      std::cout << "</details>" << std::endl;
      std::cout << std::endl;
    }
  }
  catch (const std::exception& e) {
    std::fputs(e.what(), stderr);
    std::fputc('\n', stderr);
    std::fflush(stderr);
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
