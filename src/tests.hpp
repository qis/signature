#pragma once
#include <qis/signature.hpp>
#include <doctest/doctest.h>
#include <memory.hpp>
#include <string>

#define QIS_TEST_NAMESPACE(abi) #abi
#define QIS_TEST_DECLARE(abi, name) TEST_CASE(QIS_TEST_NAMESPACE(abi) "::" name)
#define QIS_TEST(name) QIS_TEST_DECLARE(QIS_SIGNATURE_ABI, name)

namespace QIS_SIGNATURE_ABI {

using namespace mem::literals;

QIS_TEST("parse")
{
  SUBCASE("default")
  {
    const qis::signature s0;
    REQUIRE(s0.size() == 0);
    REQUIRE(s0.data() == nullptr);
    REQUIRE(s0.mask() == nullptr);
  }

  SUBCASE("invalid signature")
  {
    REQUIRE_THROWS_AS(qis::signature(""), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature("0"), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature(" 0"), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature("0 "), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature(" 0 "), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature("00 "), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature(" 00"), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature(" 00 "), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature("000 "), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature(" 000"), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature(" 000 "), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature("00 0"), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature("0 00"), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature("00 0 "), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature("0 00 "), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature(" 00 0"), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature(" 0 00"), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature(" 00 0 "), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature(" 0 00 "), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature("0000"), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature("0 000"), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature("000 0"), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature(" 0000"), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature(" 00 00"), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature("0000 "), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature("00 00 "), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature(" 0000 "), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature(" 00 00 "), qis::invalid_signature);
  }

  SUBCASE("signature: 1A")
  {
    const qis::signature s1("1a");
    REQUIRE(s1.size() == 1);
    REQUIRE(s1.data() != nullptr);
    REQUIRE(s1.mask() == nullptr);
    REQUIRE(*s1.data() == 0x1A);
  }

  SUBCASE("signature: B2")
  {
    const qis::signature s2("B2");
    REQUIRE(s2.size() == 1);
    REQUIRE(s2.data() != nullptr);
    REQUIRE(s2.mask() == nullptr);
    REQUIRE(static_cast<unsigned char>(*s2.data()) == 0xB2);
  }

  SUBCASE("signature: B?")
  {
    const qis::signature s3("B?");
    REQUIRE(s3.size() == 1);
    REQUIRE(s3.data() != nullptr);
    REQUIRE(s3.mask() != nullptr);
    REQUIRE(static_cast<unsigned char>(*s3.data()) == 0xB0);
    REQUIRE(static_cast<unsigned char>(*s3.mask()) == 0xF0);
  }

  SUBCASE("signature: ?E")
  {
    const qis::signature s4("?E");
    REQUIRE(s4.size() == 1);
    REQUIRE(s4.data() != nullptr);
    REQUIRE(s4.mask() != nullptr);
    REQUIRE(static_cast<unsigned char>(*s4.data()) == 0x0E);
    REQUIRE(static_cast<unsigned char>(*s4.mask()) == 0x0F);
  }

  SUBCASE("signature: ??")
  {
    const qis::signature s5("??");
    REQUIRE(s5.size() == 1);
    REQUIRE(s5.data() != nullptr);
    REQUIRE(s5.mask() != nullptr);
    REQUIRE(static_cast<unsigned char>(*s5.data()) == 0x00);
    REQUIRE(static_cast<unsigned char>(*s5.mask()) == 0x00);
  }

  SUBCASE("signature: B2 ??")
  {
    const qis::signature s6("B2 ??");
    REQUIRE(s6.size() == 2);
    REQUIRE(s6.data() != nullptr);
    REQUIRE(s6.mask() != nullptr);
    REQUIRE(std::memcmp(s6.data(), "\xB2\x00", 2) == 0);
    REQUIRE(std::memcmp(s6.mask(), "\xFF\x00", 2) == 0);
  }
}

QIS_TEST("scan")
{
  std::string str;

  SUBCASE("signature: (empty)")
  {
    const qis::signature sig;
    REQUIRE(qis::scan(nullptr, 0, sig) == qis::signature::npos);
    REQUIRE(qis::scan("!", 0, sig) == qis::signature::npos);
    REQUIRE(qis::scan("!", 1, sig) == 0);
  }

  SUBCASE("signature: 1A")
  {
    const qis::signature sig("1a");
    REQUIRE(qis::scan("\x1A", 1, sig) == 0);
    REQUIRE(qis::scan("\x1B", 1, sig) == qis::signature::npos);
    REQUIRE(qis::scan("\xFF\x1A", 2, sig) == 1);
    REQUIRE(qis::scan("\xFF\x1B", 2, sig) == qis::signature::npos);
    REQUIRE(qis::scan("\x1A\xFF", 2, sig) == 0);
    REQUIRE(qis::scan("\x1B\xFF", 2, sig) == qis::signature::npos);
    REQUIRE(qis::scan("\xFE\x1A\xFF", 3, sig) == 1);
    REQUIRE(qis::scan("\xFE\x1B\xFF", 3, sig) == qis::signature::npos);
    for (std::size_t i = 1; i < 20; i++) {
      str.assign(i, '\x00');
      str[i - 1] = '\x1A';
      REQUIRE(qis::scan(str.data(), str.size(), sig) == i - 1);
    }
    for (std::size_t i = 1; i < 20; i++) {
      str.assign(i, '\x00');
      REQUIRE(qis::scan(str.data(), str.size(), sig) == qis::signature::npos);
    }
  }

  SUBCASE("signature: B?")
  {
    const qis::signature sig("B?");
    for (unsigned i = 0x00; i <= 0xFF; i++) {
      const auto byte = static_cast<std::uint8_t>(i);
      if (byte >= 0xB0 && byte <= 0xBF) {
        REQUIRE(qis::scan(&byte, 1, sig) == 0);

        str.assign("\xFF\xFF", 2);
        str[0] = static_cast<char>(byte);
        REQUIRE(qis::scan(str.data(), str.size(), sig) == 0);

        str.assign("\x00\x00\x00", 3);
        str[1] = static_cast<char>(byte);
        REQUIRE(qis::scan(str.data(), str.size(), sig) == 1);

        str.assign("\xFF\x00\xFF\x00", 4);
        str[3] = static_cast<char>(byte);
        REQUIRE(qis::scan(str.data(), str.size(), sig) == 3);
      } else {
        REQUIRE(qis::scan(&byte, 1, sig) == qis::signature::npos);

        str.assign("\xFF\xFF", 2);
        str[0] = static_cast<char>(byte);
        REQUIRE(qis::scan(str.data(), str.size(), sig) == qis::signature::npos);

        str.assign("\x00\x00\x00", 3);
        str[1] = static_cast<char>(byte);
        REQUIRE(qis::scan(str.data(), str.size(), sig) == qis::signature::npos);

        str.assign("\xFF\x00\xFF\x00", 4);
        str[3] = static_cast<char>(byte);
        REQUIRE(qis::scan(str.data(), str.size(), sig) == qis::signature::npos);
      }
    }
  }

  SUBCASE("signature: ?E")
  {
    const qis::signature sig("?E");
    for (unsigned i = 0x00; i <= 0xFF; i++) {
      const auto byte = static_cast<std::uint8_t>(i);
      if ((byte & 0x0F) == 0x0E) {
        REQUIRE(qis::scan(&byte, 1, sig) == 0);

        str.assign("\xFF\xFF", 2);
        str[0] = static_cast<char>(byte);
        REQUIRE(qis::scan(str.data(), str.size(), sig) == 0);

        str.assign("\x00\x00\x00", 3);
        str[1] = static_cast<char>(byte);
        REQUIRE(qis::scan(str.data(), str.size(), sig) == 1);

        str.assign("\xFF\x00\xFF\x00", 4);
        str[3] = static_cast<char>(byte);
        REQUIRE(qis::scan(str.data(), str.size(), sig) == 3);
      } else {
        REQUIRE(qis::scan(&byte, 1, sig) == qis::signature::npos);

        str.assign("\xFF\xFF", 2);
        str[0] = static_cast<char>(byte);
        REQUIRE(qis::scan(str.data(), str.size(), sig) == qis::signature::npos);

        str.assign("\x00\x00\x00", 3);
        str[1] = static_cast<char>(byte);
        REQUIRE(qis::scan(str.data(), str.size(), sig) == qis::signature::npos);

        str.assign("\xFF\x00\xFF\x00", 4);
        str[3] = static_cast<char>(byte);
        REQUIRE(qis::scan(str.data(), str.size(), sig) == qis::signature::npos);
      }
    }
  }

  SUBCASE("signature: ??")
  {
    const qis::signature sig("??");
    for (unsigned i = 0x00; i <= 0xFF; i++) {
      const auto byte = static_cast<std::uint8_t>(i);
      REQUIRE(qis::scan(&byte, 1, sig) == 0);

      str.assign("\xFF\xFF", 2);
      str[0] = static_cast<char>(byte);
      REQUIRE(qis::scan(str.data(), str.size(), sig) == 0);

      str.assign("\x00\x00\x00", 3);
      str[1] = static_cast<char>(byte);
      REQUIRE(qis::scan(str.data(), str.size(), sig) == 0);

      str.assign("\xFF\x00\xFF\x00", 4);
      str[3] = static_cast<char>(byte);
      REQUIRE(qis::scan(str.data(), str.size(), sig) == 0);
    }
  }

  SUBCASE("signature: B2 ?? 01")
  {
    const qis::signature sig("B2 ?? 01");
    for (std::size_t i = 0x00; i <= 0x03; i++) {
      str.assign(i, '\xFF');
      mem::write(str.data(), str.size(), i - 4, "B2 00 01");
      REQUIRE(qis::scan(str.data(), str.size(), sig) == qis::signature::npos);
    }
    for (std::size_t i = 0x04; i <= 0xFF; i++) {
      str.assign(i, '\xFF');
      mem::write(str.data(), str.size(), i - 4, "B2 A9 01");
      str[i - 3] = static_cast<std::uint8_t>(i);
      REQUIRE(qis::scan(str.data(), str.size(), sig) == i - 4);

      str.assign(i, '\xFF');
      mem::write(str.data(), str.size(), i - 3, "B2 A9 01");
      str[i - 2] = static_cast<std::uint8_t>(i);
      REQUIRE(qis::scan(str.data(), str.size(), sig) == i - 3);

      str.assign(i, '\xFF');
      mem::write(str.data(), str.size(), i - 2, "B2 A9 01");
      str[i - 1] = static_cast<std::uint8_t>(i);
      REQUIRE(qis::scan(str.data(), str.size(), sig) == qis::signature::npos);

      mem::write(str.data(), str.size(), i - 1, "B2 A9 01");
      REQUIRE(qis::scan(str.data(), str.size(), sig) == qis::signature::npos);
    }
  }
}

}  // namespace QIS_SIGNATURE_ABI