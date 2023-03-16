#pragma once
#define QIS_SIGNATURE_INLINE_NAMESPACE_BEGIN inline namespace QIS_SIGNATURE_ABI {
#define QIS_SIGNATURE_INLINE_NAMESPACE_END }
#define QIS_SIGNATURE_EXTRA_ASSERTS
#include <qis/signature.hpp>
#if !QIS_SIGNATURE_USE_EXCEPTIONS
#define DOCTEST_CONFIG_NO_EXCEPTIONS_BUT_WITH_ALL_ASSERTS 1
#endif
#include <doctest/doctest.h>
#include <memory.hpp>
#include <array>
#include <numeric>
#include <ranges>
#include <sstream>
#include <string>

#ifdef _WIN32
#include <windows.h>
#include <memory>
#endif

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
    REQUIRE_THROWS_AS(qis::signature{ sv("") }, qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature{ sv(" ") }, qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature{ sv("  ") }, qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature{ sv("   ") }, qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature{ sv("    ") }, qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature{ sv("     ") }, qis::invalid_signature);
  }

  SUBCASE("signature data size: 1")
  {
    for (auto c : bytes) {
      const sv data(&c, 1);
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
        const qis::signature s{ data };
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
    const qis::signature s0{ "00" };
    REQUIRE(s0.data()[0] == '\x00');

    const qis::signature s1{ "0F" };
    REQUIRE(s1.data()[0] == '\x0F');

    const qis::signature s2{ "F0" };
    REQUIRE(s2.data()[0] == '\xF0');

    const qis::signature s3{ "FF" };
    REQUIRE(s3.data()[0] == '\xFF');

    const qis::signature s4{ "?0" };
    REQUIRE(s4.data()[0] == '\x00');
    REQUIRE(s4.mask()[0] == '\x0F');

    const qis::signature s5{ "?F" };
    REQUIRE(s5.data()[0] == '\x0F');
    REQUIRE(s5.mask()[0] == '\x0F');

    const qis::signature s6{ "0?" };
    REQUIRE(s6.data()[0] == '\x00');
    REQUIRE(s6.mask()[0] == '\xF0');

    const qis::signature s7{ "F?" };
    REQUIRE(s7.data()[0] == '\xF0');
    REQUIRE(s7.mask()[0] == '\xF0');

    const qis::signature s8{ "??" };
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
      const qis::signature s{ data };
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
    const qis::signature s0{ "FF 00" };
    REQUIRE(sv(s0.data(), 2) == sv("\xFF\x00", 2));

    const qis::signature s1{ "FF 0F" };
    REQUIRE(sv(s1.data(), 2) == sv("\xFF\x0F", 2));

    const qis::signature s2{ "FF F0" };
    REQUIRE(sv(s2.data(), 2) == sv("\xFF\xF0", 2));

    const qis::signature s3{ "FF FF" };
    REQUIRE(sv(s3.data(), 2) == sv("\xFF\xFF", 2));

    const qis::signature s4{ "FF ?0" };
    REQUIRE(sv(s4.data(), 2) == sv("\xFF\x00", 2));
    REQUIRE(sv(s4.mask(), 2) == sv("\xFF\x0F", 2));

    const qis::signature s5{ "FF ?F" };
    REQUIRE(sv(s5.data(), 2) == sv("\xFF\x0F", 2));
    REQUIRE(sv(s5.mask(), 2) == sv("\xFF\x0F", 2));

    const qis::signature s6{ "FF 0?" };
    REQUIRE(sv(s6.data(), 2) == sv("\xFF\x00", 2));
    REQUIRE(sv(s6.mask(), 2) == sv("\xFF\xF0", 2));

    const qis::signature s7{ "FF F?" };
    REQUIRE(sv(s7.data(), 2) == sv("\xFF\xF0", 2));
    REQUIRE(sv(s7.mask(), 2) == sv("\xFF\xF0", 2));

    const qis::signature s8{ "FF ??" };
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
    const qis::signature s("00", "");
    REQUIRE(s.size() == 1);
    REQUIRE(s.data() != nullptr);
    REQUIRE(s.mask() == nullptr);
    REQUIRE_THROWS_AS(qis::signature("00", sv(" ")), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature("00", sv("  ")), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature("00", sv("   ")), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature("00", sv("    ")), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature("00", sv("     ")), qis::invalid_signature);
  }

  SUBCASE("signature mask size: 1")
  {
    for (auto c : bytes) {
      const sv mask(&c, 1);
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
        const qis::signature s("00", mask);
        REQUIRE(s.size() == 1);
        REQUIRE(s.data() != nullptr);
        REQUIRE(s.mask() != nullptr);
      }
    }
  }

  SUBCASE("mask size: 1")
  {
    const qis::signature s0("FF", "00");
    REQUIRE(s0.data()[0] == '\xFF');
    REQUIRE(s0.mask()[0] == '\x00');

    const qis::signature s1("FF", "0F");
    REQUIRE(s1.data()[0] == '\xFF');
    REQUIRE(s1.mask()[0] == '\x0F');

    const qis::signature s2("FF", "F0");
    REQUIRE(s2.data()[0] == '\xFF');
    REQUIRE(s2.mask()[0] == '\xF0');

    const qis::signature s3("FF", "FF");
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
      const qis::signature s("00 00", mask);
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
    const qis::signature s0("FF FF", "FF 00");
    REQUIRE(sv(s0.data(), 2) == sv("\xFF\xFF", 2));
    REQUIRE(sv(s0.mask(), 2) == sv("\xFF\x00", 2));

    const qis::signature s1("FF FF", "FF 0F");
    REQUIRE(sv(s1.data(), 2) == sv("\xFF\xFF", 2));
    REQUIRE(sv(s1.mask(), 2) == sv("\xFF\x0F", 2));

    const qis::signature s2("FF FF", "FF F0");
    REQUIRE(sv(s2.data(), 2) == sv("\xFF\xFF", 2));
    REQUIRE(sv(s2.mask(), 2) == sv("\xFF\xF0", 2));

    const qis::signature s3("FF FF", "FF FF");
    REQUIRE(sv(s3.data(), 2) == sv("\xFF\xFF", 2));
    REQUIRE(sv(s3.mask(), 2) == sv("\xFF\xFF", 2));
  }

  SUBCASE("data size: 2 (mask smaller)")
  {
    const qis::signature s0("FF FF", "00");
    REQUIRE(s0.size() == 2);
    REQUIRE(s0.mask() != nullptr);
    REQUIRE(sv(s0.data(), 2) == sv("\xFF\xFF", 2));
    REQUIRE(sv(s0.mask(), 2) == sv("\x00\xFF", 2));

    const qis::signature s1("FF FF", "0F");
    REQUIRE(s1.size() == 2);
    REQUIRE(s1.mask() != nullptr);
    REQUIRE(sv(s1.data(), 2) == sv("\xFF\xFF", 2));
    REQUIRE(sv(s1.mask(), 2) == sv("\x0F\xFF", 2));

    const qis::signature s2("FF FF", "F0");
    REQUIRE(s2.size() == 2);
    REQUIRE(s2.mask() != nullptr);
    REQUIRE(sv(s2.data(), 2) == sv("\xFF\xFF", 2));
    REQUIRE(sv(s2.mask(), 2) == sv("\xF0\xFF", 2));

    const qis::signature s3("FF FF", "FF");
    REQUIRE(s3.size() == 2);
    REQUIRE(s3.mask() != nullptr);
    REQUIRE(sv(s3.data(), 2) == sv("\xFF\xFF", 2));
    REQUIRE(sv(s3.mask(), 2) == sv("\xFF\xFF", 2));
  }

  SUBCASE("data size: 2 (mask larger)")
  {
    const qis::signature s0("FF FF", "FF 00 FF");
    REQUIRE(s0.size() == 2);
    REQUIRE(s0.mask() != nullptr);
    REQUIRE(sv(s0.data(), 2) == sv("\xFF\xFF", 2));
    REQUIRE(sv(s0.mask(), 2) == sv("\xFF\x00", 2));

    const qis::signature s1("FF FF", "FF 0F FF");
    REQUIRE(s1.size() == 2);
    REQUIRE(s1.mask() != nullptr);
    REQUIRE(sv(s1.data(), 2) == sv("\xFF\xFF", 2));
    REQUIRE(sv(s1.mask(), 2) == sv("\xFF\x0F", 2));

    const qis::signature s2("FF FF", "FF F0 FF");
    REQUIRE(s2.size() == 2);
    REQUIRE(s2.mask() != nullptr);
    REQUIRE(sv(s2.data(), 2) == sv("\xFF\xFF", 2));
    REQUIRE(sv(s2.mask(), 2) == sv("\xFF\xF0", 2));

    const qis::signature s3("FF FF", "FF FF FF");
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

QIS_TEST("signature(const void*, std::size_t, const void*, std::size_t)")
{
  const char* bin = "\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09";

  SUBCASE("data: nullptr, dsize: 0")
  {
    const qis::signature s0(nullptr, 0, nullptr, 0);
    REQUIRE(s0.size() == 0);
    REQUIRE(s0.data() == nullptr);
    REQUIRE(s0.mask() == nullptr);

    REQUIRE_THROWS_AS(qis::signature(nullptr, 0, nullptr, 1), qis::invalid_signature);

    const qis::signature s2(nullptr, 0, bin, 0);
    REQUIRE(s2.size() == 0);
    REQUIRE(s2.data() == nullptr);
    REQUIRE(s2.mask() == nullptr);

    const qis::signature s3(nullptr, 0, bin, 1);
    REQUIRE(s3.size() == 0);
    REQUIRE(s3.data() == nullptr);
    REQUIRE(s3.mask() == nullptr);
  }

  SUBCASE("data: nullptr, dsize: 1")
  {
    REQUIRE_THROWS_AS(qis::signature(nullptr, 1, nullptr, 0), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature(nullptr, 1, nullptr, 1), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature(nullptr, 1, bin, 0), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature(nullptr, 1, bin, 1), qis::invalid_signature);
  }

  SUBCASE("data: (valid), dsize: 0")
  {
    const qis::signature s0(bin, 0, nullptr, 0);
    REQUIRE(s0.size() == 0);
    REQUIRE(s0.data() == nullptr);
    REQUIRE(s0.mask() == nullptr);

    REQUIRE_THROWS_AS(qis::signature(bin, 0, nullptr, 1), qis::invalid_signature);

    const qis::signature s2(bin, 0, bin, 0);
    REQUIRE(s2.size() == 0);
    REQUIRE(s2.data() == nullptr);
    REQUIRE(s2.mask() == nullptr);

    const qis::signature s3(bin, 0, bin, 1);
    REQUIRE(s3.size() == 0);
    REQUIRE(s3.data() == nullptr);
    REQUIRE(s3.mask() == nullptr);
  }

  SUBCASE("data: (valid), dsize: 1")
  {
    const qis::signature s0(bin, 1, nullptr, 0);
    REQUIRE(s0.size() == 1);
    REQUIRE(s0.data() != nullptr);
    REQUIRE(s0.data() != bin);
    REQUIRE(s0.mask() == nullptr);

    REQUIRE_THROWS_AS(qis::signature(bin, 1, nullptr, 1), qis::invalid_signature);

    const qis::signature s2(bin, 1, bin, 0);
    REQUIRE(s2.size() == 1);
    REQUIRE(s2.data() != nullptr);
    REQUIRE(s2.data() != bin);
    REQUIRE(s2.mask() == nullptr);

    const qis::signature s3(bin, 1, bin, 1);
    REQUIRE(s3.size() == 1);
    REQUIRE(s3.data() != nullptr);
    REQUIRE(s3.data() != bin);
    REQUIRE(s3.mask() != nullptr);
    REQUIRE(s3.mask() != bin);
  }
}

QIS_TEST("signature(signature&&)")
{
  qis::signature src{ "00 FF ??" };

  const auto size = src.size();
  const auto data = src.data();
  const auto mask = src.mask();

  REQUIRE(size == 3);
  REQUIRE(data != nullptr);
  REQUIRE(mask != nullptr);

  const qis::signature dst(std::move(src));

  REQUIRE(src.size() == 0);        // NOLINT
  REQUIRE(src.data() == nullptr);  // NOLINT
  REQUIRE(src.mask() == nullptr);  // NOLINT

  REQUIRE(dst.size() == 3);
  REQUIRE(dst.data() == data);
  REQUIRE(dst.mask() == mask);
}

QIS_TEST("signature(const signature&)")
{
  const qis::signature src{ "00 FF ??" };
  const qis::signature dst(src);  // NOLINT

  REQUIRE(src.size() == 3);
  REQUIRE(src.data() != nullptr);
  REQUIRE(src.mask() != nullptr);

  REQUIRE(dst.size() == 3);
  REQUIRE(dst.data() != nullptr);
  REQUIRE(dst.mask() != nullptr);

  REQUIRE(dst.data() != src.data());
  REQUIRE(dst.mask() != src.mask());
}

QIS_TEST("signature& operator=(signature&&)")
{
  qis::signature src{ "00 FF ??" };

  const auto size = src.size();
  const auto data = src.data();
  const auto mask = src.mask();

  REQUIRE(size == 3);
  REQUIRE(data != nullptr);
  REQUIRE(mask != nullptr);

  qis::signature dst;
  dst = std::move(src);

  REQUIRE(src.size() == 0);        // NOLINT
  REQUIRE(src.data() == nullptr);  // NOLINT
  REQUIRE(src.mask() == nullptr);  // NOLINT

  REQUIRE(dst.size() == 3);
  REQUIRE(dst.data() == data);
  REQUIRE(dst.mask() == mask);
}

QIS_TEST("signature& operator=(const signature&)")
{
  const qis::signature src{ "00 FF ??" };
  qis::signature dst;
  dst = src;

  REQUIRE(src.size() == 3);
  REQUIRE(src.data() != nullptr);
  REQUIRE(src.mask() != nullptr);

  REQUIRE(dst.size() == 3);
  REQUIRE(dst.data() != nullptr);
  REQUIRE(dst.mask() != nullptr);

  REQUIRE(dst.data() != src.data());
  REQUIRE(dst.mask() != src.mask());
}

QIS_TEST("scan")
{
  mem::initialize(std::vector{ 15_b, 26_b, 30_b, 1_mb });
  const auto m15b = mem::get(15_b);
  const auto m26b = mem::get(26_b);
  const auto m30b = mem::get(30_b);
  const auto m1mb = mem::get(1_mb);
  const auto find = mem::find();
  const auto scan = mem::scan();

  const qis::signature s0{ find.substr(0, 2) };
  const qis::signature s1{ "??" };

  REQUIRE(std::memcmp(s0.data(), m15b.data(), 1) == 0);

  REQUIRE(qis::scan(m15b.data(), 1, s0) == 0);
  REQUIRE(qis::scan(m15b.data(), 1, s1) == 0);

  REQUIRE(qis::scan(nullptr, 0, qis::signature()) == qis::signature::npos);
  REQUIRE(qis::scan(nullptr, 0, s0) == qis::signature::npos);
  REQUIRE(qis::scan(nullptr, 0, s1) == qis::signature::npos);

  REQUIRE(qis::scan(m15b.data(), 0, qis::signature()) == qis::signature::npos);
  REQUIRE(qis::scan(m15b.data(), 0, s0) == qis::signature::npos);
  REQUIRE(qis::scan(m15b.data(), 0, s1) == qis::signature::npos);

  REQUIRE(qis::scan(nullptr, 1, qis::signature()) == qis::signature::npos);
  REQUIRE(qis::scan(nullptr, 1, s0) == qis::signature::npos);
  REQUIRE(qis::scan(nullptr, 1, s1) == qis::signature::npos);

  REQUIRE(qis::scan(m15b.data(), 1, qis::signature()) == 0);

  const qis::signature s2(find);
  REQUIRE(s2.size() == 26);
  REQUIRE(s2.mask() == nullptr);

  REQUIRE(std::memcmp(s2.data(), m15b.data(), 15) == 0);
  REQUIRE(qis::scan(m15b.data(), 15, s2) == qis::signature::npos);

  REQUIRE(std::memcmp(s2.data(), m26b.data(), 26) == 0);
  REQUIRE(qis::scan(m26b.data(), 26, s2) == 0);

  REQUIRE(std::memcmp(s2.data(), m30b.data() + 4, 26) == 0);
  REQUIRE(qis::scan(m30b.data(), 30, s2) == 4);

  REQUIRE(std::memcmp(s2.data(), m1mb.data() + 1_mb - 26, 26) == 0);
  REQUIRE(qis::scan(m1mb.data(), 1_mb, s2) == 1_mb - 26);

  const qis::signature s3(scan);
  REQUIRE(s3.size() == 26);
  REQUIRE(s3.mask() != nullptr);

  REQUIRE(std::memcmp(s3.data(), m15b.data(), 15) != 0);
  REQUIRE(std::memcmp(s3.mask(), m15b.data(), 15) != 0);
  REQUIRE(qis::scan(m15b.data(), 15, s3) == qis::signature::npos);

  REQUIRE(std::memcmp(s3.data(), m26b.data(), 26) != 0);
  REQUIRE(std::memcmp(s3.mask(), m26b.data(), 26) != 0);
  REQUIRE(qis::scan(m26b.data(), 26, s3) == 0);

  REQUIRE(std::memcmp(s3.data(), m30b.data() + 4, 26) != 0);
  REQUIRE(std::memcmp(s3.mask(), m30b.data() + 4, 26) != 0);
  REQUIRE(qis::scan(m30b.data(), 30, s3) == 4);

  REQUIRE(std::memcmp(s3.data(), m1mb.data() + 1_mb - 26, 26) != 0);
  REQUIRE(std::memcmp(s3.mask(), m1mb.data() + 1_mb - 26, 26) != 0);
  REQUIRE(qis::scan(m1mb.data(), 1_mb, s3) == 1_mb - 26);

  REQUIRE(find[1] != 'F');
  std::string find_miss(find);
  find_miss[1] = 'F';

  const qis::signature s4(find_miss);
  REQUIRE(s4.size() == 26);
  REQUIRE(s4.mask() == nullptr);
  REQUIRE(std::memcmp(s4.data(), m1mb.data() + 1_mb - 26, 26) != 0);
  REQUIRE(qis::scan(m1mb.data(), 1_mb, s4) == qis::signature::npos);

  REQUIRE(scan[1] != 'F');
  REQUIRE(scan[1] != '?');
  std::string scan_miss(scan);
  scan_miss[1] = 'F';

  const qis::signature s5(scan_miss);
  REQUIRE(s5.size() == 26);
  REQUIRE(s5.mask() != nullptr);
  REQUIRE(std::memcmp(s5.data(), m1mb.data() + 1_mb - 26, 26) != 0);
  REQUIRE(std::memcmp(s5.mask(), m1mb.data() + 1_mb - 26, 26) != 0);
  REQUIRE(qis::scan(m1mb.data(), 1_mb, s5) == qis::signature::npos);
}

#ifdef _WIN32

QIS_TEST("memory access")
{
  mem::initialize(std::vector{ 1_mb });
  const auto m1mb = mem::get(1_mb);

  SYSTEM_INFO si{};
  GetSystemInfo(&si);
  REQUIRE(si.dwPageSize >= 256);

  const auto find = mem::find();
  const auto scan = mem::scan();
  const qis::signature data(find);

  std::shared_ptr<char> memory(
    reinterpret_cast<char*>(VirtualAlloc(nullptr, si.dwPageSize * 2, MEM_COMMIT, PAGE_READWRITE)),
    [&](auto address) noexcept {
      VirtualFree(address, si.dwPageSize * 2, MEM_RELEASE);
    });

  auto begin = memory.get();
  auto end = begin + si.dwPageSize;

  const auto check = [&](std::string_view str) {
    for (std::size_t i = 1; i < str.size() / 3 + 1; i++) {
      const qis::signature sig(str.substr(0, i * 3 - 1));
      for (std::size_t size = 1; size < 256; size++) {
        const auto mmax = end - size;
        std::memcpy(mmax, m1mb.data(), size);
        REQUIRE(qis::scan(mmax, size, sig) == qis::signature::npos);
      }
    }
  };

  check(mem::find());
  check(mem::scan());

  DWORD protect = 0;
  REQUIRE(VirtualProtect(end, si.dwPageSize, PAGE_NOACCESS, &protect));

  check(mem::find());
  check(mem::scan());
}

#endif

}  // namespace QIS_SIGNATURE_ABI
