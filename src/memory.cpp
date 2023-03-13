#pragma once
#include "memory.hpp"
#include <algorithm>
#include <format>
#include <map>
#include <mutex>
#include <random>
#include <stdexcept>
#include <string>
#include <cassert>

#define QIS_SIGNATURE_ABI memory
#define QIS_SIGNATURE_USE_AVX 0
#define QIS_SIGNATURE_USE_PAR 0
#define QIS_SIGNATURE_USE_TBB 0
#include <qis/signature.hpp>

namespace mem {
namespace {

std::mutex g_mutex;
std::map<std::size_t, std::vector<std::uint8_t>> g_memory;

}  // namespace

std::vector<std::uint8_t> create(std::size_t size, std::string_view signature)
{
  // Create memory.
  std::vector<std::uint8_t> memory(size);

  // Create data and mask.
  const qis::signature search(signature);
  if (!search.size()) {
    return memory;
  }

  // Check data size.
  const auto data_size = std::min(search.size(), size);
  if (!data_size) {
    return memory;
  }

  // Check data.
  const auto data = reinterpret_cast<const std::uint8_t*>(search.data());
  if (!data) {
    return memory;
  }

  // Copy data.
  const auto mask = reinterpret_cast<const std::uint8_t*>(search.data());
  if (!mask) {
    std::size_t i = 0;
    for (auto& byte : memory) {
      byte = data[i];
      i = (i + 1) % data_size;
    }
    return memory;
  }

  // Copy data and replace unmasked bytes with random bytes.
  std::random_device rd;
  std::uniform_int_distribution<unsigned> ud(0x00, 0xFF);
  std::uint8_t i = 0;
  for (auto& byte : memory) {
    byte = mask[i] ? data[i] : static_cast<std::uint8_t>(ud(rd));
    i++;
  }
  return memory;
}

void write(std::span<std::uint8_t> memory, std::size_t position, std::string_view signature) noexcept
{
  // Check size.
  if (position >= memory.size()) {
    return;
  }

  // Create data and mask.
  const qis::signature search(signature);

  // Check data size.
  const auto data_size = std::min(search.size(), memory.size() - position);
  if (!data_size) {
    return;
  }

  // Check data.
  const auto data = search.data();
  if (!data) {
    return;
  }

  // Copy data.
  const auto it = memory.data() + position;
  std::memcpy(it, data, data_size);

  // Check mask.
  const auto mask = search.mask();
  if (!mask) {
    return;
  }

  // Replace unmasked bytes with random bytes.
  std::random_device device;
  std::uniform_int_distribution<unsigned> distribution(0x00, 0xFF);
  for (std::size_t i = 0; i < data_size; i++) {
    if (!mask[i]) {
      it[i] = static_cast<std::uint8_t>(distribution(device));
    }
  }
}

void write(void* data, std::size_t size, std::size_t position, std::string_view signature) noexcept
{
  const auto memory = reinterpret_cast<std::uint8_t*>(data);
  write({ memory, size }, position, signature);
}

void print(std::span<const std::uint8_t> memory, std::size_t max) noexcept
{
  const auto size = std::min(memory.size(), max);
  if (!size) {
    return;
  }
  std::string text;
  text.reserve(size * 3 + size / 4 + size / 8 + 2);
  std::size_t counter = 0;
  for (auto byte : memory) {
    if (counter % 16 == 0) {
      text.append("\r\n", 2);
    } else if (counter % 4 == 0) {
      text.append("  ", 2);
    } else if (counter) {
      text.push_back(' ');
    }
    if (counter++ >= max) {
      text.append("..", 2);
      break;
    }
    const auto upper = static_cast<char>(byte >> 4);
    const auto lower = static_cast<char>(byte & 0xF);
    text.push_back(upper + (upper < 10 ? '0' : 'A' - 10));
    text.push_back(lower + (lower < 10 ? '0' : 'A' - 10));
  }
  std::fputs(text.data(), stdout);
}

void print(const void* data, std::size_t size, std::size_t max) noexcept
{
  if (!data || !size) {
    return;
  }
  print({ reinterpret_cast<const std::uint8_t*>(data), size }, max);
}

std::vector<std::uint8_t> random(std::size_t size)
{
  // Check size.
  if (!size) {
    return {};
  }

  // Create memory.
  std::vector<std::uint8_t> memory(size);

  // Write random data.
  std::uint8_t m = 0;
  std::random_device rd;
  std::mt19937_64 mt(rd());
  std::uniform_int_distribution<std::uint64_t> ud;
  auto dst = memory.data();
  for (std::size_t i = 0, max = size / sizeof(std::uint64_t); i < max; i++) {
    *reinterpret_cast<std::uint64_t*>(dst) = ud(mt);
    for (std::size_t j = 0; j < sizeof(std::uint64_t); j++) {
      switch (m) {
      case 0:
        if (dst[j] == 0xDB) {
          m = 1;
        }
        break;
      case 1:
        m = dst[j] == 0x27 ? 2 : 0;
        break;
      case 2:
        if (dst[j] == 0x5B) {
          dst[j] = 0x5C;
        }
        m = 0;
        break;
      }
    }
    dst += sizeof(std::uint64_t);
  }
  switch (auto& byte = memory[size - 1]) {
  case 0xDB:
  case 0x27:
  case 0x5B:
    byte = 0xFE;
    break;
  }
  return memory;
}

void initialize(std::vector<std::size_t> blocks)
{
  // Check sizes.
  if (blocks.empty()) {
    return;
  }
  const auto data_size = std::min(128_mb, *std::max_element(blocks.begin(), blocks.end()));
  if (!data_size) {
    return;
  }

  // Generate data.
  const auto data = random(data_size);

  // Create signature.
  const qis::signature search(mem::data());
  assert(search.size() == 26);
  assert(search.data());

  // Allocate memory.
  std::lock_guard lock(g_mutex);
  for (auto size : blocks) {
    // Check size.
    if (!size) {
      continue;
    }

    // Create memory.
    std::vector<std::uint8_t> memory(size);

    // Copy data.
    auto dst = memory.data();
    for (std::size_t i = 0; i < size; i += data_size) {
      std::memcpy(dst + i, dst, std::min(data_size, size - i));
    }

    // Copy signature.
    const auto copy = std::min(search.size(), size);
    std::memcpy(memory.data() + size - copy, search.data(), copy);

    // Store memory.
    g_memory.emplace(size, std::move(memory));
  }
}

void shutdown()
{
  // Free memory.
  std::lock_guard lock(g_mutex);
  g_memory.clear();
}

std::span<const std::uint8_t> get(std::size_t size)
{
  // Check size.
  if (!size) {
    return {};
  }

  // Look up memory.
  if (auto it = g_memory.find(size); it != g_memory.end()) {
    return it->second;
  }

  // Report error.
  throw std::invalid_argument(std::format("memory size not initialized: {}", size));
}

std::string_view data(std::size_t size) noexcept
{
  assert(size <= 26);
  // clang-format off
  return std::string_view{
    "DB 27 5B FA FB 53 A0 FC FD FE FD 56 AF 97 F7 DF 07 EA 57 FF E2 57 56 D6 00 89"
  }.substr(0, std::min(size, std::size_t(26)) * 3 - 1);
  // clang-format on
}

std::string_view mask(std::size_t size) noexcept
{
  assert(size <= 26);
  // clang-format off
  return std::string_view{
    "DB 27 5B ?? FB ?? ?? FC FD FE ?? ?? ?? ?? F7 DF 07 EA 57 FF ?? ?? ?? D6 00 ??"
  }.substr(0, std::min(size, std::size_t(26)) * 3 - 1);
  // clang-format on
}

}  // namespace mem