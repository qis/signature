#pragma once
#include <qis/signature.hpp>
#include <benchmark/benchmark.h>
#include <memory.hpp>

#ifndef QIS_BENCHMARK
#  define QIS_BENCHMARK(name, ...) \
    static void name(__VA_ARGS__); \
    BENCHMARK(name);               \
    static void name(__VA_ARGS__)
#endif

using namespace mem::literals;

QIS_BENCHMARK(small, benchmark::State& state)
{
  for (auto _ : state) {
    benchmark::DoNotOptimize(_);
  }
}