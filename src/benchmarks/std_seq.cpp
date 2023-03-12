#define QIS_SIGNATURE_USE_AVX 0
#define QIS_SIGNATURE_USE_PAR 0
#define QIS_SIGNATURE_USE_TBB 0
#define QIS_BENCHMARK_NAME(name) name##_std_seq
#define QIS_BENCHMARK_CALL(name) BENCHMARK(name##_std_seq)
#include <benchmarks.hpp>