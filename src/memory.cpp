#pragma once
#include "memory.hpp"
#include <qis/signature.hpp>
#include <mutex>
#include <random>
#include <span>
#include <stdexcept>
#include <string>
#include <cstdio>

namespace mem {
namespace {

std::vector<std::uint8_t> g_memory;
std::mutex g_mutex;

}  // namespace

std::vector<std::uint8_t> random(std::size_t size)
{
  // Create memory.
  std::vector<std::uint8_t> memory(size);

  // Write random data.
  std::random_device device;
  std::uniform_int_distribution<unsigned> distribution(0x00, 0xFF);
  for (std::size_t i = 0; i < size; i++) {
    memory[i] = static_cast<std::uint8_t>(distribution(device));
  }
  return memory;
}

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
  std::random_device device;
  std::uniform_int_distribution<unsigned> distribution(0x00, 0xFF);
  std::size_t i = 0;
  for (auto& byte : memory) {
    byte = mask[i] ? data[i] : static_cast<std::uint8_t>(distribution(device));
    i = (i + 1) % data_size;
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

std::span<const std::uint8_t> get()
{
  std::lock_guard lock(g_mutex);
  if (g_memory.empty()) {
    g_memory.resize(2_gib);
    std::vector<std::uint8_t> data(1_mib);
    auto src = data.data();
    for (std::size_t i = 0; i < 1_mib; i++) {
      *src++ = static_cast<std::uint8_t>(i % 0xFF);
    }
    src = data.data();
    auto dst = g_memory.data();
    for (std::size_t i = 0; i < 2_gib; i += 1_mib) {
      std::memcpy(dst, src, 1_mib);
      dst += 1_mib;
    }
  }
  return g_memory;
}

}  // namespace mem