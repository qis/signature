// Copyright (c) 2008-2016, Wojciech Muła
// Copyright (c) 2023, Alexej Harm
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
// IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
// TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
// PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
// TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
// LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
// NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#pragma once
#include <memory>
#include <string_view>
#include <cassert>

#ifndef QIS_SIGNATURE_USE_AVX
#  ifdef __AVX2__
#    define QIS_SIGNATURE_USE_AVX 1
#  else
#    define QIS_SIGNATURE_USE_AVX 0
#  endif
#endif

#ifndef QIS_SIGNATURE_USE_TBB
#  if __has_include(<tbb/parallel_for.h>)
#    define QIS_SIGNATURE_USE_TBB 1
#  else
#    define QIS_SIGNATURE_USE_TBB 0
#  endif
#endif

#ifndef QIS_SIGNATURE_USE_PAR
#  if __has_include(<execution>)
#    define QIS_SIGNATURE_USE_PAR 1
#  else
#    define QIS_SIGNATURE_USE_PAR 0
#  endif
#endif

#if QIS_SIGNATURE_USE_AVX
#  include <immintrin.h>
#else
#  include <algorithm>
#  include <functional>
#endif

#if QIS_SIGNATURE_USE_TBB
#  include <tbb/parallel_for.h>
#elif QIS_SIGNATURE_USE_PAR
#  include <execution>
#endif

// DEBUG: BEGIN
#include <algorithm>
#include <functional>
// DEBUG: END

namespace qis {
namespace detail::signature {

template <bool mask>
constexpr char cast(char upper, char lower) noexcept;

template <bool mask>
std::size_t scan(const char* s, std::size_t n, const char* p, std::size_t k) noexcept;

}  // namespace detail::signature

class signature {
public:
  static constexpr std::size_t npos = std::string_view::npos;

  constexpr signature() noexcept = default;

  signature(std::string_view signature) : size_((signature.size() + 1) / 3)
  {
    assert((signature.size() + 1) / 3 > 0);
    assert((signature.size() + 1) % 3 == 0);
    if (signature.empty()) {
      return;
    }
    if (signature.find('?') == std::string_view::npos) {
      data_ = std::make_unique<char[]>(size_);
    } else {
      data_ = std::make_unique<char[]>(size_ * 2);
      const auto mask = data_.get() + size_;
      for (std::size_t i = 0; i < size_; i++) {
        mask[i] = detail::signature::cast<true>(signature[i * 3], signature[i * 3 + 1]);
      }
    }
    const auto data = data_.get();
    for (std::size_t i = 0; i < size_; i++) {
      data[i] = detail::signature::cast<false>(signature[i * 3], signature[i * 3 + 1]);
      assert(i == 0 || signature[i * 3 - 1] == ' ');
    }
  }

  constexpr const char* data() const noexcept
  {
    return data_.get();
  }

  constexpr const char* mask() const noexcept
  {
    return mask_ ? data_.get() + size_ : nullptr;
  }

