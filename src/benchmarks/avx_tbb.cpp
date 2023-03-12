#define QIS_SIGNATURE_USE_AVX 1
#define QIS_SIGNATURE_USE_PAR 0
#define QIS_SIGNATURE_USE_TBB 1
#define QIS_BENCHMARK(name, ...) static void name##_avx_tbb(__VA_ARGS__)
#define QIS_CALL(name) BENCHMARK(name##_avx_tbb)
#include <benchmarks.hpp>