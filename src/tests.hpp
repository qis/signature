#pragma once
#include <qis/signature.hpp>
#include <doctest/doctest.h>
#include <memory.hpp>
#include <array>
#include <numeric>
#include <ranges>
#include <sstream>
#include <string>

#define QIS_TEST(name) TEST_CASE(QIS_STRINGIFY_EXPAND(QIS_SIGNATURE_ABI) ": " name)

namespace QIS_SIGNATURE_ABI {

using namespace mem::literals;
using sv = std::string_view;

inline bool is_digit_char(char c) noexcept
{
  return std::isxdigit(c);
}

inline bool is_valid_char(char c) noexcept
{
  return is_digit_char(c) || c == '?';
}

constexpr auto bytes = std::views::iota('\0') | std::views::take(256);
constexpr auto digit = std::views::filter(is_digit_char);
constexpr auto valid = std::views::filter(is_valid_char);

constexpr auto rest = [](auto fv) noexcept {
  return fv.base() | std::views::filter(std::not_fn(fv.pred()));
};

QIS_TEST("signature()")
{
  const qis::signature s;
  REQUIRE(s.size() == 0);
  REQUIRE(s.data() == nullptr);
  REQUIRE(s.mask() == nullptr);
}

QIS_TEST("signature(string_view)")
{
  SUBCASE("empty signature data")
  {
    REQUIRE_THROWS_AS(qis::signature{ "" }, qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature{ " " }, qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature{ "   " }, qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature{ "     " }, qis::invalid_signature);
  }

  SUBCASE("signature data size: 1")
  {
    for (auto c : bytes) {
      sv data(&c, 1);
      REQUIRE_THROWS_AS(qis::signature{ data }, qis::invalid_signature);
    }
  }

  SUBCASE("signature data size: 2 (valid)")
  {
    std::string data(2, ' ');
    for (auto c0 : bytes | valid) {
      data[0] = c0;
      for (auto c1 : bytes | valid) {
        data[1] = c1;
        qis::signature s{ data };
        REQUIRE(s.size() == 1);
        REQUIRE(s.data() != nullptr);
        if (c0 == '?' || c1 == '?') {
          REQUIRE(s.mask() != nullptr);
        } else {
          REQUIRE(s.mask() == nullptr);
        }
      }
    }
  }

  SUBCASE("signature data size: 2 (not valid)")
  {
    REQUIRE_THROWS_AS(qis::signature{ "0G" }, qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature{ "G0" }, qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature{ "?G" }, qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature{ "G?" }, qis::invalid_signature);
  }

  SUBCASE("data size: 1")
  {
    qis::signature s0{ "00" };
    REQUIRE(s0.data()[0] == '\x00');

    qis::signature s1{ "0F" };
    REQUIRE(s1.data()[0] == '\x0F');

    qis::signature s2{ "F0" };
    REQUIRE(s2.data()[0] == '\xF0');

    qis::signature s3{ "FF" };
    REQUIRE(s3.data()[0] == '\xFF');

    qis::signature s4{ "?0" };
    REQUIRE(s4.data()[0] == '\x00');
    REQUIRE(s4.mask()[0] == '\x0F');

    qis::signature s5{ "?F" };
    REQUIRE(s5.data()[0] == '\x0F');
    REQUIRE(s5.mask()[0] == '\x0F');

    qis::signature s6{ "0?" };
    REQUIRE(s6.data()[0] == '\x00');
    REQUIRE(s6.mask()[0] == '\xF0');

    qis::signature s7{ "F?" };
    REQUIRE(s7.data()[0] == '\xF0');
    REQUIRE(s7.mask()[0] == '\xF0');

    qis::signature s8{ "??" };
    REQUIRE(s8.data()[0] == '\x00');
    REQUIRE(s8.mask()[0] == '\x00');
  }

  SUBCASE("signature data size: 3")
  {
    std::string data{ "FF " };
    for (auto c : bytes | valid) {
      data[2] = c;
      REQUIRE_THROWS_AS(qis::signature{ data }, qis::invalid_signature);
    }
  }

  SUBCASE("signature data size: 4")
  {
    std::string data{ "FF  " };
    for (auto c : bytes | valid) {
      data[3] = c;
      REQUIRE_THROWS_AS(qis::signature{ data }, qis::invalid_signature);
    }
  }

  SUBCASE("signature data size: 5 (valid)")
  {
    std::string data{ "FF F " };
    for (auto c : bytes | valid) {
      data[4] = c;
      qis::signature s{ data };
      REQUIRE(s.size() == 2);
      REQUIRE(s.data() != nullptr);
      if (c == '?') {
        REQUIRE(s.mask() != nullptr);
      } else {
        REQUIRE(s.mask() == nullptr);
      }
    }
  }

  SUBCASE("signature data size: 5 (not valid)")
  {
    REQUIRE_THROWS_AS(qis::signature{ "FF 0G" }, qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature{ "FF G0" }, qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature{ "FF ?G" }, qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature{ "FF G?" }, qis::invalid_signature);
  }

  SUBCASE("data size: 2")
  {
    qis::signature s0{ "FF 00" };
    REQUIRE(sv(s0.data(), 2) == sv("\xFF\x00", 2));

    qis::signature s1{ "FF 0F" };
    REQUIRE(sv(s1.data(), 2) == sv("\xFF\x0F", 2));

    qis::signature s2{ "FF F0" };
    REQUIRE(sv(s2.data(), 2) == sv("\xFF\xF0", 2));

    qis::signature s3{ "FF FF" };
    REQUIRE(sv(s3.data(), 2) == sv("\xFF\xFF", 2));

    qis::signature s4{ "FF ?0" };
    REQUIRE(sv(s4.data(), 2) == sv("\xFF\x00", 2));
    REQUIRE(sv(s4.mask(), 2) == sv("\xFF\x0F", 2));

    qis::signature s5{ "FF ?F" };
    REQUIRE(sv(s5.data(), 2) == sv("\xFF\x0F", 2));
    REQUIRE(sv(s5.mask(), 2) == sv("\xFF\x0F", 2));

    qis::signature s6{ "FF 0?" };
    REQUIRE(sv(s6.data(), 2) == sv("\xFF\x00", 2));
    REQUIRE(sv(s6.mask(), 2) == sv("\xFF\xF0", 2));

    qis::signature s7{ "FF F?" };
    REQUIRE(sv(s7.data(), 2) == sv("\xFF\xF0", 2));
    REQUIRE(sv(s7.mask(), 2) == sv("\xFF\xF0", 2));

    qis::signature s8{ "FF ??" };
    REQUIRE(sv(s8.data(), 2) == sv("\xFF\x00", 2));
    REQUIRE(sv(s8.mask(), 2) == sv("\xFF\x00", 2));
  }

  SUBCASE("signature data size: 6")
  {
    std::string data{ "FF FF " };
    for (auto c : bytes | valid) {
      data[5] = c;
      REQUIRE_THROWS_AS(qis::signature{ data }, qis::invalid_signature);
    }
  }
}

QIS_TEST("signature(string_view, string_view mask)")
{
  SUBCASE("empty signature mask")
  {
    qis::signature s("00", "");
    REQUIRE(s.size() == 1);
    REQUIRE(s.data() != nullptr);
    REQUIRE(s.mask() == nullptr);
    REQUIRE_THROWS_AS(qis::signature("00", " "), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature("00", "   "), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature("00", "     "), qis::invalid_signature);
  }

  SUBCASE("signature mask size: 1")
  {
    for (auto c : bytes) {
      sv mask(&c, 1);
      REQUIRE_THROWS_AS(qis::signature("00", mask), qis::invalid_signature);
    }
  }

  SUBCASE("signature mask size: 2 (digit)")
  {
    std::string mask(2, ' ');
    for (auto c0 : bytes | digit) {
      mask[0] = c0;
      for (auto c1 : bytes | digit) {
        mask[1] = c1;
        qis::signature s("00", mask);
        REQUIRE(s.size() == 1);
        REQUIRE(s.data() != nullptr);
        REQUIRE(s.mask() != nullptr);
      }
    }
  }

  SUBCASE("mask size: 1")
  {
    qis::signature s0("FF", "00");
    REQUIRE(s0.data()[0] == '\xFF');
    REQUIRE(s0.mask()[0] == '\x00');

    qis::signature s1("FF", "0F");
    REQUIRE(s1.data()[0] == '\xFF');
    REQUIRE(s1.mask()[0] == '\x0F');

    qis::signature s2("FF", "F0");
    REQUIRE(s2.data()[0] == '\xFF');
    REQUIRE(s2.mask()[0] == '\xF0');

    qis::signature s3("FF", "FF");
    REQUIRE(s3.data()[0] == '\xFF');
    REQUIRE(s3.mask()[0] == '\xFF');
  }

  SUBCASE("signature mask size: 2 (not digit)")
  {
    REQUIRE_THROWS_AS(qis::signature("00", "0G"), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature("00", "G0"), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature("00", "0?"), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature("00", "?0"), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature("00", "??"), qis::invalid_signature);
  }

  SUBCASE("signature mask size: 3")
  {
    std::string mask{ "FF " };
    for (auto c : bytes | digit) {
      mask[2] = c;
      REQUIRE_THROWS_AS(qis::signature("00", mask), qis::invalid_signature);
    }
  }

  SUBCASE("signature mask size: 4")
  {
    std::string mask{ "FF  " };
    for (auto c : bytes | digit) {
      mask[3] = c;
      REQUIRE_THROWS_AS(qis::signature("00", mask), qis::invalid_signature);
    }
  }

  SUBCASE("signature mask size: 5 (digit)")
  {
    std::string mask{ "FF F " };
    for (auto c : bytes | digit) {
      mask[4] = c;
      qis::signature s("00 00", mask);
      REQUIRE(s.size() == 2);
      REQUIRE(s.data() != nullptr);
      REQUIRE(s.mask() != nullptr);
    }
  }

  SUBCASE("signature mask size: 5 (not digit)")
  {
    REQUIRE_THROWS_AS(qis::signature("00 00", "FF 0G"), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature("00 00", "FF G0"), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature("00 00", "FF 0?"), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature("00 00", "FF ?0"), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature("00 00", "FF ??"), qis::invalid_signature);
  }

  SUBCASE("data size: 2 (same size)")
  {
    qis::signature s0("FF FF", "FF 00");
    REQUIRE(sv(s0.data(), 2) == sv("\xFF\xFF", 2));
    REQUIRE(sv(s0.mask(), 2) == sv("\xFF\x00", 2));

    qis::signature s1("FF FF", "FF 0F");
    REQUIRE(sv(s1.data(), 2) == sv("\xFF\xFF", 2));
    REQUIRE(sv(s1.mask(), 2) == sv("\xFF\x0F", 2));

    qis::signature s2("FF FF", "FF F0");
    REQUIRE(sv(s2.data(), 2) == sv("\xFF\xFF", 2));
    REQUIRE(sv(s2.mask(), 2) == sv("\xFF\xF0", 2));

    qis::signature s3("FF FF", "FF FF");
    REQUIRE(sv(s3.data(), 2) == sv("\xFF\xFF", 2));
    REQUIRE(sv(s3.mask(), 2) == sv("\xFF\xFF", 2));
  }

  SUBCASE("data size: 2 (mask smaller)")
  {
    qis::signature s0("FF FF", "00");
    REQUIRE(s0.size() == 2);
    REQUIRE(s0.mask() != nullptr);
    REQUIRE(sv(s0.data(), 2) == sv("\xFF\xFF", 2));
    REQUIRE(sv(s0.mask(), 2) == sv("\x00\xFF", 2));

    qis::signature s1("FF FF", "0F");
    REQUIRE(s1.size() == 2);
    REQUIRE(s1.mask() != nullptr);
    REQUIRE(sv(s1.data(), 2) == sv("\xFF\xFF", 2));
    REQUIRE(sv(s1.mask(), 2) == sv("\x0F\xFF", 2));

    qis::signature s2("FF FF", "F0");
    REQUIRE(s2.size() == 2);
    REQUIRE(s2.mask() != nullptr);
    REQUIRE(sv(s2.data(), 2) == sv("\xFF\xFF", 2));
    REQUIRE(sv(s2.mask(), 2) == sv("\xF0\xFF", 2));

    qis::signature s3("FF FF", "FF");
    REQUIRE(s3.size() == 2);
    REQUIRE(s3.mask() != nullptr);
    REQUIRE(sv(s3.data(), 2) == sv("\xFF\xFF", 2));
    REQUIRE(sv(s3.mask(), 2) == sv("\xFF\xFF", 2));
  }

  SUBCASE("data size: 2 (mask larger)")
  {
    qis::signature s0("FF FF", "FF 00 FF");
    REQUIRE(s0.size() == 2);
    REQUIRE(s0.mask() != nullptr);
    REQUIRE(sv(s0.data(), 2) == sv("\xFF\xFF", 2));
    REQUIRE(sv(s0.mask(), 2) == sv("\xFF\x00", 2));

    qis::signature s1("FF FF", "FF 0F FF");
    REQUIRE(s1.size() == 2);
    REQUIRE(s1.mask() != nullptr);
    REQUIRE(sv(s1.data(), 2) == sv("\xFF\xFF", 2));
    REQUIRE(sv(s1.mask(), 2) == sv("\xFF\x0F", 2));

    qis::signature s2("FF FF", "FF F0 FF");
    REQUIRE(s2.size() == 2);
    REQUIRE(s2.mask() != nullptr);
    REQUIRE(sv(s2.data(), 2) == sv("\xFF\xFF", 2));
    REQUIRE(sv(s2.mask(), 2) == sv("\xFF\xF0", 2));

    qis::signature s3("FF FF", "FF FF FF");
    REQUIRE(s3.size() == 2);
    REQUIRE(s3.mask() != nullptr);
    REQUIRE(sv(s3.data(), 2) == sv("\xFF\xFF", 2));
    REQUIRE(sv(s3.mask(), 2) == sv("\xFF\xFF", 2));
  }

  SUBCASE("signature mask size: 6")
  {
    std::string mask{ "FF FF " };
    for (auto c : bytes | digit) {
      mask[5] = c;
      REQUIRE_THROWS_AS(qis::signature("00 00", mask), qis::invalid_signature);
    }
  }
}

QIS_TEST("signature(const void*, std::size_t)") {}
QIS_TEST("signature(const void*, std::size_t, const void*, std::size_t)") {}
QIS_TEST("signature(signature&&)") {}
QIS_TEST("signature(const signature&)") {}
QIS_TEST("signature& operator=(signature&&)") {}
QIS_TEST("signature& operator=(const signature&)") {}
QIS_TEST("scan") {}

}  // namespace QIS_SIGNATURE_ABI