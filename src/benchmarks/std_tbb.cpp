#define QIS_SIGNATURE_USE_AVX 0
#define QIS_SIGNATURE_USE_PAR 0
#define QIS_SIGNATURE_USE_TBB 1

#define QIS_BENCHMARK(name, ...)           \
  static void name##_std_par(__VA_ARGS__); \
  BENCHMARK(name##_std_par);               \
  static void name##_std_par(__VA_ARGS__)

#include <benchmarks.hpp>