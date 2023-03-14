#define QIS_SIGNATURE_ABI avx_tbb
#define QIS_SIGNATURE_USE_AVX 1
#define QIS_SIGNATURE_USE_TBB 1
#include <benchmarks.hpp>
static_assert(QIS_SIGNATURE_USE_EXCEPTIONS == 1);