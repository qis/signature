#pragma once
#include <qis/signature.hpp>
#include <doctest/doctest.h>
#include <memory.hpp>

#ifndef QIS_TEST
#  define QIS_TEST(name) TEST_CASE(name)
#endif

using namespace mem::literals;

QIS_TEST("3 bytes")
{
  const auto m0 = mem::create(128_mib, "01 ?? 04");
  const qis::signature s0{ "01 00 02" };
  REQUIRE(s0.size() == 3);
  REQUIRE(qis::scan(m0.data(), m0.size(), s0) == qis::signature::npos);
}