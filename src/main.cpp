#include <qis/signature.hpp>
#include <vector>
#include <cassert>
#include <cstring>

static_assert(QIS_SIGNATURE_USE_AVX);
static_assert(QIS_SIGNATURE_USE_TBB);
static_assert(QIS_SIGNATURE_USE_EXCEPTIONS);

int main()
{
  // Create a 1 GiB memory block.
  std::vector<std::uint8_t> memory;
  memory.resize(1024 * 1024 * 1024, 0);

  // Write data at the end of the memory block.
  std::memcpy(memory.data() + memory.size() - 5, "\x01\xCD\xE3\x04\x05", 5);

  // Create signature.
  const qis::signature search("01 ?? E? 04");

  // Scan memory block.
  [[maybe_unused]] const auto pos = qis::scan(memory.data(), memory.size(), search);

  // Check that the data was found.
  assert(pos != qis::signature::npos);

  // Check data position.
  assert(pos == memory.size() - 5);
}