#include <qis/signature.hpp>
#include <vector>
#include <cassert>
#include <cstring>

// Check that the binary was compiled with /arch:AVX2.
static_assert(QIS_SIGNATURE_USE_AVX);

// Check that the header <tbb/parallel_for.h> was found.
static_assert(QIS_SIGNATURE_USE_TBB);

int main()
{
  // Create a 1 MiB memory block.
  std::vector<std::uint8_t> memory;
  memory.resize(1024 * 1024, 0);

  // Write data at the end of the memory block.
  std::memcpy(memory.data() + memory.size() - 5, "\x01\xCD\xE3\x04\x05", 5);

  // Scan memory block using signatures that match written data.
  const qis::signature s0("01 CD E3 04");
  const auto p0 = qis::scan(memory.data(), memory.size(), s0);
  assert(p0 != qis::signature::npos);
  assert(p0 == memory.size() - 5);

  const qis::signature s1("01 ?? E? 04 ?5");
  const auto p1 = qis::scan(memory.data(), memory.size(), s1);
  assert(p1 != qis::signature::npos);
  assert(p1 == memory.size() - 5);
}