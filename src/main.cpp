#include "memory.hpp"
#include <qis/signature.hpp>
#include <format>
#include <ranges>
#include <cassert>

static_assert(QIS_SIGNATURE_USE_AVX);
static_assert(QIS_SIGNATURE_USE_TBB);

#define REQUIRE assert

int main() {}