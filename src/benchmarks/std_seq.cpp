#define QIS_SIGNATURE_USE_AVX 0
#define QIS_SIGNATURE_USE_PAR 0
#define QIS_SIGNATURE_USE_TBB 0
#define QIS_BENCHMARK(name, ...) static void name##_std_seq(__VA_ARGS__)
#define QIS_CALL(name) BENCHMARK(name##_std_seq)
#include <benchmarks.hpp>