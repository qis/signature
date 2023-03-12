#include "memory.hpp"
#include <benchmark/benchmark.h>
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
      if (const auto pos = run.run_name.args.find(':'); pos != std::string::npos) {
        run.run_name.args.erase(pos);
      }
      run.run_name.function_name.push_back(' ');
      run.run_name.function_name.append(run.run_name.args);
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

  // Initialize data.
  std::puts("Initializing data ...");
  mem::initialize({ 64_kb, 512_kb, 1_mb, 64_mb, 128_mb, 512_mb, 1_gb, 2_gb });

  // Run benchmarks.
  Reporter reporter;
  benchmark::RunSpecifiedBenchmarks(&reporter);
  return EXIT_SUCCESS;
}