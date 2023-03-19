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
#include <array>
#include <functional>
#include <memory>
#include <string_view>
#include <utility>

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

namespace qis {
#ifdef QIS_SIGNATURE_ABI
inline namespace QIS_SIGNATURE_ABI {
#endif

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
      *dst++ = static_cast<char>(parse(upper) << 4 | parse(lower));
    }

    // Write mask.
    if (!mask_) {
      return;
    }
    src = data.data();
    for (std::size_t i = 0; i < size_; i++, src++) {
      const auto upper = *src++;
      const auto lower = *src++;
      *dst++ = static_cast<char>((upper == '?' ? '\x00' : '\xF0') | (lower == '?' ? '\x00' : '\x0F'));
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
      *dst++ = static_cast<char>(parse(upper) << 4 | parse(lower));
    }
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
  static constexpr char parse(char xdigit) noexcept(!QIS_SIGNATURE_USE_EXCEPTIONS)
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

  std::unique_ptr<char[]> data_;
  std::size_t size_{ 0 };
  bool mask_{ false };
};

static constexpr std::size_t npos = std::string_view::npos;

[[nodiscard]] std::size_t scan(const void* data, std::size_t size, const signature& search) noexcept;

namespace detail {

template <std::size_t Size>
bool equal(const char* s, const char* p) noexcept;

template <>
constexpr bool equal<1>(const char* s, const char* p) noexcept
{
  return s[0] == p[0];
}

template <>
inline bool equal<2>(const char* s, const char* p) noexcept
{
  const auto s0 = *reinterpret_cast<const std::uint16_t*>(s);
  const auto p0 = *reinterpret_cast<const std::uint16_t*>(p);
  return s0 == p0;
}

template <>
inline bool equal<3>(const char* s, const char* p) noexcept
{
  const auto s0 = *reinterpret_cast<const std::uint32_t*>(s);
  const auto p0 = *reinterpret_cast<const std::uint32_t*>(p);
  return (s0 & 0x00FFFFFF) == (p0 & 0x00FFFFFF);
}

template <>
inline bool equal<4>(const char* s, const char* p) noexcept
{
  const auto s0 = *reinterpret_cast<const std::uint32_t*>(s);
  const auto p0 = *reinterpret_cast<const std::uint32_t*>(p);
  return s0 == p0;
}

template <>
inline bool equal<5>(const char* s, const char* p) noexcept
{
  const auto s0 = *reinterpret_cast<const std::uint64_t*>(s);
  const auto p0 = *reinterpret_cast<const std::uint64_t*>(p);
  return ((s0 ^ p0) & 0x000000FFFFFFFFFF) == 0;
}

template <>
inline bool equal<6>(const char* s, const char* p) noexcept
{
  const auto s0 = *reinterpret_cast<const std::uint64_t*>(s);
  const auto p0 = *reinterpret_cast<const std::uint64_t*>(p);
  return ((s0 ^ p0) & 0x0000FFFFFFFFFFFF) == 0;
}

template <>
inline bool equal<7>(const char* s, const char* p) noexcept
{
  const auto s0 = *reinterpret_cast<const std::uint64_t*>(s);
  const auto p0 = *reinterpret_cast<const std::uint64_t*>(p);
  return ((s0 ^ p0) & 0x00FFFFFFFFFFFFFF) == 0;
}

template <>
inline bool equal<8>(const char* s, const char* p) noexcept
{
  const auto s0 = *reinterpret_cast<const std::uint64_t*>(s);
  const auto p0 = *reinterpret_cast<const std::uint64_t*>(p);
  return s0 == p0;
}

template <>
inline bool equal<9>(const char* s, const char* p) noexcept
{
  const auto s0 = *reinterpret_cast<const std::uint64_t*>(s);
  const auto p0 = *reinterpret_cast<const std::uint64_t*>(p);
  return (s0 == p0) && (s[8] == p[8]);
}

template <>
inline bool equal<10>(const char* s, const char* p) noexcept
{
  const auto s0 = *reinterpret_cast<const std::uint64_t*>(s);
  const auto s1 = *reinterpret_cast<const std::uint16_t*>(s + 8);
  const auto p0 = *reinterpret_cast<const std::uint64_t*>(p);
  const auto p1 = *reinterpret_cast<const std::uint16_t*>(p + 8);
  return (s0 == p0) && (s1 == p1);
}

template <>
inline bool equal<11>(const char* s, const char* p) noexcept
{
  const auto s0 = *reinterpret_cast<const std::uint64_t*>(s);
  const auto s1 = *reinterpret_cast<const std::uint32_t*>(s + 8);
  const auto p0 = *reinterpret_cast<const std::uint64_t*>(p);
  const auto p1 = *reinterpret_cast<const std::uint32_t*>(p + 8);
  return (s0 == p0) && ((s1 & 0x00FFFFFF) == (p1 & 0x00FFFFFF));
}

template <>
inline bool equal<12>(const char* s, const char* p) noexcept
{
  const auto s0 = *reinterpret_cast<const std::uint64_t*>(s);
  const auto s1 = *reinterpret_cast<const std::uint32_t*>(s + 8);
  const auto p0 = *reinterpret_cast<const std::uint64_t*>(p);
  const auto p1 = *reinterpret_cast<const std::uint32_t*>(p + 8);
  return (s0 == p0) && (s1 == p1);
}

template <>
inline bool equal<13>(const char* s, const char* p) noexcept
{
  const auto s0 = *reinterpret_cast<const std::uint64_t*>(s);
  const auto s1 = *reinterpret_cast<const std::uint64_t*>(s + 8);
  const auto p0 = *reinterpret_cast<const std::uint64_t*>(p);
  const auto p1 = *reinterpret_cast<const std::uint64_t*>(p + 8);
  return (s0 == p0) && ((s1 ^ p1) & 0x000000FFFFFFFFFF) == 0;
}

template <>
inline bool equal<14>(const char* s, const char* p) noexcept
{
  const auto s0 = *reinterpret_cast<const std::uint64_t*>(s);
  const auto s1 = *reinterpret_cast<const std::uint64_t*>(s + 8);
  const auto p0 = *reinterpret_cast<const std::uint64_t*>(p);
  const auto p1 = *reinterpret_cast<const std::uint64_t*>(p + 8);
  return (s0 == p0) && ((s1 ^ p1) & 0x0000FFFFFFFFFFFF) == 0;
}

template <>
inline bool equal<15>(const char* s, const char* p) noexcept
{
  const auto s0 = *reinterpret_cast<const std::uint64_t*>(s);
  const auto s1 = *reinterpret_cast<const std::uint64_t*>(s + 8);
  const auto p0 = *reinterpret_cast<const std::uint64_t*>(p);
  const auto p1 = *reinterpret_cast<const std::uint64_t*>(p + 8);
  return (s0 == p0) && ((s1 ^ p1) & 0x00FFFFFFFFFFFFFF) == 0;
}

template <>
inline bool equal<16>(const char* s, const char* p) noexcept
{
  const auto s0 = *reinterpret_cast<const std::uint64_t*>(s);
  const auto s1 = *reinterpret_cast<const std::uint64_t*>(s + 8);
  const auto p0 = *reinterpret_cast<const std::uint64_t*>(p);
  const auto p1 = *reinterpret_cast<const std::uint64_t*>(p + 8);
  return (s0 == p0) && (s1 == p1);
}

inline const char* safe_search(const char* s, const char* e, const char* p, std::size_t k) noexcept
{
  return std::search(s, e, std::boyer_moore_horspool_searcher(p, p + k));
}

inline const char* safe_search(const char* s, const char* e, const char* p, const char* m, std::size_t k) noexcept
{
  if (!m) {
    return safe_search(s, e, p, k);
  }
  auto c = m;
  const auto compare = [m, &c](char lhs, char rhs) noexcept {
    if ((lhs & *c++) == rhs) {
      return true;
    }
    c = m;
    return false;
  };
  return std::search(s, e, std::default_searcher(p, p + k, compare));
}

#if QIS_SIGNATURE_USE_AVX2

template <std::size_t K>
const char* search(const char* s, const char* e, const char* p, std::size_t k = K) noexcept
{
  // Fill 32 bytes of 'pf' with the first data (p) byte.
  const auto pf = _mm256_set1_epi8(p[0]);

  // Fill 32 bytes of 'pl' with the last data (p) byte.
  const auto pl = _mm256_set1_epi8(p[k - 1]);

  // Iterate over scan (s) 32 bytes at a time.
  for (auto i = s; i < e; i += 32) {
    // Load 32 scan (s) bytes into 's0'.
    const auto s0 = _mm256_loadu_si256(reinterpret_cast<const __m256i*>(i));

    // Load 32 scan (s) bytes into 's1' at an offset one less, than data size (k).
    const auto s1 = _mm256_loadu_si256(reinterpret_cast<const __m256i*>(i + k - 1));

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
      // Get least significant set bit offset.
      const auto o = _tzcnt_u32(em);

      // Compare memory ignoring the first and last data (p) bytes since they already match.
      if constexpr (K == 0) {
        if (std::memcmp(i + o + 1, p + 1, k - 2) == 0) {
          return i + o;
        }
      } else {
        if (equal<K - 2>(i + o + 1, p + 1)) {
          return i + o;
        }
      }

      // Unset least significant set bit.
      em &= em - 1;
    }
  }
  return e;
}

