// Copyright (c) 2023, Alexej Harm
// Copyright (c) 2008-2016, Wojciech Muła
//
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
#include <algorithm>
#include <functional>
#include <memory>
#include <string_view>

#ifndef QIS_SIGNATURE_USE_AVX2
#ifdef __AVX2__
#define QIS_SIGNATURE_USE_AVX2 1
#else
#define QIS_SIGNATURE_USE_AVX2 0
#endif
#endif

#ifndef QIS_SIGNATURE_USE_TBB
#if __has_include(<tbb/parallel_for.h>)
#define QIS_SIGNATURE_USE_TBB 1
#else
#define QIS_SIGNATURE_USE_TBB 0
#endif
#endif

#ifndef QIS_SIGNATURE_USE_EXCEPTIONS
#ifdef __cpp_exceptions
#define QIS_SIGNATURE_USE_EXCEPTIONS 1
#else
#define QIS_SIGNATURE_USE_EXCEPTIONS 0
#endif
#endif

#if QIS_SIGNATURE_USE_AVX2
#include <immintrin.h>
#endif

#if QIS_SIGNATURE_USE_TBB
#include <tbb/parallel_for.h>
#include <atomic>
#ifndef QIS_SIGNATURE_CONCURRENCY_RANGES
#define QIS_SIGNATURE_CONCURRENCY_RANGES 64
#endif
#ifndef QIS_SIGNATURE_CONCURRENCY_THRESHOLD
#if QIS_SIGNATURE_USE_AVX2
#define QIS_SIGNATURE_CONCURRENCY_THRESHOLD 256 * 1024
#else
#define QIS_SIGNATURE_CONCURRENCY_THRESHOLD 10 * 1024
#endif
#endif
#endif

#if QIS_SIGNATURE_USE_EXCEPTIONS
#include <exception>
#else
#include <cstdlib>
#endif

#ifdef QIS_SIGNATURE_EXTRA_ASSERTS
#include <cassert>
#endif

#ifndef QIS_THROW_INVALID_SIGNATURE
#if QIS_SIGNATURE_USE_EXCEPTIONS
#define QIS_THROW_INVALID_SIGNATURE throw qis::invalid_signature()
#else
#define QIS_THROW_INVALID_SIGNATURE std::abort()
#endif
#endif

#ifndef QIS_SIGNATURE_INLINE_NAMESPACE_BEGIN
#define QIS_SIGNATURE_INLINE_NAMESPACE_BEGIN
#endif

#ifndef QIS_SIGNATURE_INLINE_NAMESPACE_END
#define QIS_SIGNATURE_INLINE_NAMESPACE_END
#endif

namespace qis {
QIS_SIGNATURE_INLINE_NAMESPACE_BEGIN
namespace detail::signature {

constexpr char cast(char xdigit) noexcept(!QIS_SIGNATURE_USE_EXCEPTIONS);

template <bool Mask>
std::size_t scan_safe(const char* s, std::size_t n, const char* p, std::size_t k) noexcept;

}  // namespace detail::signature

#if QIS_SIGNATURE_USE_EXCEPTIONS

class invalid_signature : std::exception {
public:
  const char* what() const noexcept override
  {
    return "invalid signature";
  }
};

#endif

class signature {
public:
  signature() noexcept = default;

  template <std::size_t N>
  explicit signature(const char (&data)[N]) : signature(std::string_view(data))
  {
    static_assert(N / 3 != 0, "invalid signature");
    static_assert(N % 3 == 0, "invalid signature");
  }

  template <std::size_t N, std::size_t K>
  explicit signature(const char (&data)[N], const char (&mask)[K]) :
    signature(std::string_view(data), std::string_view(mask))
  {
    static_assert(N / 3 != 0, "invalid signature");
    static_assert(N % 3 == 0, "invalid signature");
    static_assert(K == 1 || K / 3 != 0, "invalid signature");
    static_assert(K == 1 || K % 3 == 0, "invalid signature");
  }

