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
void write(std::span<std::uint8_t> memory, std::size_t position, std::string_view signature) noexcept;
void write(void* data, std::size_t size, std::size_t position, std::string_view signature) noexcept;

// Prints given data to standard output in blocks.
void print(std::span<const std::uint8_t> memory, std::size_t max = 1024) noexcept;

// Prints given data to standard output in blocks.
void print(const void* data, std::size_t size, std::size_t max = 1024) noexcept;

// Generates random data of given size and returns it.
// The data is guaranteed not to contain the complete DB 27 5B signature.
// The last byte is guaranteed not to be one of the DB 27 5B signature bytes.
// The data is guaranteed not to end with the 0xDB or the 0x27 byte.
std::vector<std::uint8_t> random(std::size_t size);

// Allocates immutable random data of given sizes.
// The data is guaranteed not to contain the complete DB 27 5B signature.
// If size is greater, than 128 MiB, then the the first 128 MiB will be randomly generated and repeated.
// The data is guaranteed to end with at most 26 bytes of the following signature:
// DB 27 5B FA FB 53 A0 FC FD FE FD 56 AF 97 F7 DF 07 EA 57 FF E2 57 56 D6 00 89
//  ¹  ²  ³  ⁴  ⁵  ⁶  ⁷  ⁸  ⁹ ¹⁰ ¹¹ ¹² ¹³ ¹⁴ ¹⁵ ¹⁶ ¹⁷ ¹⁸ ¹⁹ ²⁰ ²¹ ²² ²³ ²⁴ ²⁵ ²⁶
void initialize(std::span<std::size_t> sizes);

// Frees memory allocated during the initialize call.
void shutdown();

// Returns a span into memory allocated during the initialize call.
// Throws std::bad_alloc if the given size was not listed during the initialize call.
std::span<const std::uint8_t> get(std::size_t size);

// Returns a substring of given size to the following signature:
// DB 27 5B FA FB 53 A0 FC FD FE FD 56 AF 97 F7 DF 07 EA 57 FF E2 57 56 D6 00 89
//  ¹  ²  ³  ⁴  ⁵  ⁶  ⁷  ⁸  ⁹ ¹⁰ ¹¹ ¹² ¹³ ¹⁴ ¹⁵ ¹⁶ ¹⁷ ¹⁸ ¹⁹ ²⁰ ²¹ ²² ²³ ²⁴ ²⁵ ²⁶
std::string_view find(std::size_t size = 26) noexcept;

// Returns a substring of given size to the following signature:
// DB 27 5B ?? FB ?? ?? FC FD FE ?? ?? ?? ?? F7 DF 07 EA 57 FF ?? ?? ?? D6 00 ??
//  ¹  ²  ³  ⁴  ⁵  ⁶  ⁷  ⁸  ⁹ ¹⁰ ¹¹ ¹² ¹³ ¹⁴ ¹⁵ ¹⁶ ¹⁷ ¹⁸ ¹⁹ ²⁰ ²¹ ²² ²³ ²⁴ ²⁵ ²⁶
std::string_view scan(std::size_t size = 26) noexcept;

inline namespace literals {

constexpr std::size_t operator""_kb(std::size_t size)
{
  return size * 1024;
}

constexpr std::size_t operator""_mb(std::size_t size)
{
  return size * 1024 * 1024;
}

constexpr std::size_t operator""_gb(std::size_t size)
{
  return size * 1024 * 1024 * 1024;
}

}  // namespace literals

}  // namespace mem