template <>
inline const char* search<1>(const char* s, const char* e, const char* p, std::size_t) noexcept
{
  return std::find(s, e, p[0]);
}

template <>
inline const char* search<2>(const char* s, const char* e, const char* p, std::size_t) noexcept
{
  // Fill 32 bytes of 'p0' with the first data (p) byte.
  const auto p0 = _mm256_set1_epi8(p[0]);

  // Fill 32 bytes of 'p1' with the second data (p) byte.
  const auto p1 = _mm256_set1_epi8(p[1]);

  // Load 32 scan (s) bytes into 's0'.
  auto s0 = _mm256_loadu_si256(reinterpret_cast<const __m256i*>(s));

  // Iterate over scan (s) 32 bytes at a time.
  for (auto i = s; i < e; i += 32) {
    // Load the next 32 scan (s) bytes into 's1'.
    const auto s1 = _mm256_loadu_si256(reinterpret_cast<const __m256i*>(i));

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
      return i + _tzcnt_u32(static_cast<unsigned>(em));
    }

    // Use 's1' as 's0' for the next iteration.
    s0 = s1;
  }
  return e;
}

template <std::size_t... I>
consteval auto make_search_table(std::index_sequence<I...>) noexcept
{
  return std::array<const char* (*)(const char*, const char*, const char*, std::size_t), sizeof...(I)>{
    { &search<I>... }
  };
}

