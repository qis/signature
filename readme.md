# Signature
C++23 binary signature search algorithm implemented using AVX2 and TBB.

**WARNING**: This project is not ready for production yet!<br/>
This warning will be removed and the repo force pushed with the final version.

### Compiler Support
This project was tested using the following compilers.

* Visual Studio 2022 (cl, clang, clang-cl) on Windows
* LLVM 15 on Linux

## Usage
Copy the [include/qis/signature.hpp](include/qis/signature.hpp) header file
**or** install this project as an `INTERFACE` library using CMake.

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
  std::memcpy(memory.data() + memory.size() - 5, "\x01\xCD\xE3\x04\x05", 5);

  // Create signature.
  const qis::signature search("01 ?? E? 04");

  // Scan memory block.
  const auto pos = qis::scan(memory.data(), memory.size(), search);

  // Check that the data was found.
  assert(pos != qis::signature::npos);

  // Check data position.
  assert(pos == memory.size() - 5);
}
```

Use [qis/xorstr](https://github.com/qis/xorstr) to hide the signature
string from analysis tools.

## Benchmarks
The benchmarks report syntax reflects the `QIS_BENCHMARK` macro usage in
[src/benchmarks.hpp](src/benchmarks.hpp).

```
---------------------------------------------------------------------
Benchmark                           Time             CPU   Iterations
---------------------------------------------------------------------
find avx     noe 05 16 kb         150 ns          120 ns      1000000
scan     tbb     06 32 kb         300 ns          280 ns      1000000
 ▲    ▲   ▲   ▲   ▲  ▲
 │    │   │   │   │  └─ Size of the searched memory block.
 │    │   │   │   └──── Size of the "find" or "scan" signature.
 │    │   │   └──────── Benchmark compiled with exceptions disabled.
 │    │   └──────────── Benchmark compiled with TBB support.
 │    └──────────────── Benchmark compiled with /arch:AVX2.
 └───────────────────── Signature used for the search.
```

There are two types of signatures:

* `find` has all bytes defined and the search algorithm can be optimized for it.

```sh
DB 27 5B FA FB 5E F1 FC FD FE FD 56 AF 97 F7 DF 07 EA 57 FF E2 57 56 D6 00 89
```

* `scan` contains unmasked 4-bit entries (`?`) and is generally slower to search for.

```sh
DB 27 5B ?? FB ?E F? FC FD FE ?? ?? ?? ?? F7 DF 07 EA 57 FF ?? ?? ?? D6 00 ??
```

The searched memory block ends with the `find` signature and is guaranteed to
never contain the `DB 27 5B` byte sequence anywhere else.

In the example above:
* Searched 16 KiB for `DB 27 5B FA FB` using AVX2 and exceptions disabled.
* Searched 32 KiB for `DB 27 5B ?? FB ?E` using `<algorithm>` and TBB.

### Results
All benchmarks were executed on the same system.

```
Run on (12 X 3713.02 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x6)
  L1 Instruction 32 KiB (x6)
  L2 Unified 256 KiB (x6)
  L3 Unified 12288 KiB (x1)
```

* See [windows.md](res/windows.md) for Windows results.
* See [linux.md](res/linux.md) for Linux results.

## Build & Install
This is a header-only. Building and installing is optional.

<details>
<summary>Build</summary>

1. Install [Python 3][py3].
2. Install [Conan][conan].

```sh
pip install "conan<2.0.0"
```

3. Install [CMake][cmake] and [LLVM][llvm] on **Linux**.

```sh
# CMake
sudo rm -rf /opt/cmake; sudo mkdir -p /opt/cmake
wget https://github.com/Kitware/CMake/releases/download/v3.25.3/cmake-3.25.3-linux-x86_64.tar.gz
sudo tar xf cmake-3.25.3-linux-x86_64.tar.gz -C /opt/cmake --strip-components=1

sudo tee /etc/profile.d/cmake.sh >/dev/null <<'EOF'
export PATH="/opt/cmake/bin:${PATH}"
EOF

sudo chmod 0755 /etc/profile.d/cmake.sh
. /etc/profile.d/cmake.sh

# LLVM
sudo rm -rf /opt/llvm; sudo mkdir -p /opt/llvm
wget https://github.com/llvm/llvm-project/releases/download/llvmorg-15.0.6/clang+llvm-15.0.6-x86_64-linux-gnu-ubuntu-18.04.tar.xz
sudo tar xf clang+llvm-15.0.6-x86_64-linux-gnu-ubuntu-18.04.tar.xz -C /opt/llvm --strip-components=1

sudo tee /etc/profile.d/llvm.sh >/dev/null <<'EOF'
export PATH="/opt/llvm/bin:${PATH}"
EOF

sudo chmod 0755 /etc/profile.d/llvm.sh
. /etc/profile.d/llvm.sh

sudo tee /etc/ld.so.conf.d/llvm.conf >/dev/null <<'EOF'
/opt/llvm/lib/x86_64-unknown-linux-gnu
/opt/llvm/lib
EOF

sudo ldconfig
```

4. Install [Visual Studio][vs] with C++ and CMake support on **Windows**.

5. Clone project. Use `x64 Native Tools Command Prompt for VS 2022` on Windows.

```sh
git clone https://github.com/qis/signature signature
cd signature
```

6. Install dependencies.

```sh
# Windows
conan install . -if third_party/msvc -pr conan.msvc

# Linux
conan install . -if third_party/llvm -pr conan.llvm
```

7. Configure project.

```sh
cmake --list-presets

# Windows
cmake --preset debug
cmake --preset release

# Windows & Linux
cmake --preset debug-clang
cmake --preset release-clang

# Windows
cmake --preset debug-clang-cl
cmake --preset release-clang-cl
```

8. Build configurations.

```sh
# Windows
cmake --build build/debug --target tests
cmake --build build/release

# Windows & Linux
cmake --build build/debug-clang --target tests
cmake --build build/release-clang

# Windows
cmake --build build/debug-clang-cl --target tests
cmake --build build/release-clang-cl
```

9. Run tests and benchmarks.

```sh
# Windows
build\debug\tests.exe
build\release\tests.exe
build\release\benchmarks.exe --benchmark_min_time=3

build\debug-clang\tests.exe
build\release-clang\tests.exe
build\release-clang\benchmarks.exe --benchmark_min_time=3

build\debug-clang-cl\tests.exe
build\release-clang-cl\tests.exe
build\release-clang-cl\benchmarks.exe --benchmark_min_time=3

# Linux
build/debug-clang/tests
build/release-clang/tests
build/release-clang/benchmarks --benchmark_min_time=3
```

</details>

<details>
<summary>Install</summary>

Install header file and CMake config.

```cmd
cmake -G Ninja -B build/install -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX="install"
cmake --build build/install --target install
```

</details>

<!--
git update-index --no-skip-worktree res/linux.md res/windows.md
git add res/linux.md res/windows.md
git update-index --skip-worktree res/linux.md res/windows.md
-->

[py3]: https://www.python.org/downloads/windows/
[conan]: https://conan.io/center/
[cmake]: https://cmake.org/download/
[llvm]: https://llvm.org/
[vs]: https://visualstudio.microsoft.com/vs/
