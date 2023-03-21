#include <qis/signature.hpp>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <cstdint>
#include <cstring>

// Make sure that AVX2 support was detected.
static_assert(QIS_SIGNATURE_USE_AVX2);

// Make sure that TBB headers were found.
static_assert(QIS_SIGNATURE_USE_TBB);

int main()
{
  try {
    // Create a 1 GiB memory block.
    std::vector<std::uint8_t> memory(std::size_t(1024 * 1024 * 1024));

    // Write data to the memory block.
    std::memcpy(memory.data() + memory.size() - 5, "\x01\xCD\xE3\x04\x05", 5);

    // Create signature.
    const qis::signature search("01 ?? E? 04");

    // Scan memory block.
    const auto pos = qis::scan(memory.data(), memory.size(), search);

    // Check that the signature was found.
    if (pos == qis::npos) {
      throw std::runtime_error("Signature not found.");
    }

    // Check data position.
    if (pos != memory.size() - 5) {
      throw std::runtime_error("Signature found at wrong position.");
    }
  }
  catch (const std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
}
