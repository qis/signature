#pragma once
#include <qis/signature.hpp>
#include <benchmark/benchmark.h>
#include <memory.hpp>

// clang-format off

#define QIS_BENCHMARK(name, ...)                      \
  static void QIS_BENCHMARK_NAME(name)(__VA_ARGS__);  \
  QIS_BENCHMARK_CALL(name)                            \
    ->Unit(benchmark::kMillisecond)                   \
    ->Arg(512_kb)                                     \
    ->Arg(128_mb)                                     \
    ->Arg(256_mb)                                     \
    ->Arg(512_mb)                                     \
    ->Arg(1_gb)                                       \
    ->Arg(2_gb);                                      \
  static void QIS_BENCHMARK_NAME(name)(__VA_ARGS__)

// clang-format on

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