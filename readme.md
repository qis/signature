# Signature
C++23 binary signature search algorithm implemented using AVX2 and TBB.

## Usage
Install using CMake or copy the header file [include/qis/signature.hpp](include/qis/signature.hpp).

```cpp
#include <qis/signature.hpp>
#include <vector>
#include <cassert>
#include <cstring>

// Optional: Check that the binary was compiled with /arch:AVX2.
// static_assert(QIS_SIGNATURE_USE_AVX);

// Optional: Check that the header <tbb/parallel_for.h> was found.
// static_assert(QIS_SIGNATURE_USE_TBB);

int main() {
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
```

Use [qis/xorstr](https://github.com/qis/xorstr) to hide the signature string from analysis tools.

## Build
Build benchmarks and tests.

1. Install [Python 3][py3].
2. Install [Conan][conan].

```cmd
pip install conan
```

3. Clone project in `x64 Native Tools Command Prompt for VS 2022`.

```cmd
git clone https://github.com/qis/signature signature
cd signature
```

4. Install dependencies.

```cmd
conan install . -if third_party -pr conan.profile
```

5. Configure project.

```cmd
cmake --preset release
cmake --preset debug
```

6. Build benchmarks and tests.

```cmd
cmake --build --preset release --target benchmarks
cmake --build --preset debug --target tests
```

7. Run benchmarks and tests.

```cmd
build\release\benchmarks.exe --benchmark_min_time=3
build\debug\tests.exe
```

## Install
Install header file and CMake config.

```cmd
cmake --preset install -DCMAKE_INSTALL_PREFIX="path/to/destination"
cmake --build --preset install --target install
```

[py3]: https://www.python.org/downloads/windows/
[conan]: https://conan.io/center/
