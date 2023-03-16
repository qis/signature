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
    name_field_width_ = 22;
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
  static std::string format(const std::string& name)
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
    const std::string_view abi(size_end, end);
    if (abi.size() >= 7 && abi[3] == '_') {
      test_text.append(abi.substr(0, 3) != "std" ? abi.substr(0, 3) : "   ");
      test_text.push_back(' ');
      test_text.append(abi.substr(4, 3) != "seq" ? abi.substr(4, 3) : "   ");
      test_text.push_back(' ');
    } else {
      test_text = abi;
      test_text.push_back(' ');
    }

    return type_text + ' ' + test_text + signature + ' ' + size_text;
  }
};

std::vector<std::pair<std::size_t, std::size_t>>& benchmarks()
{
  static std::vector<std::pair<std::size_t, std::size_t>> benchmarks;
  return benchmarks;
}

int main(int argc, char** argv)
{
  try {
    // Initialize benchmark.
    benchmark::Initialize(&argc, argv);
    if (benchmark::ReportUnrecognizedArguments(argc, argv)) {
      return EXIT_FAILURE;
    }

    // Initialize data.
    const auto runs = benchmarks();
    std::vector<std::size_t> finds;
    std::vector<std::size_t> scans;
    std::vector<std::size_t> sizes;
    for (auto& e : runs) {
      if (e.first < 200) {
        finds.push_back(e.first);
      } else {
        scans.push_back(e.first);
      }
      sizes.push_back(e.second);
    }

    std::sort(finds.begin(), finds.end());
    finds.erase(std::unique(finds.begin(), finds.end()), finds.end());

    std::sort(scans.begin(), scans.end());
    scans.erase(std::unique(scans.begin(), scans.end()), scans.end());

    std::sort(sizes.begin(), sizes.end());
    sizes.erase(std::unique(sizes.begin(), sizes.end()), sizes.end());

    mem::initialize(sizes);

    // Run benchmarks.
    console_reporter reporter;
    for (auto size : sizes) {
      // clang-format off
      const auto find = std::find_if(runs.begin(), runs.end(), [size](const auto& e) {
        return e.first < 200 && e.second == size;
        }) != runs.end();
        const auto scan = std::find_if(runs.begin(), runs.end(), [size](const auto& e) {
          return e.first >= 200 && e.second == size;
          }) != runs.end();
      // clang-format on

      if (find || scan) {
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
      if (find) {
        for (auto type : finds) {
          const auto spec = std::format("{}:{:08X}:", type, size);
          benchmark::RunSpecifiedBenchmarks(&reporter, spec);
        }
      }
      if (find && scan) {
        std::cout << std::endl;
      }
      if (scan) {
        for (auto type : scans) {
          const auto spec = std::format("{}:{:08X}:", type, size);
          benchmark::RunSpecifiedBenchmarks(&reporter, spec);
        }
      }
      if (find || scan) {
        std::cout << "```" << std::endl;
        std::cout << std::endl;
        std::cout << "</details>" << std::endl;
        std::cout << std::endl;
      }
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
