#include "memory.hpp"
#include <benchmark/benchmark.h>
#include <charconv>
#include <format>
#include <cstdio>
#include <cstdlib>

using namespace mem::literals;

class Reporter : public benchmark::ConsoleReporter {
public:
  using ConsoleReporter::ConsoleReporter;

  void ReportRuns(const std::vector<Run>& reports) override
  {
    auto runs = reports;
    for (auto& run : runs) {
      if (run.run_name.args.find_first_not_of("0123456789:") == std::string::npos) {
        std::size_t v = 0;
        const auto data = run.run_name.args.data();
        const auto size = run.run_name.args.size();
        const auto [it, ec] = std::from_chars(data, data + size, v, 16);
        if (ec == std::errc() && v) {
          if (v / 1_gb > 0 && v % 1_gb == 0) {
            run.run_name.args = std::format("{} gb", v / 1024 / 1024 / 1024);
          } else if (v / 1_mb > 0 && v % 1_mb == 0) {
            run.run_name.args = std::format("{} mb", v / 1024 / 1024);
          } else if (v / 1_kb > 0 && v % 1_kb == 0) {
            run.run_name.args = std::format("{} kb", v / 1024);
          } else {
            run.run_name.args = std::format("{}", v);
          }
        }
      }
      run.run_name.function_name.append(" (" + run.run_name.args + ')');
      run.run_name.args.clear();
      run.run_name.iterations.clear();
      run.run_name.time_type.clear();
      if (run.run_name.threads == "threads:1") {
        run.run_name.threads.clear();
      }
    }
    ConsoleReporter::ReportRuns(runs);
  }
};

int main(int argc, char** argv)
{
  // Initialize benchmark.
  benchmark::Initialize(&argc, argv);
  if (benchmark::ReportUnrecognizedArguments(argc, argv)) {
    return EXIT_FAILURE;
  }

  // Initialize memory blocks.
  const std::vector<std::size_t> blocks{
    10_kb, 16_kb, 64_kb, 256_kb, 1_mb, 4_mb, 16_mb, 64_mb, 256_mb, 512_mb, 1_gb, 2_gb,
  };

  // Initialize data.
  std::puts("Initializing data ...");
  mem::initialize(blocks);

  // Run benchmarks.
  Reporter reporter;
  for (auto size : blocks) {
    const auto spec = std::format(".*/{:08X}", size);
    benchmark::RunSpecifiedBenchmarks(&reporter, spec);
    std::puts("");
  }
  return EXIT_SUCCESS;
}