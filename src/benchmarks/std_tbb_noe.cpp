#define QIS_SIGNATURE_ABI std_tbb_noe
#define QIS_SIGNATURE_USE_AVX 0
#define QIS_SIGNATURE_USE_TBB 1
#include <benchmarks.hpp>
static_assert(QIS_SIGNATURE_USE_EXCEPTIONS == 0);
#ifdef _MSC_VER
static_assert(_HAS_EXCEPTIONS == 0);
#endif