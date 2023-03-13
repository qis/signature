#include <qis/signature.hpp>
#include <vector>
#include <cassert>
#include <cstring>

// Optional: Check that the binary was compiled with /arch:AVX2.
static_assert(QIS_SIGNATURE_USE_AVX);

// Optional: Check that the header <tbb/parallel_for.h> was found.
static_assert(QIS_SIGNATURE_USE_TBB);

int main()
{
  // Create a 1 GiB memory block.
  std::vector<std::uint8_t> memory;
  memory.resize(1024 * 1024 * 1024, 0);

  // Write data at the end of the memory block.
  std::memcpy(memory.data() + memory.size() - 5, "\x01\x02\x03\x04\x05", 5);

  // Create signature.
  const qis::signature search("01 ?? ?? 04");

  // Scan memory block.
  const auto pos = qis::scan(memory.data(), memory.size(), search);

  // Check that the data was found.
  assert(pos != qis::signature::npos);

  // Check data position.
  assert(pos == memory.size() - 5);
}