inline const char* fast_search(const char* s, const char* e, const char* p, std::size_t k) noexcept
{
  static constexpr auto search_table = make_search_table(std::make_index_sequence<17>());
  return k < 17 ? search_table[k](s, e, p, k) : search<0>(s, e, p, k);
}

inline const char* fast_search(const char* s, const char* e, const char* p, const char* m, std::size_t k) noexcept
{
  if (!m) {
    return fast_search(s, e, p, k);
  }
#ifdef QIS_SIGNATURE_EXTRA_ASSERTS
  assert(k > 2);  // guaranteed by qis::scan
#endif
  // If the first or last mask byte is not 0xFF, the AVX2
  // algorithm has to apply them to 's' before comparing.
  if (m[0] != char(0xFF) || m[k - 1] != char(0xFF)) {
    return safe_search(s, e, p, m, k);
  }

  // If the first and last mask byte is 0xFF, the AVX2
  // algorithm can be implemented as if there was no mask,
  // except for the equality function.
  auto c = m + 1;
  const auto compare = [&c](char lhs, char rhs) noexcept {
    return (lhs & *c++) == rhs;
  };

  // Fill 32 bytes of 'pf' with the first data (p) byte.
  const auto pf = _mm256_set1_epi8(p[0]);

  // Fill 32 bytes of 'pl' with the last data (p) byte.
  const auto pl = _mm256_set1_epi8(p[k - 1]);

  // Iterate over scan (s) 32 bytes at a time.
  for (auto i = s; i < e; i += 32) {
    // Load 32 scan (s) bytes into 's0'.
    const auto s0 = _mm256_loadu_si256(reinterpret_cast<const __m256i*>(i));

    // Load 32 scan (s) bytes into 's1' at an offset one less, than data size (k).
    const auto s1 = _mm256_loadu_si256(reinterpret_cast<const __m256i*>(i + k - 1));

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
      // Get least significant set bit offset.
      const auto o = _tzcnt_u32(em);

      // Compare memory ignoring the first and last data (p) bytes since they already match.
      if (std::equal(i + o + 1, i + o + k - 1, p + 1, p + k - 1, compare)) {
        return i + o;
      }
      c = m + 1;

      // Unset least significant set bit.
      em &= em - 1;
    }
  }
  return e;
}

