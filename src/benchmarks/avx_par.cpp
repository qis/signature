#define QIS_SIGNATURE_USE_AVX 1
#define QIS_SIGNATURE_USE_PAR 1
#define QIS_SIGNATURE_USE_TBB 0
#define QIS_BENCHMARK(name, ...) static void name##_avx_par(__VA_ARGS__)
#define QIS_CALL(name) BENCHMARK(name##_avx_par)
#include <benchmarks.hpp>