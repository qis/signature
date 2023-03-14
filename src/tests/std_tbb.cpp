#define QIS_SIGNATURE_ABI std_tbb
#define QIS_SIGNATURE_USE_AVX 0
#define QIS_SIGNATURE_USE_TBB 1
#include <tests.hpp>
static_assert(QIS_SIGNATURE_USE_EXCEPTIONS == 1);