#else

inline const char* fast_search(const char* s, const char* e, const char* p, const char* m, std::size_t k) noexcept
{
  return safe_search(s, e, p, m, k);
}

#endif

inline const char* fast_scan(const char* s, const char* e, const char* p, const char* m, std::size_t k) noexcept
{
#if QIS_SIGNATURE_USE_TBB
  // Changes to 'ranges', 'threshold' and 'block_size' must match the "tbb ranges" test.
  static constexpr auto ranges = std::size_t(QIS_SIGNATURE_CONCURRENCY_RANGES);
  static constexpr auto threshold = std::size_t(QIS_SIGNATURE_CONCURRENCY_THRESHOLD);
  if (const auto n = static_cast<std::size_t>(e - s); n > threshold && n > k * 2) {
    // Determine block size.
    const auto block_size = std::max({ threshold / ranges, n / ranges, k });

    // Split data into ranges.
    const tbb::blocked_range range(s, e, block_size);

    // Set scan iterator to the end of the total range.
    std::atomic<const char*> si{ e };

    // Search for signature in ranges.
    tbb::parallel_for(range, [p, m, k, &si](const tbb::blocked_range<const char*>& range) noexcept {
      // Get current range.
      const auto s = range.begin();
      const auto e = s + range.size() + k - 1;

      // Get current scan iterator.
      auto ci = si.load(std::memory_order_relaxed);

      // Check if a smaller iterator was already found.
      if (ci < s) {
        return;
      }

      // Search for signature in current range.
      if (const auto i = fast_search(s, e, p, m, k); i != e) {
        // Update current scan iterator if 'i' is smaller.
        while (!si.compare_exchange_weak(ci, i, std::memory_order_release) && i < ci) {
        }
      }
    });
    return si.load(std::memory_order_acquire);
  }
#endif
  return fast_search(s, e, p, m, k);
}

inline const char* scan(const char* s, const char* e, const char* p, const char* m, std::size_t k) noexcept
{
  if (const auto r = k + 64; r + k < static_cast<std::size_t>(e - s)) {
    if (const auto i = fast_scan(s, e - r, p, m, k); i != e - r) {
      return i;
    }
    s = e - r - k + 1;
  }
  return safe_search(s, e, p, m, k);
}

}  // namespace detail

inline std::size_t scan(const void* data, std::size_t size, const signature& search) noexcept
{
  // If data is empty, return not found.
  if (!data || !size) {
    return npos;
  }
  const auto p = search.data();
  const auto k = search.size();

  // If signature is empty, return found.
  if (!p || !k) {
    return 0;
  }

  // If signature does not fit in data, return not found.
  if (size < k) {
    return npos;
  }

  // Scan without mask.
  const auto s = static_cast<const char*>(data);
  const auto e = s + size;
  const auto m = search.mask();
  if (!m) {
    if (const auto i = detail::scan(s, e, p, m, k); i != e) {
      return static_cast<std::size_t>(i - s);
    }
    return npos;
  }

  // Get mask.
  const std::string_view mask(m, k);

  // Find first mask byte with set bits.
  const auto mf = mask.find_first_not_of('\x00');

  // If all mask bits are unset, return found.
  if (mf == std::string_view::npos) {
    return 0;
  }

  // Find last mask byte with set bits.
  const auto ml = mask.find_last_not_of('\x00');

  // Determine number of remaining bytes with all bits unset.
  const auto mr = k - ml - 1;

  // Create modified search parameters.
  const auto ms = s + mf;
  const auto me = e - mr;
  const auto mp = p + mf;
  const auto mm = p + k + mf;
  const auto mk = ml - mf + 1;

  // If all mask bits between 'mf' and 'ml' are set, scan without mask.
  if (mask.find_first_not_of('\xFF', mf) > ml) {
    if (const auto mi = detail::scan(ms, me, mp, nullptr, mk); mi != me) {
      return static_cast<std::size_t>(mi - mf - s);
    }
    return npos;
  }

  // Search subrange of 's..s+n' for subrange of 'p..p+k'.
  const auto mi = detail::scan(ms, me, mp, mm, mk);

  // Return offset.
  return mi != me ? static_cast<std::size_t>(mi - mf - s) : npos;
}

#ifdef QIS_SIGNATURE_ABI
}  // namespace QIS_SIGNATURE_ABI
#endif
}  // namespace qis
