#pragma once
#include <qis/signature.hpp>
#include <benchmark/benchmark.h>
#include <memory.hpp>

#define QIS_BENCHMARK(name, ...) static void QIS_BENCHMARK_NAME(name)(__VA_ARGS__)
#define QIS_BENCHMARK_RUN(name) QIS_BENCHMARK_CALL(name)->UseRealTime()->Threads(1)

using namespace mem::literals;

QIS_BENCHMARK(scan, benchmark::State& state)
{
  const qis::signature search(mem::signature(3));
  const auto size = static_cast<std::size_t>(state.range(0));
  const auto data = mem::get(size).data();
  for (auto _ : state) {
    const auto pos = qis::scan(data, size, search);
    benchmark::DoNotOptimize(pos);
  }
}

// clang-format off

QIS_BENCHMARK_RUN(scan)
  ->Unit(benchmark::kNanosecond)
  ->Iterations(8192)
  ->Arg(64_kb);

QIS_BENCHMARK_RUN(scan)
  ->Unit(benchmark::kNanosecond)
  ->Iterations(2048)
  ->Arg(512_kb);

QIS_BENCHMARK_RUN(scan)
  ->Unit(benchmark::kNanosecond)
  ->Iterations(1024)
  ->Arg(1_mb);

QIS_BENCHMARK_RUN(scan)
  ->Unit(benchmark::kMicrosecond)
  ->Iterations(64)
  ->Arg(64_mb);

QIS_BENCHMARK_RUN(scan)
  ->Unit(benchmark::kMicrosecond)
  ->Iterations(32)
  ->Arg(128_mb);

QIS_BENCHMARK_RUN(scan)
  ->Unit(benchmark::kMicrosecond)
  ->Iterations(16)
  ->Arg(512_mb);

QIS_BENCHMARK_RUN(scan)
  ->Unit(benchmark::kMicrosecond)
  ->Iterations(8)
  ->Arg(1_gb);

QIS_BENCHMARK_RUN(scan)
  ->Unit(benchmark::kMillisecond)
  ->Iterations(4)
  ->Arg(2_gb);

// clang-format on