  explicit signature(std::string_view data, std::string_view mask = {}) :
    size_((data.size() + 1) / 3), mask_(!mask.empty() || data.find('?') != std::string_view::npos)
  {
    using detail::signature::cast;

    // Verify data and mask sizes.
    if (!size_ || (data.size() + 1) % 3 != 0) {
      QIS_THROW_INVALID_SIGNATURE;
    }
    if (!mask.empty() && (mask.size() < 2 || (mask.size() + 1) % 3 != 0)) {
      QIS_THROW_INVALID_SIGNATURE;
    }

    // Allocate memory.
    if (!size_) {
      return;
    }
    data_ = std::make_unique<char[]>(mask_ ? size_ * 2 : size_);

    // Write data.
    auto src = data.data();
    auto dst = data_.get();
    for (std::size_t i = 0; i < size_; i++) {
      if (i && *src++ != ' ') {
        QIS_THROW_INVALID_SIGNATURE;
      }
      const auto upper = *src++;
      const auto lower = *src++;
      *dst++ = static_cast<char>(cast(upper) << 4 | cast(lower));
    }

    // Write mask.
    if (!mask_) {
      return;
    }
    src = data.data();
    for (std::size_t i = 0; i < size_; i++, src++) {
      const auto upper = *src++;
      const auto lower = *src++;
      *dst++ = static_cast<char>((upper == '?' ? 0x00 : 0xF0) | char(lower == '?' ? 0x00 : 0x0F));
    }

    // Replace mask.
    if (mask.empty()) {
      return;
    }
    const auto size = std::min(size_, (mask.size() + 1) / 3);
    src = mask.data();
    dst = data_.get() + size_;
    for (std::size_t i = 0; i < size; i++) {
      if (i && *src++ != ' ') {
        QIS_THROW_INVALID_SIGNATURE;
      }
      const auto upper = *src++;
      const auto lower = *src++;
      if (upper == '?' || lower == '?') {
        QIS_THROW_INVALID_SIGNATURE;
      }
      *dst++ = static_cast<char>(cast(upper) << 4 | cast(lower));
    }
  }

  explicit signature(
    const void* data,
    std::size_t dsize,
    const void* mask = nullptr,
    std::size_t msize = 0) :
    size_(dsize), mask_(msize != 0)
  {
    // Verify data and mask.
    if (dsize && !data) {
      QIS_THROW_INVALID_SIGNATURE;
    }
    if (msize && !mask) {
      QIS_THROW_INVALID_SIGNATURE;
    }

    // Allocate memory.
    if (!size_) {
      return;
    }
    data_ = std::make_unique<char[]>(mask_ ? size_ * 2 : size_);

    // Write data.
    auto src = reinterpret_cast<const char*>(data);
    const auto dst = data_.get();
    std::copy(src, src + dsize, dst);

    // Write mask.
    if (!mask_) {
      return;
    }
    src = reinterpret_cast<const char*>(mask);
    std::copy(src, src + std::min(size_, msize), dst + size_);
  }

  signature(signature&& other) noexcept :
    data_(std::move(other.data_)), size_(other.size_), mask_(other.mask_)
  {
    other.reset();
  }

  signature(const signature& other) : size_(other.size_), mask_(other.mask_)
  {
    if (size_) {
      const auto src = other.data_.get();
      const auto size = mask_ ? size_ * 2 : size_;
      data_ = std::make_unique<char[]>(size);
      std::copy(src, src + size, data_.get());
    }
  }

  signature& operator=(signature&& other) noexcept
  {
    data_ = std::move(other.data_);
    size_ = other.size_;
    mask_ = other.mask_;
    other.reset();
    return *this;
  }

  signature& operator=(const signature& other)
  {
    reset();
    size_ = other.size_;
    mask_ = other.mask_;
    if (size_) {
      const auto src = other.data_.get();
      const auto size = mask_ ? size_ * 2 : size_;
      data_ = std::make_unique<char[]>(size);
      std::copy(src, src + size, data_.get());
    }
    return *this;
  }

  ~signature() = default;

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

