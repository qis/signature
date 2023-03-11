#define QIS_SIGNATURE_USE_AVX 1
#define QIS_SIGNATURE_USE_PAR 0
#define QIS_SIGNATURE_USE_TBB 1
#define QIS_TEST(name) TEST_CASE(name " (avx, tbb)")
#include <tests.hpp>