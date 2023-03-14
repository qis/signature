#define QIS_SIGNATURE_ABI std_seq_noe
#define QIS_SIGNATURE_USE_AVX 0
#define QIS_SIGNATURE_USE_TBB 0
#include <tests.hpp>
static_assert(QIS_SIGNATURE_USE_EXCEPTIONS == 0);