#pragma once
#include <algorithm>
#include <array>

namespace qis {

// https://www.intel.com/content/www/us/en/docs/intrinsics-guide/index.html

using __m128i = std::array<char, 16>;
using __m256i = std::array<char, 32>;

// Broadcasts 8-bit integer 'a' to all elements of 'r'.
//
// a: FE
// r: FE FE FE FE FE FE FE FE FE FE FE FE FE FE FE FE | FE FE FE FE FE FE FE FE FE FE FE FE FE FE FE FE
//
constexpr __m256i _mm256_set1_epi8(char a) noexcept
{
  __m256i r{};
  std::fill(r.data(), r.data() + 32, a);
  return r;
}

// Loads 256-bits of integer data from 'm' into 'r'.
//
// a: 11 12 13 14 15 16 17 18 21 22 23 24 25 26 27 28 | 31 32 33 34 35 36 37 38 41 42 43 44 45 46 47 48
// r: 11 12 13 14 15 16 17 18 21 22 23 24 25 26 27 28 | 31 32 33 34 35 36 37 38 41 42 43 44 45 46 47 48
//
inline __m256i _mm256_loadu_si256(const __m256i* m) noexcept
{
  __m256i r{};
  const auto s = reinterpret_cast<const char*>(m);
  std::copy(s, s + 32, r.data());
  return r;
}

// Stores 256-bits of integer data from 'a' into 'm'.
//
// a: 11 12 13 14 15 16 17 18 21 22 23 24 25 26 27 28 | 31 32 33 34 35 36 37 38 41 42 43 44 45 46 47 48
// m: 11 12 13 14 15 16 17 18 21 22 23 24 25 26 27 28 | 31 32 33 34 35 36 37 38 41 42 43 44 45 46 47 48
//
inline void _mm256_storeu_si256(void* m, const __m256i& a) noexcept
{
  std::copy(a.data(), a.data() + 32, reinterpret_cast<char*>(m));
}

// Compares packed 8-bit integers in 'a' and 'b' for equality, and stores the results in 'r'.
//
// a: 00 0F F0 FF 03 0C 30 C0 00 0F F0 FF 03 0C 30 C0 | 00 0F F0 FF 03 0C 30 C0 00 0F F0 FF 03 0C 30 C0
// b: FF 0F F0 FF 03 0C 30 C0 00 F0 F0 FF 03 0C 30 C0 | 00 0F 0F 00 03 0C 30 C0 00 0F F0 FF 0C 0C 30 C0
// r: 00 FF FF FF FF FF FF FF FF 00 FF FF FF FF FF FF | FF FF 00 00 FF FF FF FF FF FF FF FF 00 FF FF FF
//
constexpr __m256i _mm256_cmpeq_epi8(const __m256i& a, const __m256i& b) noexcept
{
  __m256i r{};
  std::transform(a.data(), a.data() + 32, b.data(), r.data(), [](char a, char b) noexcept {
    return a == b ? char(0xFF) : char(0x00);
  });
  return r;
}

// Computes the bitwise AND of 256 bits (representing integer data) in 'a' and 'b', and stores the result in 'r'.
//
// a: 00 0F F0 FF 03 0C 30 C0 00 0F F0 FF 03 0C 30 C0 | 00 0F F0 FF 03 0C 30 C0 00 0F F0 FF 03 0C 30 C0
// b: FF 0F F0 FF 03 0C 30 C0 00 F0 F0 FF 03 0C 30 C0 | 00 0F 0F 00 03 0C 30 C0 00 0F F0 FF 0C 0C 30 C0
// r: 00 0F F0 FF 03 0C 30 C0 00 00 F0 FF 03 0C 30 C0 | 00 0F 00 00 03 0C 30 C0 00 0F F0 FF 00 0C 30 C0
//
constexpr __m256i _mm256_and_si256(const __m256i& a, const __m256i& b) noexcept
{
  __m256i r{};
  std::transform(a.data(), a.data() + 32, b.data(), r.data(), [](char a, char b) noexcept {
    return a & b;
  });
  return r;
}

// Extracts 128 bits (composed of integer data) from 'a', selected with 'i', and store the result in 'r'.
//
// a: 11 12 13 14 15 16 17 18 21 22 23 24 25 26 27 28 | 31 32 33 34 35 36 37 38 41 42 43 44 45 46 47 48
//
// i: 0
// r: 11 12 13 14 15 16 17 18 21 22 23 24 25 26 27 28
//
// i: 1
// r: 31 32 33 34 35 36 37 38 41 42 43 44 45 46 47 48
//
constexpr __m128i _mm256_extracti128_si256(const __m256i& a, int i) noexcept
{
  __m128i r{};
  std::copy(a.data() + i * 16, a.data() + i * 16 + 16, r.data());
  return r;
}

// Copies 'a' to 'r', then insert 128 bits (composed of integer data) from 'b' into 'r' at the location specified by 'i'.
//
// a: 11 12 13 14 15 16 17 18 21 22 23 24 25 26 27 28 | 31 32 33 34 35 36 37 38 41 42 43 44 45 46 47 48
// b: 51 52 53 54 55 56 57 58 61 62 63 64 65 66 67 68
//
// i: 0
// r: 51 52 53 54 55 56 57 58 61 62 63 64 65 66 67 68 | 31 32 33 34 35 36 37 38 41 42 43 44 45 46 47 48
//
// i: 1
// r: 11 12 13 14 15 16 17 18 21 22 23 24 25 26 27 28 | 51 52 53 54 55 56 57 58 61 62 63 64 65 66 67 68
//
constexpr __m256i _mm256_inserti128_si256(const __m256i& a, const __m128i& b, int i) noexcept
{
  __m256i dst{};
  std::copy(a.data(), a.data() + 32, dst.data());
  std::copy(b.data(), b.data() + 16, dst.data() + i * 16);
  return dst;
}

// Concatenates pairs of 16-byte blocks in 'a' and 'b' into a 32-byte temporary result,
// shifts the result right by 'i' bytes, and stores the low 16 bytes in 'r'.
//
// a: 11 12 13 14 15 16 17 18 21 22 23 24 25 26 27 28 | 31 32 33 34 35 36 37 38 41 42 43 44 45 46 47 48
// b: 51 52 53 54 55 56 57 58 61 62 63 64 65 66 67 68 | 71 72 73 74 75 76 77 78 81 82 83 84 85 86 87 88
//
// i: 0
// r: 51 52 53 54 55 56 57 58 61 62 63 64 65 66 67 68 | 71 72 73 74 75 76 77 78 81 82 83 84 85 86 87 88
//
// i: 1
// r: 52 53 54 55 56 57 58 61 62 63 64 65 66 67 68 11 | 72 73 74 75 76 77 78 81 82 83 84 85 86 87 88 31
//
// i: 15
// r: 68 11 12 13 14 15 16 17 18 21 22 23 24 25 26 27 | 88 31 32 33 34 35 36 37 38 41 42 43 44 45 46 47
//
// i: 16
// r: 11 12 13 14 15 16 17 18 21 22 23 24 25 26 27 28 | 31 32 33 34 35 36 37 38 41 42 43 44 45 46 47 48
//
// i: 24
// r: 21 22 23 24 25 26 27 28 00 00 00 00 00 00 00 00 | 41 42 43 44 45 46 47 48 00 00 00 00 00 00 00 00
//
// i: 32
// r: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 | 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
//
constexpr __m256i _mm256_alignr_epi8(const __m256i& a, const __m256i& b, int i) noexcept
{
  __m256i r{};
  std::copy(b.data() + i, b.data() + 16 - i + 1, r.data());
  std::copy(a.data(), a.data() + i, r.data() + 16 - i);
  std::copy(b.data() + 16 + i, b.data() + 32 - i + 1, r.data() + 16);
  std::copy(a.data() + 16, a.data() + 16 + i, r.data() + 32 - i);
  return r;
}

// Creates mask from the most significant bit of each 8-bit element in 'a', and stores the result in 'r'.
//
// a: 00 0F F0 FF 03 0C 30 C0 00 0F F0 FF 03 0C 30 C0 | 00 0F F0 FF 03 0C 30 C0 00 0F F0 FF 03 0C 30 C0
// r: 0b10001100100011001000110010001100
//
constexpr int _mm256_movemask_epi8(const __m256i& a) noexcept
{
  unsigned r = 0;
  for (unsigned i = 0; i < 32; i++) {
    if (a[i] & 0b10000000) {
      r += 1 << i;
    }
  }
  return static_cast<int>(r);
}

// Counts the number of trailing zero bits in unsigned 32-bit integer 'a', and stores the result in 'r'.
//
// a: 0b00000000000000000000000000001000
// r: 3
//
constexpr unsigned int _tzcnt_u32(unsigned int a) noexcept
{
  for (unsigned i = 0; i < 32; i++) {
    if (a & (1 << i)) {
      return i;
    }
  }
  return 32;
}

// Casts vector 'a' of type __m128i to vector 'r' of type __m256i. The upper 128 bits of 'r' are undefined.
//
// a: 11 12 13 14 15 16 17 18 21 22 23 24 25 26 27 28
// r: 11 12 13 14 15 16 17 18 21 22 23 24 25 26 27 28 | ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ??
//
constexpr __m256i _mm256_castsi128_si256(const __m128i& a) noexcept
{
  __m256i r{};
  std::copy(a.data(), a.data() + 16, r.data());
  return r;
}

}  // namespace qis
