# Signature
C++23 binary signature search algorithm implemented using AVX2 and TBB.

**WARNING**: This project is not ready for production yet!<br/>
This warning will be removed and the repo force pushed with the final version.

## Usage
Install using CMake or copy the header file
[include/qis/signature.hpp](include/qis/signature.hpp).

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

Use [qis/xorstr](https://github.com/qis/xorstr) to hide the signature
string from analysis tools.

# Benchmark
The benchmark report syntax reflects the `QIS_BENCHMARK` macro usage in
[src/benchmarks.hpp](src/benchmarks.hpp).

```
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     05 16 kb         150 ns          120 ns      1000000
scan     tbb 06 32 kb         300 ns          280 ns      1000000
 ▲    ▲   ▲   ▲  ▲
 │    │   │   │  └─ Size of the searched memory block.
 │    │   │   └──── Size of the "find" or "scan" signature.
 │    │   └──────── Benchmark compiled with TBB support.
 │    └──────────── Benchmark compiled with /arch:AVX2.
 └───────────────── Signature used for the search.
```

There are two types of signatures.

`find` has all bytes defined and the search algorithm can be optimized for it.

```
DB 27 5B FA FB 53 A0 FC FD FE FD 56 AF 97 F7 DF 07 EA 57 FF E2 57 56 D6 00 89
```

`scan` contains masked bytes (`??`) and is generally slower to search for.

```
DB 27 5B ?? FB ?? ?? FC FD FE ?? ?? ?? ?? F7 DF 07 EA 57 FF ?? ?? ?? D6 00 ??
```

The searched memory block ends with the `find` signature data and is guaranteed
to never contain the `DB 27 5B` byte sequence anywhere else.

In the example above:
* 16 KiB of data were searched for `DB 27 5B FA FB` using the AVX2 algorithm.
* 32 KiB of data were searched for `DB 27 5B ?? FB ??` using the TBB algorithm.

### Results

<details>

Results obtained with `benchmarks.exe --benchmark_min_time=3`.

```
Run on (12 X 3720.15 MHz CPU s)
CPU Caches:
  L1 Data 32 KiB (x6)
  L1 Instruction 32 KiB (x6)
  L2 Unified 256 KiB (x6)
  L3 Unified 12288 KiB (x1)
-----------------------------------------------------------------
Benchmark                       Time             CPU   Iterations
-----------------------------------------------------------------
find avx     03 16 kb         295 ns          296 ns     14222222
find avx tbb 03 16 kb         345 ns          345 ns     12800000
find std     03 16 kb       13275 ns        13268 ns       323855
find std tbb 03 16 kb        7586 ns         7577 ns       548571
scan avx     03 16 kb         296 ns          297 ns     14222222
scan avx tbb 03 16 kb         345 ns          345 ns     11686957
scan std     03 16 kb       13104 ns        13135 ns       320000
scan std tbb 03 16 kb        7595 ns         7615 ns       537600

find avx     03 64 kb        1456 ns         1454 ns      2890323
find avx tbb 03 64 kb        1452 ns         1449 ns      2890323
find std     03 64 kb       52256 ns        52368 ns        81455
find std tbb 03 64 kb       12036 ns        11970 ns       344615
scan avx     03 64 kb        1456 ns         1453 ns      2859574
scan avx tbb 03 64 kb        1445 ns         1449 ns      2921739
scan std     03 64 kb       52489 ns        52571 ns        79059
scan std tbb 03 64 kb       12103 ns        12130 ns       349091
```

</details>

## Build & Install
This is a header-only. Building and installing is optional.

### Build
<details>

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

</details>

### Install

<details>

Install header file and CMake config.

```cmd
cmake --preset install -DCMAKE_INSTALL_PREFIX="path/to/destination"
cmake --build --preset install --target install
```

</details>

[py3]: https://www.python.org/downloads/windows/
[conan]: https://conan.io/center/
