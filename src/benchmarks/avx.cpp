#define QIS_SIGNATURE_USE_AVX 1
#define QIS_SIGNATURE_USE_PAR 0
#define QIS_SIGNATURE_USE_TBB 0

#define QIS_BENCHMARK(name, ...)       \
  static void name##_avx(__VA_ARGS__); \
  BENCHMARK(name##_avx);               \
  static void name##_avx(__VA_ARGS__)

#include <benchmarks.hpp>