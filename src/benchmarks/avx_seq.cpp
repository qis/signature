#define QIS_SIGNATURE_USE_AVX 1
#define QIS_SIGNATURE_USE_PAR 0
#define QIS_SIGNATURE_USE_TBB 0
#define QIS_BENCHMARK_NAME(name) name##_avx_seq
#define QIS_BENCHMARK_CALL(name) BENCHMARK(name##_avx_seq)
#include <benchmarks.hpp>