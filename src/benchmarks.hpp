#pragma once
#include <qis/signature.hpp>
#include <benchmark/benchmark.h>
#include <memory.hpp>
#include <format>
#include <vector>
#include <cassert>
#include <cstdio>
#include <cstdlib>

#define QIS_BENCHMARK_REGISTER(abi, name) BENCHMARK(abi::name)
#define QIS_BENCHMARK(size)                                               \
  QIS_BENCHMARK_REGISTER(QIS_SIGNATURE_ABI, scan)                         \
    ->ArgsProduct({ benchmark::CreateDenseRange(101, 126, 1), { size } }) \
    ->ArgsProduct({ benchmark::CreateDenseRange(201, 226, 1), { size } }) \
    ->Iterations(benchmark_iterations(size))

#define QIS_BENCHMARK_ABORT(message)            \
  std::fputs("\nError: " message "\n", stderr); \
  std::exit(EXIT_FAILURE);

std::set<std::size_t>& memory();

namespace QIS_SIGNATURE_ABI {

using namespace mem::literals;

static benchmark::IterationCount benchmark_iterations(std::size_t size) noexcept
{
  memory().insert(size);
  // clang-format off
  return size <=  64_kb ? 4096
       : size <= 256_kb ? 2048
       : size <=   1_mb ? 1024
       : size <=   4_mb ? 512
       : size <=  16_mb ? 64
       : size <=  64_mb ? 32
       : size <= 256_mb ? 16 : 8;
  // clang-format on
}

static void scan(benchmark::State& state)
{
  using benchmark::DoNotOptimize;

  // Handle benchmark parameters.
  const auto type = static_cast<std::size_t>(state.range(0));
  const auto size = static_cast<std::size_t>(state.range(1));

  // Create signature.
  const auto signature = [&]() {
    auto pattern = mem::signature(type < 200 ? type - 100 : type - 200);
    if (type >= 200) {
      pattern[size == 1 ? 1 : 4] = '?';
    }
    return qis::signature(pattern);
  }();

  // Get random data.
  const auto data = mem::get(size);

  // Create and initialize memory for a copy of the data.
  std::vector<std::uint8_t> copy(size);
  DoNotOptimize(std::memcpy(copy.data(), data.data(), size));

  // Verify data copy and signature.
  if (const auto pos = qis::scan(copy.data(), size, signature); pos != size - 26) {
    QIS_BENCHMARK_ABORT("Scan failed.");
  }

  // Run benchmark.
  for (auto _ : state) {
    state.PauseTiming();
    DoNotOptimize(std::memcpy(copy.data(), data.data(), size));
    state.ResumeTiming();
    const auto pos = qis::scan(copy.data(), size, signature);
    DoNotOptimize(pos);
  }
}

// clang-format off
QIS_BENCHMARK( 16_kb);
QIS_BENCHMARK( 64_kb);
QIS_BENCHMARK(256_kb);
QIS_BENCHMARK(  1_mb);
QIS_BENCHMARK(  4_mb);
QIS_BENCHMARK( 16_mb);
QIS_BENCHMARK( 64_mb);
QIS_BENCHMARK(256_mb);
QIS_BENCHMARK(512_mb);
QIS_BENCHMARK(  1_gb);
QIS_BENCHMARK(  2_gb);
// clang-format on

}  // namespace QIS_SIGNATURE_ABI
