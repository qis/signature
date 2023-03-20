#pragma once
#include <span>
#include <string_view>
#include <vector>
#include <cstddef>

#define QIS_STRINGIFY(s) #s
#define QIS_STRINGIFY_EXPAND(s) QIS_STRINGIFY(s)

namespace mem {

// Creates data of given size while repeating the signature.
std::vector<std::uint8_t> create(std::size_t size, std::string_view signature);

// Writes given signature to data at given position.
void write(std::span<std::uint8_t> memory, std::size_t position, std::string_view signature);
void write(void* data, std::size_t size, std::size_t position, std::string_view signature);

// Generates random data of given size.
// The data is guaranteed not to match "D?" and "E?".
std::vector<std::uint8_t> random(std::size_t size);

// Allocates immutable random data of given sizes.
// The data is guaranteed not to match "D?" and "E?" before 'size - min(26, size)'.
// If size is greater, than 128 MiB, then the the first 128 MiB will be randomly generated and repeated.
// The data is guaranteed to end with at most 26 bytes of the following signature:
// DB E7 DB DA EB DE E1 EC DD DE DD D6 EF E7 D7 EF E7 EA E7 DF D2 D7 E6 D6 D0 D9
//  ¹  ²  ³  ⁴  ⁵  ⁶  ⁷  ⁸  ⁹ ¹⁰ ¹¹ ¹² ¹³ ¹⁴ ¹⁵ ¹⁶ ¹⁷ ¹⁸ ¹⁹ ²⁰ ²¹ ²² ²³ ²⁴ ²⁵ ²⁶
void initialize(std::span<const std::size_t> sizes);

// Frees memory allocated during the initialize call.
void shutdown();

// Returns a span into memory allocated during the initialize call.
// Throws std::bad_alloc if the given size was not listed during the initialize call.
std::span<const std::uint8_t> get(std::size_t size);

// Returns a substring of given size to the following signature:
// DB E7 DB DA EB DE E1 EC DD DE DD D6 EF E7 D7 EF E7 EA E7 DF D2 D7 E6 D6 D0 D9
//  ¹  ²  ³  ⁴  ⁵  ⁶  ⁷  ⁸  ⁹ ¹⁰ ¹¹ ¹² ¹³ ¹⁴ ¹⁵ ¹⁶ ¹⁷ ¹⁸ ¹⁹ ²⁰ ²¹ ²² ²³ ²⁴ ²⁵ ²⁶
std::string signature(std::size_t size = 26);

inline namespace literals {

constexpr std::size_t operator""_b(unsigned long long size)
{
  return size;
}

constexpr std::size_t operator""_kb(unsigned long long size)
{
  return size * 1024;
}

constexpr std::size_t operator""_mb(unsigned long long size)
{
  return size * 1024 * 1024;
}

constexpr std::size_t operator""_gb(unsigned long long size)
{
  return size * 1024 * 1024 * 1024;
}

}  // namespace literals

}  // namespace mem
