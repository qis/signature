#pragma once
#include <immintrin.h>
#include <algorithm>
#include <array>
#include <format>
#include <span>
#include <string>
#include <string_view>
#include <cstdio>

namespace qis {

enum class color {
  gray = 90,
  red = 91,
  green = 92,
  yellow = 93,
  blue = 94,
  purple = 95,
  cyan = 96,
  white = 97,
};

inline void print(const char* s) noexcept
{
  std::fputs(s, stdout);
  std::fflush(stdout);
}

inline void print(color c, const char* s) noexcept
{
  std::fputs(std::format("\033[0;{:02d}m", static_cast<int>(c)).data(), stdout);
  std::fputs(s, stdout);
  std::fputs("\033[0m", stdout);
  std::fflush(stdout);
}

template <class Arg, class... Args>
void print(std::format_string<Arg, Args...> fmt, Arg&& arg, Args&&... args) noexcept
{
  print(std::format(fmt, std::forward<Arg>(arg), std::forward<Args>(args)...).data());
}

template <class Arg, class... Args>
void print(color c, std::format_string<Arg, Args...> fmt, Arg&& arg, Args&&... args) noexcept
{
  print(c, std::format(fmt, std::forward<Arg>(arg), std::forward<Args>(args)...).data());
}

}  // namespace qis

template <>
struct std::formatter<std::span<const char>> : std::formatter<std::string_view> {
  template <class FormatContext>
  auto format(std::span<const char> data, FormatContext& context) const
  {
    std::string s;
    auto it = std::back_inserter(s);
    for (std::size_t i = 0, size = data.size(); i < size; i++) {
      if (i) {
        *it++ = ' ';
      }
      std::format_to(it, "{:02X}", static_cast<unsigned char>(data[i]));
    }
    return std::formatter<std::string_view>::format(s, context);
  }
};

template <>
struct std::formatter<__m128i> : std::formatter<std::span<const char>> {
  template <class FormatContext>
  auto format(__m128i v, FormatContext& context) const
  {
    std::array<char, 32> a256{};
    _mm256_storeu_si256(reinterpret_cast<__m256i*>(a256.data()), _mm256_castsi128_si256(v));
    std::array<char, 16> a128{};
    std::copy(a256.data(), a256.data() + 16, a128.data());
    std::span s(a128.data(), a128.size());
    return std::formatter<std::span<const char>>::format(s, context);
  }
};

template <>
struct std::formatter<__m256i> : std::formatter<std::span<const char>> {
  template <class FormatContext>
  auto format(__m256i v, FormatContext& context) const
  {
    std::array<char, 32> a256{};
    _mm256_storeu_si256(reinterpret_cast<__m256i*>(a256.data()), v);
    std::span s(a256.data(), a256.size());
    return std::formatter<std::span<const char>>::format(s, context);
  }
};

template <>
struct std::formatter<std::span<char>> : std::formatter<std::span<const char>> {};
