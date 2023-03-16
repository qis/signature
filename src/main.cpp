#ifndef __clang__
#include "simulate.hpp"
#endif
#include <immintrin.h>
#include <array>
#include <format>
#include <cstdio>
#include <cstdlib>

namespace qis {

template <std::size_t N>
void print_array(const std::array<char, N>& a, FILE* stream = stdout) noexcept
{
  for (std::size_t i = 0; i < N; i++) {
    if (i) {
      std::fputc(' ', stream);
      if (i % 16 == 0) {
        std::fputs("| ", stream);
      }
    }
    std::fputs(std::format("{:02X}", static_cast<unsigned char>(a[i])).data(), stdout);
  }
  std::fputs("\r\n", stream);
  std::fflush(stream);
}

void print(const __m256i& a, FILE* stream = stdout) noexcept
{
  std::array<char, 32> dst{};
  _mm256_storeu_si256(reinterpret_cast<__m256i*>(dst.data()), a);
  print_array(dst, stream);
}

void print(const __m128i& a, FILE* stream = stdout) noexcept
{
  std::array<char, 32> src{};
  _mm256_storeu_si256(reinterpret_cast<__m256i*>(src.data()), _mm256_castsi128_si256(a));
  std::array<char, 16> dst{};
  std::copy(src.data(), src.data() + 16, dst.data());
  print_array(dst);
}

constexpr auto data_s256i0 =
  "\x11\x12\x13\x14\x15\x16\x17\x18"
  "\x21\x22\x23\x24\x25\x26\x27\x28"
  "\x31\x32\x33\x34\x35\x36\x37\x38"
  "\x41\x42\x43\x44\x45\x46\x47\x48";

constexpr auto data_s256i1 =
  "\x51\x52\x53\x54\x55\x56\x57\x58"
  "\x61\x62\x63\x64\x65\x66\x67\x68"
  "\x71\x72\x73\x74\x75\x76\x77\x78"
  "\x81\x82\x83\x84\x85\x86\x87\x88";

constexpr auto data_s256i2 =
  "\x00\x0F\xF0\xFF\x03\x0C\x30\xC0"
  "\x00\x0F\xF0\xFF\x03\x0C\x30\xC0"
  "\x00\x0F\xF0\xFF\x03\x0C\x30\xC0"
  "\x00\x0F\xF0\xFF\x03\x0C\x30\xC0";

constexpr auto data_s256i3 =
  "\xFF\x0F\xF0\xFF\x03\x0C\x30\xC0"
  "\x00\xF0\xF0\xFF\x03\x0C\x30\xC0"
  "\x00\x0F\x0F\x00\x03\x0C\x30\xC0"
  "\x00\x0F\xF0\xFF\x0C\x0C\x30\xC0";

const auto data_m256i0 = reinterpret_cast<const __m256i*>(qis::data_s256i0);
const auto data_m256i1 = reinterpret_cast<const __m256i*>(qis::data_s256i1);
const auto data_m256i2 = reinterpret_cast<const __m256i*>(qis::data_s256i2);
const auto data_m256i3 = reinterpret_cast<const __m256i*>(qis::data_s256i3);

void test()
{
  print(_mm256_castsi128_si256(_mm256_extracti128_si256(_mm256_loadu_si256(data_m256i0), 0)));
}

}  // namespace qis

int main()
{
  try {
    qis::test();
  }
  catch (const std::exception& e) {
    std::fputs(e.what(), stderr);
    std::fputc('\n', stderr);
    std::fflush(stderr);
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