  constexpr std::size_t size() const noexcept
  {
    return size_;
  }

private:
  std::unique_ptr<char[]> data_;
  std::size_t size_{ 0 };
  bool mask_{ false };
};

inline std::size_t scan(const void* data, std::size_t size, const signature& search) noexcept
{
  assert(data);
  assert(size);
  assert(search.data());
  const auto s = static_cast<const char*>(data);
  const auto p = search.data();
  const auto k = search.size();
  if (!k) {
    return 0;
  }
  if (size < k) {
    return signature::npos;
  }
  if (search.mask()) {
    return detail::signature::scan<true>(s, size, p, k);
  }
  return detail::signature::scan<false>(s, size, p, k);
}

namespace detail::signature {

template <bool mask>
inline constexpr char cast(char lower) noexcept
{
  if constexpr (mask) {
    return lower == '?' ? 0x0 : 0xF;
  } else {
    if (lower >= '0' && lower <= '9') {
      return lower - '0';
    }
    if (lower >= 'A' && lower <= 'F') {
      return lower - 'A' + 0xA;
    }
    if (lower >= 'a' && lower <= 'f') {
      return lower - 'a' + 0xA;
    }
    assert(lower == '?');
    return 0;
  }
}

template <bool mask>
inline constexpr char cast(char upper, char lower) noexcept
{
  return cast<mask>(upper) << 4 | cast<mask>(lower);
}

template <bool mask>
std::size_t find(const char* s, std::size_t n, const char* p, std::size_t k) noexcept;

#if QIS_SIGNATURE_USE_AVX

[[maybe_unused]] constexpr bool memcmp1(const char* a, const char* b) noexcept
{
  return a[0] == b[0];
}

[[maybe_unused]] __forceinline bool memcmp2(const char* a, const char* b) noexcept
{
  const auto a16 = *reinterpret_cast<const std::uint16_t*>(a);
  const auto b16 = *reinterpret_cast<const std::uint16_t*>(b);
  return a16 == b16;
}

[[maybe_unused]] __forceinline bool memcmp3(const char* a, const char* b) noexcept
{
  const auto a32 = *reinterpret_cast<const std::uint32_t*>(a);
  const auto b32 = *reinterpret_cast<const std::uint32_t*>(b);
  return (a32 & 0x00FFFFFF) == (b32 & 0x00FFFFFF);
}

[[maybe_unused]] __forceinline bool memcmp4(const char* a, const char* b) noexcept
{
  const auto a32 = *reinterpret_cast<const std::uint32_t*>(a);
  const auto b32 = *reinterpret_cast<const std::uint32_t*>(b);
  return a32 == b32;
}

[[maybe_unused]] __forceinline bool memcmp5(const char* a, const char* b) noexcept
{
  const auto a64 = *reinterpret_cast<const std::uint64_t*>(a);
  const auto b64 = *reinterpret_cast<const std::uint64_t*>(b);
  return ((a64 ^ b64) & 0x000000FFFFFFFFFF) == 0;
}

[[maybe_unused]] __forceinline bool memcmp6(const char* a, const char* b) noexcept
{
  const auto a64 = *reinterpret_cast<const std::uint64_t*>(a);
  const auto b64 = *reinterpret_cast<const std::uint64_t*>(b);
  return ((a64 ^ b64) & 0x0000FFFFFFFFFFFF) == 0;
}

[[maybe_unused]] __forceinline bool memcmp7(const char* a, const char* b) noexcept
{
  const auto a64 = *reinterpret_cast<const std::uint64_t*>(a);
  const auto b64 = *reinterpret_cast<const std::uint64_t*>(b);
  return ((a64 ^ b64) & 0x00FFFFFFFFFFFFFF) == 0;
}

[[maybe_unused]] __forceinline bool memcmp8(const char* a, const char* b) noexcept
{
  const auto a64 = *reinterpret_cast<const std::uint64_t*>(a);
  const auto b64 = *reinterpret_cast<const std::uint64_t*>(b);
  return a64 == b64;
}

[[maybe_unused]] __forceinline bool memcmp9(const char* a, const char* b) noexcept
{
  const auto a64 = *reinterpret_cast<const std::uint64_t*>(a);
  const auto b64 = *reinterpret_cast<const std::uint64_t*>(b);
  return (a64 == b64) && (a[8] == b[8]);
}

[[maybe_unused]] __forceinline bool memcmp10(const char* a, const char* b) noexcept
{
  const auto a64 = *reinterpret_cast<const std::uint64_t*>(a);
  const auto b64 = *reinterpret_cast<const std::uint64_t*>(b);
  const auto a16 = *reinterpret_cast<const std::uint16_t*>(a + 8);
  const auto b16 = *reinterpret_cast<const std::uint16_t*>(b + 8);
  return (a64 == b64) && (a16 == b16);
}

[[maybe_unused]] __forceinline bool memcmp11(const char* a, const char* b) noexcept
{
  const auto a64 = *reinterpret_cast<const std::uint64_t*>(a);
  const auto b64 = *reinterpret_cast<const std::uint64_t*>(b);
  const auto a32 = *reinterpret_cast<const std::uint32_t*>(a + 8);
  const auto b32 = *reinterpret_cast<const std::uint32_t*>(b + 8);
  return (a64 == b64) && ((a32 & 0x00FFFFFF) == (b32 & 0x00FFFFFF));
}

[[maybe_unused]] __forceinline bool memcmp12(const char* a, const char* b) noexcept
{
  const auto a64 = *reinterpret_cast<const std::uint64_t*>(a);
  const auto b64 = *reinterpret_cast<const std::uint64_t*>(b);
  const auto a32 = *reinterpret_cast<const std::uint32_t*>(a + 8);
  const auto b32 = *reinterpret_cast<const std::uint32_t*>(b + 8);
  return (a64 == b64) && (a32 == b32);
}

__forceinline std::size_t avx2_strstr_eq2(const char* s, std::size_t n, const char* p) noexcept
{
  const __m256i broadcasted[2]{
    _mm256_set1_epi8(p[0]),
    _mm256_set1_epi8(p[1]),
  };
  auto curr = _mm256_loadu_si256(reinterpret_cast<const __m256i*>(s));
  for (std::size_t i = 0; i < n; i += 32) {
    const auto next = _mm256_loadu_si256(reinterpret_cast<const __m256i*>(s + i + 32));
    auto eq = _mm256_cmpeq_epi8(curr, broadcasted[0]);

    __m256i next1{};
    next1 = _mm256_inserti128_si256(next1, _mm256_extracti128_si256(curr, 1), 0);
    next1 = _mm256_inserti128_si256(next1, _mm256_extracti128_si256(next, 0), 1);

    const auto substring = _mm256_alignr_epi8(next1, curr, 1);
    eq = _mm256_and_si256(eq, _mm256_cmpeq_epi8(substring, broadcasted[1]));
    if (const auto mask = _mm256_movemask_epi8(eq)) {
      return i + _tzcnt_u32(mask);
    }

    curr = next;
  }
  return qis::signature::npos;
}

template <std::size_t k>
__forceinline std::size_t avx2_strstr_memcmp(const char* s, std::size_t n, const char* p, auto memcmp) noexcept
{
  const auto s0 = _mm256_set1_epi8(p[0]);
  const auto s1 = _mm256_set1_epi8(p[k - 1]);
  for (std::size_t i = 0; i < n; i += 32) {
    const auto b0 = _mm256_loadu_si256(reinterpret_cast<const __m256i*>(s + i));
    const auto b1 = _mm256_loadu_si256(reinterpret_cast<const __m256i*>(s + i + k - 1));
    const auto e0 = _mm256_cmpeq_epi8(s0, b0);
    const auto e1 = _mm256_cmpeq_epi8(s1, b1);
    auto mask = _mm256_movemask_epi8(_mm256_and_si256(e0, e1));
    while (mask) {
      const auto bitpos = _tzcnt_u32(mask);
      if (memcmp(s + i + bitpos + 1, p + 1)) {
        return i + bitpos;
      }
      mask &= mask - 1;
    }
  }
  return qis::signature::npos;
}

__forceinline std::size_t avx2_strstr_anysize(const char* s, std::size_t n, const char* p, std::size_t k) noexcept
{
  const auto s0 = _mm256_set1_epi8(p[0]);
  const auto s1 = _mm256_set1_epi8(p[k - 1]);
  for (std::size_t i = 0; i < n; i += 32) {
    const auto b0 = _mm256_loadu_si256(reinterpret_cast<const __m256i*>(s + i));
    const auto b1 = _mm256_loadu_si256(reinterpret_cast<const __m256i*>(s + i + k - 1));
    const auto e0 = _mm256_cmpeq_epi8(s0, b0);
    const auto e1 = _mm256_cmpeq_epi8(s1, b1);
    auto mask = _mm256_movemask_epi8(_mm256_and_si256(e0, e1));
    while (mask) {
      const auto bitpos = _tzcnt_u32(mask);
      if (std::memcmp(s + i + bitpos + 1, p + 1, k - 2) == 0) {
        return i + bitpos;
      }
      mask &= mask - 1;
    }
  }
  return qis::signature::npos;
}

template <>
__forceinline std::size_t find<false>(const char* s, std::size_t n, const char* p, std::size_t k) noexcept
{
  auto r = qis::signature::npos;
  switch (k) {
  case 1:
    if (const auto it = std::find(s, s + n, p[0])) {
      return it - s;
    } else {
      return r;
    }
  case 2:
    r = avx2_strstr_eq2(s, n, p);
    break;
  case 3:
    r = avx2_strstr_memcmp<3>(s, n, p, memcmp1);
    break;
  case 4:
    r = avx2_strstr_memcmp<4>(s, n, p, memcmp2);
    break;
  case 5:
    r = avx2_strstr_memcmp<5>(s, n, p, memcmp4);
    break;
  case 6:
    r = avx2_strstr_memcmp<6>(s, n, p, memcmp4);
    break;
  case 7:
    r = avx2_strstr_memcmp<7>(s, n, p, memcmp5);
    break;
  case 8:
    r = avx2_strstr_memcmp<8>(s, n, p, memcmp6);
    break;
  case 9:
    r = avx2_strstr_memcmp<9>(s, n, p, memcmp8);
    break;
  case 10:
    r = avx2_strstr_memcmp<10>(s, n, p, memcmp8);
    break;
  case 11:
    r = avx2_strstr_memcmp<11>(s, n, p, memcmp9);
    break;
  case 12:
    r = avx2_strstr_memcmp<12>(s, n, p, memcmp10);
    break;
  default:
    r = avx2_strstr_anysize(s, n, p, k);
    break;
  }
  return r <= n - k ? r : qis::signature::npos;
}

template <>
__forceinline std::size_t find<true>(const char* s, std::size_t n, const char* p, std::size_t k) noexcept
{
  std::size_t i = 0;
  const auto m = p + k;
  const auto compare = [&](char lhs, char rhs) noexcept {
    if ((lhs & m[i++]) == rhs) {
      return true;
    }
    i = 0;
    return false;
  };
  const auto e = s + n;
  const auto searcher = std::default_searcher(p, p + k, compare);
  if (const auto i = std::search(s, e, searcher); i != e) {
    return i - s;
  }
  return qis::signature::npos;
}

#else

template <>
__forceinline std::size_t find<false>(const char* s, std::size_t n, const char* p, std::size_t k) noexcept
{
  const auto e = s + n;
  if (const auto i = std::search(s, e, std::boyer_moore_horspool_searcher(p, p + k)); i != e) {
    return i - s;
  }
  return qis::signature::npos;
}

template <>
__forceinline std::size_t find<true>(const char* s, std::size_t n, const char* p, std::size_t k) noexcept
{
  std::size_t i = 0;
  const auto m = p + k;
  const auto compare = [&](char lhs, char rhs) noexcept {
    if ((lhs & m[i++]) == rhs) {
      return true;
    }
    i = 0;
    return false;
  };
  const auto e = s + n;
  if (const auto i = std::search(s, e, std::default_searcher(p, p + k, compare)); i != e) {
    return i - s;
  }
  return qis::signature::npos;
}

#endif

template <bool mask>
inline std::size_t scan(const char* s, std::size_t n, const char* p, std::size_t k) noexcept
{
#if QIS_SIGNATURE_USE_TBB
  return find<mask>(s, n, p, k);
#elif QIS_SIGNATURE_USE_PAR
  return find<mask>(s, n, p, k);
#else
  return find<mask>(s, n, p, k);
#endif
}

}  // namespace detail::signature
}  // namespace qis