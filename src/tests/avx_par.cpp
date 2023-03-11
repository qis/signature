#define QIS_SIGNATURE_USE_AVX 1
#define QIS_SIGNATURE_USE_PAR 1
#define QIS_SIGNATURE_USE_TBB 0
#define QIS_TEST(name) TEST_CASE(name " (avx, par)")
#include <tests.hpp>