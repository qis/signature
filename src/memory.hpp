#pragma once
#include <span>
#include <string_view>
#include <vector>
#include <cstddef>

namespace mem {

// Generates random data of given size.
std::vector<std::uint8_t> random(std::size_t size);

// Creates data of given size while repeating the signature.
std::vector<std::uint8_t> create(std::size_t size, std::string_view signature);

// Writes given signature to data at given position.
void write(std::span<std::uint8_t> memory, std::size_t position, std::string_view signature) noexcept;
void write(void* data, std::size_t size, std::size_t position, std::string_view signature) noexcept;

// Prints given data to standard output in blocks.
void print(std::span<const std::uint8_t> memory, std::size_t max = 1024) noexcept;

// Prints given data to standard output in blocks.
void print(const void* data, std::size_t size, std::size_t max = 1024) noexcept;

// Returns 2 GB of data of given size with bytes iterating over 0x00..0xFF in a loop.
std::span<const std::uint8_t> get();

inline namespace literals {

constexpr std::size_t operator""_kb(std::size_t size)
{
  return size * 1000;
}

constexpr std::size_t operator""_mb(std::size_t size)
{
  return size * 1000 * 1000;
}

constexpr std::size_t operator""_gb(std::size_t size)
{
  return size * 1000 * 1000 * 1000;
}

constexpr std::size_t operator""_kib(std::size_t size)
{
  return size * 1024;
}

constexpr std::size_t operator""_mib(std::size_t size)
{
  return size * 1024 * 1024;
}

constexpr std::size_t operator""_gib(std::size_t size)
{
  return size * 1024 * 1024 * 1024;
}

}  // namespace literals

}  // namespace mem