  void reset() noexcept
  {
    size_ = 0;
    mask_ = false;
    data_.reset();
  }

private:
  std::unique_ptr<char[]> data_;
  std::size_t size_{ 0 };
  bool mask_{ false };
};

static constexpr std::size_t npos = std::string_view::npos;

inline std::size_t scan(const void* data, std::size_t size, const signature& search) noexcept
{
  if (!size || !data) {
    return npos;
  }
  const auto s = static_cast<const char*>(data);
  const auto p = search.data();
  const auto k = search.size();
  if (!k) {
    return 0;
  }
  if (!p || size < k) {
    return npos;
  }
  if (search.mask()) {
    return detail::signature::scan_safe<true>(s, size, p, k);
  }
  return detail::signature::scan_safe<false>(s, size, p, k);
}

namespace detail::signature {

constexpr char cast(char xdigit) noexcept(!QIS_SIGNATURE_USE_EXCEPTIONS)
{
  if (xdigit >= '0' && xdigit <= '9') {
    return static_cast<char>(xdigit - '0');
  }
  if (xdigit >= 'A' && xdigit <= 'F') {
    return static_cast<char>(xdigit - 'A' + 0xA);
  }
  if (xdigit >= 'a' && xdigit <= 'f') {
    return static_cast<char>(xdigit - 'a' + 0xA);
  }
  if (xdigit != '?') {
    QIS_THROW_INVALID_SIGNATURE;
  }
  return 0;
}

template <bool Mask>
std::size_t find_safe(const char* s, std::size_t n, const char* p, std::size_t k) noexcept;

template <>
inline std::size_t find_safe<false>(const char* s, std::size_t n, const char* p, std::size_t k) noexcept
{
#ifdef QIS_SIGNATURE_EXTRA_ASSERTS
  assert(s);
  assert(n);
  assert(p);
  assert(k);
  assert(n >= k);
#endif
  const auto e = s + n;
  if (const auto i = std::search(s, e, std::boyer_moore_horspool_searcher(p, p + k)); i != e) {
    return i - s;
  }
  return npos;
}

template <>
inline std::size_t find_safe<true>(const char* s, std::size_t n, const char* p, std::size_t k) noexcept
{
#ifdef QIS_SIGNATURE_EXTRA_ASSERTS
  assert(s);
  assert(n);
  assert(p);
  assert(k);
  assert(n >= k);
#endif
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
  return npos;
}

#if QIS_SIGNATURE_USE_AVX2

template <std::size_t Size>
bool memcmp(const char* a, const char* b) noexcept;

template <>
constexpr bool memcmp<1>(const char* a, const char* b) noexcept
{
  return a[0] == b[0];
}

template <>
inline bool memcmp<2>(const char* a, const char* b) noexcept
{
  const auto a16 = *reinterpret_cast<const std::uint16_t*>(a);
  const auto b16 = *reinterpret_cast<const std::uint16_t*>(b);
  return a16 == b16;
}

template <>
inline bool memcmp<3>(const char* a, const char* b) noexcept
{
  const auto a32 = *reinterpret_cast<const std::uint32_t*>(a);
  const auto b32 = *reinterpret_cast<const std::uint32_t*>(b);
  return (a32 & 0x00FFFFFF) == (b32 & 0x00FFFFFF);
}

template <>
inline bool memcmp<4>(const char* a, const char* b) noexcept
{
  const auto a32 = *reinterpret_cast<const std::uint32_t*>(a);
  const auto b32 = *reinterpret_cast<const std::uint32_t*>(b);
  return a32 == b32;
}

template <>
inline bool memcmp<5>(const char* a, const char* b) noexcept
{
  const auto a64 = *reinterpret_cast<const std::uint64_t*>(a);
  const auto b64 = *reinterpret_cast<const std::uint64_t*>(b);
  return ((a64 ^ b64) & 0x000000FFFFFFFFFF) == 0;
}

template <>
inline bool memcmp<6>(const char* a, const char* b) noexcept
{
  const auto a64 = *reinterpret_cast<const std::uint64_t*>(a);
  const auto b64 = *reinterpret_cast<const std::uint64_t*>(b);
  return ((a64 ^ b64) & 0x0000FFFFFFFFFFFF) == 0;
}

template <>
inline bool memcmp<7>(const char* a, const char* b) noexcept
{
  const auto a64 = *reinterpret_cast<const std::uint64_t*>(a);
  const auto b64 = *reinterpret_cast<const std::uint64_t*>(b);
  return ((a64 ^ b64) & 0x00FFFFFFFFFFFFFF) == 0;
}

template <>
inline bool memcmp<8>(const char* a, const char* b) noexcept
{
  const auto a64 = *reinterpret_cast<const std::uint64_t*>(a);
  const auto b64 = *reinterpret_cast<const std::uint64_t*>(b);
  return a64 == b64;
}

template <>
inline bool memcmp<9>(const char* a, const char* b) noexcept
{
  const auto a64 = *reinterpret_cast<const std::uint64_t*>(a);
  const auto b64 = *reinterpret_cast<const std::uint64_t*>(b);
  return (a64 == b64) && (a[8] == b[8]);
}

template <>
inline bool memcmp<10>(const char* a, const char* b) noexcept
{
  const auto a64 = *reinterpret_cast<const std::uint64_t*>(a);
  const auto b64 = *reinterpret_cast<const std::uint64_t*>(b);
  const auto a16 = *reinterpret_cast<const std::uint16_t*>(a + 8);
  const auto b16 = *reinterpret_cast<const std::uint16_t*>(b + 8);
  return (a64 == b64) && (a16 == b16);
}

template <>
inline bool memcmp<11>(const char* a, const char* b) noexcept
{
  const auto a64 = *reinterpret_cast<const std::uint64_t*>(a);
  const auto b64 = *reinterpret_cast<const std::uint64_t*>(b);
  const auto a32 = *reinterpret_cast<const std::uint32_t*>(a + 8);
  const auto b32 = *reinterpret_cast<const std::uint32_t*>(b + 8);
  return (a64 == b64) && ((a32 & 0x00FFFFFF) == (b32 & 0x00FFFFFF));
}

template <>
inline bool memcmp<12>(const char* a, const char* b) noexcept
{
  const auto a64 = *reinterpret_cast<const std::uint64_t*>(a);
  const auto b64 = *reinterpret_cast<const std::uint64_t*>(b);
  const auto a32 = *reinterpret_cast<const std::uint32_t*>(a + 8);
  const auto b32 = *reinterpret_cast<const std::uint32_t*>(b + 8);
  return (a64 == b64) && (a32 == b32);
}

template <std::size_t K>
inline std::size_t strstr(const char* s, std::size_t n, const char* p, std::size_t k = K) noexcept
{
  // Fill 32 bytes of 'pf' with the first data (p) byte.
  const auto pf = _mm256_set1_epi8(p[0]);

  // Fill 32 bytes of 'pl' with the last data (p) byte.
  const auto pl = _mm256_set1_epi8(p[k - 1]);

  // Iterate over scan (s) 32 bytes at a time.
  for (auto si = s, se = s + n; si < se; si += 32) {
    // Load 32 scan (s) bytes into 's0'.
    const auto s0 = _mm256_loadu_si256(reinterpret_cast<const __m256i*>(si));

    // Load 32 scan (s) bytes into 's1' at an offset one less, than data size (k).
    const auto s1 = _mm256_loadu_si256(reinterpret_cast<const __m256i*>(si + k - 1));

    // Compare each byte in 's0' with the first data (p) byte.
    const auto e0 = _mm256_cmpeq_epi8(s0, pf);

    // Compare each byte in 's1' with the last data (p) byte.
    const auto e1 = _mm256_cmpeq_epi8(s1, pl);

    // Create equality mask 'em' with bits set where 'e0' and 'e1' match.
    // Since 's0' and 's1' have an offset of 'k - 1', the equality mask bytes will be set
    // at positions that represent 'si' offsets where the first and last byte match 'k'.
    auto em = static_cast<unsigned>(_mm256_movemask_epi8(_mm256_and_si256(e0, e1)));

    // Iterate over set bites in the equality mask.
    while (em) {
      // Get position of least significant set bit.
      const auto bp = _tzcnt_u32(em);

      // Compare memory ignoring the first and last data (p) bytes since they already match.
      if constexpr (K == 0) {
        if (std::memcmp(si + bp + 1, p + 1, k - 2) == 0) {
          return si + bp - s;
        }
      } else {
        if (memcmp<K - 2>(si + bp + 1, p + 1) == 0) {
          return si + bp - s;
        }
      }

      // Unset least significant set bit.
      em &= em - 1;
    }
  }
  return npos;
}

template <>
inline std::size_t strstr<1>(const char* s, std::size_t n, const char* p, std::size_t) noexcept
{
  if (const auto it = std::find(s, s + n, p[0]); it != s + n) {
    return it - s;
  }
  return npos;
}

template <>
inline std::size_t strstr<2>(const char* s, std::size_t n, const char* p, std::size_t) noexcept
{
  // Fill 32 bytes of 'p0' with the first data (p) byte.
  const auto p0 = _mm256_set1_epi8(p[0]);

  // Fill 32 bytes of 'p1' with the second data (p) byte.
  const auto p1 = _mm256_set1_epi8(p[1]);

  // Load 32 scan (s) bytes into 's0'.
  auto s0 = _mm256_loadu_si256(reinterpret_cast<const __m256i*>(s));

  // Iterate over scan (s) 32 bytes at a time.
  for (auto si = s + 32, se = s + n; si < se; si += 32) {
    // Load the next 32 scan (s) bytes into 's1'.
    const auto s1 = _mm256_loadu_si256(reinterpret_cast<const __m256i*>(si));

    // Compare each byte in 's0' with the first data (p) byte.
    const auto e0 = _mm256_cmpeq_epi8(s0, p0);

    // Create substring 'ss' by shifting 's0' 1 byte to the left
    // and filling the last byte with the first byte from 's1'.
    auto ss = _mm256_castsi128_si256(_mm256_extracti128_si256(s0, 1));
    ss = _mm256_inserti128_si256(ss, _mm256_castsi256_si128(s1), 1);
    ss = _mm256_alignr_epi8(ss, s0, 1);

    // Compare each byte in 'ss' with the second data (p) byte.
    const auto e1 = _mm256_cmpeq_epi8(ss, p1);

    // Create and check an equality mask with bits set where 'e0' and 'e1' match.
    if (const auto em = _mm256_movemask_epi8(_mm256_and_si256(e0, e1))) {
      // Use position of least significant set bit as 'si' offset.
      return si + _tzcnt_u32(static_cast<unsigned>(em)) - s;
    }

    // Use 's1' as 's0' for the next iteration.
    s0 = s1;
  }
  return npos;
}

template <bool Mask>
std::size_t find(const char* s, std::size_t n, const char* p, std::size_t k) noexcept;

template <>
inline std::size_t find<false>(const char* s, std::size_t n, const char* p, std::size_t k) noexcept
{
  auto r = npos;
  // clang-format off
  switch (k) {
  case  1: r = strstr<1>(s, n, p); break;
  case  2: r = strstr<2>(s, n, p); break;
  case  3: r = strstr<3>(s, n, p); break;
  case  4: r = strstr<4>(s, n, p); break;
  case  5: r = strstr<5>(s, n, p); break;
  case  6: r = strstr<6>(s, n, p); break;
  case  7: r = strstr<7>(s, n, p); break;
  case  8: r = strstr<8>(s, n, p); break;
  case  9: r = strstr<9>(s, n, p); break;
  case 10: r = strstr<10>(s, n, p); break;
  case 11: r = strstr<11>(s, n, p); break;
  case 12: r = strstr<12>(s, n, p); break;
  default: r = strstr<0>(s, n, p, k); break;
  }
  // clang-format on
  return r <= n - k ? r : npos;
}

template <>
inline std::size_t find<true>(const char* s, std::size_t n, const char* p, std::size_t k) noexcept
{
  return find_safe<true>(s, n, p, k);
}

#else

template <bool Mask>
std::size_t find(const char* s, std::size_t n, const char* p, std::size_t k) noexcept
{
  return find_safe<Mask>(s, n, p, k);
}

#endif

template <bool Mask>
std::size_t scan(const char* s, std::size_t n, const char* p, std::size_t k) noexcept
{
#if QIS_SIGNATURE_USE_TBB
  constexpr auto ranges = std::size_t(QIS_SIGNATURE_CONCURRENCY_RANGES);
  constexpr auto threshold = std::size_t(QIS_SIGNATURE_CONCURRENCY_THRESHOLD);
  if (n > threshold && n > k * 2) {
    // Determine block size.
    const auto block_size = std::max({ threshold / ranges, n / ranges, k * 2 });

    // Split data into ranges.
    const tbb::blocked_range range(s, s + n - k, block_size);

    // Find signature.
    std::atomic_size_t pos = npos;
    tbb::parallel_for(range, [s, p, k, &pos](const tbb::blocked_range<const char*>& range) noexcept {
      // Get current range data, size, and offset.
      const auto rs = range.begin();
      const auto rn = range.size() + k;
      const auto ro = static_cast<std::size_t>(rs - s);

      // Check if range starts at a smaller offset, than an already found position.
      if (const auto i = pos.load(std::memory_order_relaxed); i <= ro) {
        return;
      }

      // Find signature in range.
      if (const auto i = find<Mask>(rs, rn, p, k); i != npos) {
        std::size_t expected = npos;
        while (!pos.compare_exchange_weak(expected, ro + i, std::memory_order_release)) {
          if (expected <= i) {
            return;
          }
        }
      }
    });
    return pos.load(std::memory_order_acquire);
  }
#endif
  return find<Mask>(s, n, p, k);
}

template <bool Mask>
std::size_t scan_safe(const char* s, std::size_t n, const char* p, std::size_t k) noexcept
{
#ifdef QIS_SIGNATURE_EXTRA_ASSERTS
  assert(s);
  assert(n);
  assert(p);
  assert(k);
  assert(n >= k);
#endif
  const auto rest = std::max(std::size_t(64), k * 2);
  if (n < rest * 2) {
    return find_safe<Mask>(s, n, p, k);
  }
  if (const auto pos = scan<Mask>(s, n - rest, p, k); pos != npos) {
    return pos;
  }
  const auto size = rest + k;
  if (const auto pos = find_safe<Mask>(s + n - size, size, p, k); pos != npos) {
    return n - size + pos;
  }
  return npos;
}

}  // namespace detail::signature
QIS_SIGNATURE_INLINE_NAMESPACE_END
}  // namespace qis
