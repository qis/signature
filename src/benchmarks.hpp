#pragma once
#include <qis/signature.hpp>
#include <benchmark/benchmark.h>
#include <memory.hpp>

#ifndef QIS_BENCHMARK
#  define QIS_BENCHMARK(name, ...) static void name(__VA_ARGS__)
#endif

#ifndef QIS_CALL
#  define QIS_CALL(name) BENCHMARK(name##_avx)
#endif

using namespace mem::literals;

QIS_BENCHMARK(scan, benchmark::State& state)
{
  const qis::signature search("02 03 04 05 06 09");
  const auto size = static_cast<std::size_t>(state.range(0));
  const auto data = mem::get().data();
  for (auto _ : state) {
    const auto pos = qis::scan(data, size, search);
    benchmark::DoNotOptimize(pos);
  }
}

// clang-format off

QIS_CALL(scan)
  ->Unit(benchmark::kMillisecond)
  ->Arg(512_kb)
  ->Arg(128_mb)
  ->Arg(256_mb)
  ->Arg(512_mb)
  ->Arg(1_gb)
  ->Arg(2_gb);

// clang-format on