#define QIS_SIGNATURE_USE_AVX 1
#define QIS_SIGNATURE_USE_PAR 1
#define QIS_SIGNATURE_USE_TBB 0
#define QIS_BENCHMARK_NAME(name) name##_avx_par
#define QIS_BENCHMARK_CALL(name) BENCHMARK(name##_avx_par)
#include <benchmarks.hpp>