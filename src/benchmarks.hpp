#pragma once
#include <qis/signature.hpp>
#include <benchmark/benchmark.h>
#include <memory.hpp>
#include <format>

// clang-format off

#define QIS_BENCHMARK_REGISTER(abi, name) \
  BENCHMARK(abi::name)

#define QIS_BENCHMARK(name, unit, iterations, size) \
  QIS_BENCHMARK_REGISTER(QIS_SIGNATURE_ABI, name)   \
    ->ArgName(std::format("{:08X}", size))         \
    ->Unit(unit)                                    \
    ->Iterations(iterations)                        \
    ->UseRealTime()                                 \
    ->Threads(1)                                    \
    ->Arg(size)

// clang-format on

namespace QIS_SIGNATURE_ABI {

using namespace mem::literals;
using benchmark::kNanosecond;
using benchmark::kMicrosecond;
using benchmark::kMillisecond;

static void scan(benchmark::State& state)
{
  const qis::signature search(mem::signature(3));
  const auto size = static_cast<std::size_t>(state.range(0));
  const auto data = mem::get(size).data();
  for (auto _ : state) {
    const auto pos = qis::scan(data, size, search);
    benchmark::DoNotOptimize(pos);
  }
}

QIS_BENCHMARK(scan, kNanosecond, 8192, 10_kb);
QIS_BENCHMARK(scan, kNanosecond, 8192, 16_kb);
QIS_BENCHMARK(scan, kNanosecond, 8192, 64_kb);
QIS_BENCHMARK(scan, kNanosecond, 8192, 256_kb);
QIS_BENCHMARK(scan, kNanosecond, 4096, 1_mb);
QIS_BENCHMARK(scan, kNanosecond, 1024, 4_mb);
QIS_BENCHMARK(scan, kNanosecond, 256, 16_mb);
QIS_BENCHMARK(scan, kMicrosecond, 64, 64_mb);
QIS_BENCHMARK(scan, kMicrosecond, 16, 256_mb);
QIS_BENCHMARK(scan, kMicrosecond, 12, 512_mb);
QIS_BENCHMARK(scan, kMicrosecond, 8, 1_gb);
QIS_BENCHMARK(scan, kMillisecond, 4, 2_gb);

// clang-format off

}  // namespace QIS_SIGNATURE_ABI