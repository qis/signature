#define QIS_SIGNATURE_USE_AVX 0
#define QIS_SIGNATURE_USE_PAR 0
#define QIS_SIGNATURE_USE_TBB 1
#define QIS_BENCHMARK_NAME(name) name##_std_tbb
#define QIS_BENCHMARK_CALL(name) BENCHMARK(name##_std_tbb)
#include <benchmarks.hpp>