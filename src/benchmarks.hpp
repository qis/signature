#pragma once
#include <qis/signature.hpp>
#include <benchmark/benchmark.h>
#include <memory.hpp>
#include <format>
#include <vector>
#include <cassert>
#include <cstdio>
#include <cstdlib>

// clang-format off

#define QIS_BENCHMARK_REGISTER(abi, name)              \
  BENCHMARK(abi::name)

#define QIS_BENCHMARK(scan, size)                      \
  QIS_BENCHMARK_REGISTER(QIS_SIGNATURE_ABI, signature) \
    ->Name(benchmark_name(scan, size))                 \
    ->ArgPair(size, static_cast<std::int64_t>(scan))

#define QIS_BENCHMARK_ABORT(message)                   \
  assert(!message);                                    \
  std::fputs("\nError: " message "\n", stderr);        \
  std::exit(EXIT_FAILURE);

// clang-format on

extern std::vector<std::pair<std::size_t, std::size_t>> benchmarks;

namespace QIS_SIGNATURE_ABI {

using namespace mem::literals;
using benchmark::kNanosecond;
using benchmark::kMicrosecond;
using benchmark::kMillisecond;

static std::string benchmark_name(std::size_t type, std::size_t size)
{
  if (type < 100 || type > 226 || (type > 126 && type < 200)) {
    QIS_BENCHMARK_ABORT("Invalid type.");
  }
  if (size < 26) {
    QIS_BENCHMARK_ABORT("Invalid size.");
  }
  benchmarks.emplace_back(type, size);
  return std::format("{}:{:08X}:{}", type, size, QIS_STRINGIFY_EXPAND(QIS_SIGNATURE_ABI));
}

static void signature(benchmark::State& state)
{
  using benchmark::DoNotOptimize;

  // Handle benchmark parameters.
  const auto size = static_cast<std::size_t>(state.range(0));
  const auto type = static_cast<std::size_t>(state.range(1));
  const auto scan = qis::signature(type > 200 ? mem::scan(type - 200) : mem::find(type - 100));
  const auto data = mem::get(size);

  // Create and initialize data copy.
  std::vector<std::uint8_t> copy(size);
  DoNotOptimize(std::memcpy(copy.data(), data.data(), size));

  // Verify data copy and signature.
  if (const auto pos = qis::scan(copy.data(), size, scan); pos != size - 26) {
    QIS_BENCHMARK_ABORT("Scan failed.");
  }

  // Run benchmark.
  for (auto _ : state) {
    state.PauseTiming();
    DoNotOptimize(std::memcpy(copy.data(), data.data(), size));
    state.ResumeTiming();
    const auto pos = qis::scan(copy.data(), size, scan);
    DoNotOptimize(pos);
  }
}

enum type : std::size_t {
  find = 100,
  scan = 200,
};

// clang-format off

QIS_BENCHMARK(find + 10,  16_kb);
QIS_BENCHMARK(find + 10,  64_kb);
QIS_BENCHMARK(find + 10, 256_kb);
QIS_BENCHMARK(find + 10,   1_mb);
QIS_BENCHMARK(find + 10,   4_mb);
QIS_BENCHMARK(find + 10,  16_mb);
QIS_BENCHMARK(find + 10,  64_mb);
QIS_BENCHMARK(find + 10, 256_mb);
QIS_BENCHMARK(find + 10, 512_mb);
QIS_BENCHMARK(find + 10,   1_gb);
QIS_BENCHMARK(find + 10,   2_gb);

QIS_BENCHMARK(scan + 10,  16_kb);
QIS_BENCHMARK(scan + 10,  64_kb);
QIS_BENCHMARK(scan + 10, 256_kb);
QIS_BENCHMARK(scan + 10,   1_mb);
QIS_BENCHMARK(scan + 10,   4_mb);
QIS_BENCHMARK(scan + 10,  16_mb);
QIS_BENCHMARK(scan + 10,  64_mb);
QIS_BENCHMARK(scan + 10, 256_mb);
QIS_BENCHMARK(scan + 10, 512_mb);
QIS_BENCHMARK(scan + 10,   1_gb);
QIS_BENCHMARK(scan + 10,   2_gb);

// clang-format on

}  // namespace QIS_SIGNATURE_ABI
