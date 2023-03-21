# Signature
C++23 binary signature search algorithm optimized with AVX2 and TBB (optional).

* Single header library.
* Supports disabling exceptions and RTTI.
* 23 times as fast, as using `<algorithm>`.

### Compiler Support
This library was benchmarked and tested using the following compilers.

* VS 2022 (cl, clang, clang-cl) on Windows
* LLVM 15 (clang and libc++) on Linux

## Usage
Copy [signature.hpp](include/qis/signature.hpp) to your include path **or**
install this project as an interface library using CMake.

```cpp
#include <qis/signature.hpp>
#include <vector>
#include <cassert>
#include <cstdint>
#include <cstring>

// Optional: Make sure that AVX2 support was detected.
// static_assert(QIS_SIGNATURE_USE_AVX2);

// Optional: Make sure that TBB headers were found.
// static_assert(QIS_SIGNATURE_USE_TBB);

int main() {
  // Create a 1 GiB memory block.
  std::vector<std::uint8_t> memory;
  memory.resize(1024 * 1024 * 1024, 0);

  // Write data to the memory block.
  std::memcpy(memory.data() + memory.size() - 5, "\x01\xCD\xE3\x04\x05", 5);

  // Create signature.
  const qis::signature search("01 ?? E? 04");

  // Scan memory block.
  const auto pos = qis::scan(memory.data(), memory.size(), search);

  // Check that the signature was found.
  assert(pos != qis::npos);

  // Check data position.
  assert(pos == memory.size() - 5);
}
```

Use [qis/xorstr](https://github.com/qis/xorstr) to hide the signature
string from analysis tools if necessary.

## Tests
The container and search algorithms were extensively tested. See
[tests.hpp](src/tests.hpp) for more details.

## Benchmarks
All benchmark results use the following report syntax.

```
                      + Scanned memory block size.
                      v
-----------------------------------------------------------------
Type |  K | AVX TBB | 1 GiB     Time             CPU   Iterations
-----------------------------------------------------------------
mask | 12 |         |   853445625 ns    853515625 ns            8
mask | 12 |     tbb |   129104875 ns    123046875 ns            8
mask | 12 | avx     |    50333100 ns     46875000 ns            8
mask | 12 | avx tbb |    36736000 ns     37109375 ns            8
 ^      ^    ^   ^
 |      |    |   +----- Benchmark compiled with TBB support.
 |      |    +--------- Benchmark compiled with AVX2 support.
 |      +-------------- Signature size used for the scan.
 +--------------------- Signature type used for the scan.
```

There are two types of signatures used for the benchmarks:

* `data` has all bytes defined and the search algorithm is optimized for it.

```sh
DB E7 DB DA EB DE E1 EC DD DE DD D6 EF E7 D7 EF E7 EA E7 DF D2 D7 E6 D6 D0 D9
```

* `mask` contains an unmasked 4-bit pattern (`?`) and uses a slower algorithm.

```sh
DB E? DB DA EB DE E1 EC DD DE DD D6 EF E7 D7 EF E7 EA E7 DF D2 D7 E6 D6 D0 D9
```

The `K` column shows how many bytes of the signature type were used for the scan.<br/>
In the example above, `mask | 12` means `DB E? DB DA EB DE E1 EC DD DE DD D6`.

The scanned memory block always contains the signature at the very end.

All benchmark results were recorded on the same system.

```
Intel(R) Core(TM) i7-8700K @ 3.70 GHz (12 Threads)
* L1 Data 32 KiB (x6)
* L1 Instruction 32 KiB (x6)
* L2 Unified 256 KiB (x6)
* L3 Unified 12288 KiB (x1)

32 GB DDR4 RAM @ 2133 MHz (Dual Channel)
```

* See [windows.md](res/windows.md) for Windows results.
* See [linux.md](res/linux.md) for Linux results.

## Tools
Install tools required for building benchmarks and tests.

<details>
<summary>Linux</summary>

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

# Python
sudo apt install -y python3 python3-pip

# Conan
pip install "conan<2.0.0"
conan profile new default --detect
conan profile update settings.compiler.libcxx=libstdc++11 default
```

</details>

<details>
<summary>Windows</summary>

1. Download and install [Python][py] and [Visual Studio][vs] with C++ and CMake support.
3. Install [Conan][conan] in `x64 Native Tools Command Prompt for VS 2022`.

```cmd
pip install "conan<2.0.0"
conan profile new default --detect
```

</details>

## Build & Install
This is a header-only. Building and installing is optional.

<details>
<summary>Build</summary>

Use `x64 Native Tools Command Prompt for VS 2022` on Windows.

1. Install dependencies on Windows.

```cmd
conan install third_party -if third_party/msvc -pr third_party/msvc.profile
```

2. Build dependencies on Linux.

```sh
conan install third_party -if third_party/llvm -pr third_party/llvm.profile
```

3. Configure project.

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

4. Build configurations.

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

5. Run tests and benchmarks.

```sh
# Windows
build\debug\tests.exe
build\release\tests.exe
build\release\benchmarks.exe

build\debug-clang\tests.exe
build\release-clang\tests.exe
build\release-clang\benchmarks.exe

build\debug-clang-cl\tests.exe
build\release-clang-cl\tests.exe
build\release-clang-cl\benchmarks.exe

# Linux
build/debug-clang/tests
build/release-clang/tests
build/release-clang/benchmarks
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
git update-index --chmod=+x res/benchmark.sh res/check.sh
git update-index --no-skip-worktree res/linux.md res/windows.md
git add res/linux.md res/windows.md
git update-index --skip-worktree res/linux.md res/windows.md
-->

[py]: https://www.python.org/downloads/windows/
[vs]: https://visualstudio.microsoft.com/vs/
[cmake]: https://cmake.org/download/
[conan]: https://conan.io/center/
[llvm]: https://llvm.org/
