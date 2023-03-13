#pragma once
#include <qis/signature.hpp>
#include <benchmark/benchmark.h>
#include <memory.hpp>
#include <format>
#include <vector>

// clang-format off

#define QIS_BENCHMARK_REGISTER(abi, name) \
  BENCHMARK(abi::name)

#define QIS_BENCHMARK(scan, size)                      \
  QIS_BENCHMARK_REGISTER(QIS_SIGNATURE_ABI, signature) \
    ->Name(benchmark_name(scan, size))                 \
    ->ArgPair(size, static_cast<std::int64_t>(scan))

// clang-format on

extern std::vector<std::pair<std::size_t, std::size_t>> benchmarks;

namespace QIS_SIGNATURE_ABI {

using namespace mem::literals;
using benchmark::kNanosecond;
using benchmark::kMicrosecond;
using benchmark::kMillisecond;

static std::string benchmark_name(std::size_t type, std::size_t size)
{
  benchmarks.emplace_back(type, size);
  return std::format("{}:{:08X}:{}", type, size, QIS_STRINGIFY_EXPAND(QIS_SIGNATURE_ABI));
}

static void signature(benchmark::State& state)
{
  const auto size = static_cast<std::size_t>(state.range(0));
  const auto type = static_cast<std::size_t>(state.range(1));
  const auto memory = mem::get(size).data();
  const auto search = qis::signature(type > 200 ? mem::scan(type - 200) : mem::find(type - 100));
  for (auto _ : state) {
    const auto pos = qis::scan(memory, size, search);
    benchmark::DoNotOptimize(pos);
  }
}

enum type : std::size_t {
  find = 100,
  scan = 200,
};

// clang-format off

QIS_BENCHMARK(find + 3,  16_kb);
QIS_BENCHMARK(find + 3,  64_kb);
QIS_BENCHMARK(find + 3, 256_kb);
QIS_BENCHMARK(find + 3,   1_mb);
QIS_BENCHMARK(find + 3,   4_mb);
QIS_BENCHMARK(find + 3,  16_mb);
QIS_BENCHMARK(find + 3,  64_mb);
QIS_BENCHMARK(find + 3, 256_mb);
QIS_BENCHMARK(find + 3, 512_mb);
QIS_BENCHMARK(find + 3,   1_gb);
QIS_BENCHMARK(find + 3,   2_gb);

QIS_BENCHMARK(scan + 3,  16_kb);
QIS_BENCHMARK(scan + 3,  64_kb);
QIS_BENCHMARK(scan + 3, 256_kb);
QIS_BENCHMARK(scan + 3,   1_mb);
QIS_BENCHMARK(scan + 3,   4_mb);
QIS_BENCHMARK(scan + 3,  16_mb);
QIS_BENCHMARK(scan + 3,  64_mb);
QIS_BENCHMARK(scan + 3, 256_mb);
QIS_BENCHMARK(scan + 3, 512_mb);
QIS_BENCHMARK(scan + 3,   1_gb);
QIS_BENCHMARK(scan + 3,   2_gb);

// clang-format on

}  // namespace QIS_SIGNATURE_ABI