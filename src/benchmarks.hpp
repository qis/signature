#pragma once
#include <qis/signature.hpp>
#include <benchmark/benchmark.h>
#include <memory.hpp>
#include <format>

// clang-format off

#define QIS_BENCHMARK_REGISTER(abi, name) \
  BENCHMARK(abi::name)

#define QIS_BENCHMARK_NAME(scan, size) \
  std::format("{}:{:08X}:{}", scan, size, QIS_STRINGIFY_EXPAND(QIS_SIGNATURE_ABI))

#define QIS_BENCHMARK(name, scan, size) \
  QIS_BENCHMARK_REGISTER(QIS_SIGNATURE_ABI, name)         \
    ->Name(QIS_BENCHMARK_NAME(scan, size))                \
    ->ArgPair(size, static_cast<std::int64_t>(scan))

// clang-format on

namespace QIS_SIGNATURE_ABI {

using namespace mem::literals;
using benchmark::kNanosecond;
using benchmark::kMicrosecond;
using benchmark::kMillisecond;

static void scan(benchmark::State& state)
{
  const auto size = static_cast<std::size_t>(state.range(0));
  const auto scan = static_cast<std::size_t>(state.range(1));
  const auto memory = mem::get(size).data();
  const auto search = qis::signature(scan > 200 ? mem::mask(scan - 200) : mem::data(scan - 100));
  for (auto _ : state) {
    const auto pos = qis::scan(memory, size, search);
    benchmark::DoNotOptimize(pos);
  }
}

static constexpr std::size_t data = 100;
static constexpr std::size_t mask = 200;

// clang-format off

QIS_BENCHMARK(scan, data + 3,  10_kb);
QIS_BENCHMARK(scan, data + 3,  16_kb);
QIS_BENCHMARK(scan, data + 3,  64_kb);
QIS_BENCHMARK(scan, data + 3, 256_kb);
QIS_BENCHMARK(scan, data + 3,   1_mb);
QIS_BENCHMARK(scan, data + 3,   4_mb);
QIS_BENCHMARK(scan, data + 3,  16_mb);
QIS_BENCHMARK(scan, data + 3,  64_mb);
QIS_BENCHMARK(scan, data + 3, 256_mb);
QIS_BENCHMARK(scan, data + 3, 512_mb);
QIS_BENCHMARK(scan, data + 3,   1_gb);
QIS_BENCHMARK(scan, data + 3,   2_gb);

QIS_BENCHMARK(scan, mask + 3,  10_kb);
QIS_BENCHMARK(scan, mask + 3,  16_kb);
QIS_BENCHMARK(scan, mask + 3,  64_kb);
QIS_BENCHMARK(scan, mask + 3, 256_kb);
QIS_BENCHMARK(scan, mask + 3,   1_mb);
QIS_BENCHMARK(scan, mask + 3,   4_mb);
QIS_BENCHMARK(scan, mask + 3,  16_mb);
QIS_BENCHMARK(scan, mask + 3,  64_mb);
QIS_BENCHMARK(scan, mask + 3, 256_mb);
QIS_BENCHMARK(scan, mask + 3, 512_mb);
QIS_BENCHMARK(scan, mask + 3,   1_gb);
QIS_BENCHMARK(scan, mask + 3,   2_gb);

// clang-format on

}  // namespace QIS_SIGNATURE_ABI