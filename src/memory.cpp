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
#define QIS_SIGNATURE_USE_AVX2 1
#define QIS_SIGNATURE_USE_TBB 0
#include <qis/signature.hpp>

namespace mem {
namespace {

std::mutex g_mutex;                                         // NOLINT
std::map<std::size_t, std::vector<std::uint8_t>> g_memory;  // NOLINT

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

void write(std::span<std::uint8_t> memory, std::size_t position, std::string_view signature)
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

void write(void* data, std::size_t size, std::size_t position, std::string_view signature)
{
  const auto memory = reinterpret_cast<std::uint8_t*>(data);
  write({ memory, size }, position, signature);
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
  std::random_device rd;
  std::mt19937_64 mt(rd());
  std::uniform_int_distribution<std::uint64_t> ud;
  auto dst = memory.data();
  for (std::size_t i = 0, max = size / sizeof(std::uint64_t); i < max; i++) {
    *reinterpret_cast<std::uint64_t*>(dst) = ud(mt);
    for (std::size_t j = 0; j < sizeof(std::uint64_t); j++) {
      const auto upper = dst[j] >> 4;
      if (upper == '\x0D' || upper == '\x0E') {
        dst[j] = '\xF0' + (dst[j] & 0x0F);
      }
    }
    dst += sizeof(std::uint64_t);
  }
  return memory;
}

void initialize(std::span<const std::size_t> sizes)
{
  // Check sizes.
  if (sizes.empty()) {
    return;
  }
  const auto data_size = std::min(128_mb, *std::max_element(sizes.begin(), sizes.end()));
  if (!data_size) {
    return;
  }

  // Create signature.
  const qis::signature search(signature());
  assert(search.size() == 26);
  assert(search.data());

  // Generate random data.
  const auto src = random(data_size);

  // Allocate memory.
  const std::lock_guard lock(g_mutex);
  for (auto size : sizes) {
    // Check size.
    if (!size) {
      continue;
    }

    // Create memory.
    std::vector<std::uint8_t> memory(size);

    // Copy data.
    auto dst = memory.data();
    for (std::size_t i = 0; i < size; i += data_size) {
      std::memcpy(dst + i, src.data(), std::min(data_size, size - i));
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
  const std::lock_guard lock(g_mutex);
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

std::string signature(std::size_t size)
{
  assert(size <= 26);
  // clang-format off
  return std::string{
    "DB E7 DB DA EB DE E1 EC DD DE DD D6 EF E7 D7 EF E7 EA E7 DF D2 D7 E6 D6 D0 D9"
  }.substr(0, std::min(size, std::size_t(26)) * 3 - 1);
  // clang-format on
}

}  // namespace mem
