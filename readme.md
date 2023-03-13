# Signature
C++23 binary signature search algorithm implemented using AVX2 and TBB.

**WARNING**: This project is not ready for production yet!<br/>
This warning will be removed and the repo force pushed with the final version.

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

There are two types of signatures:

* `find` has all bytes defined and the search algorithm can be optimized for it.

```sh
DB 27 5B FA FB 53 A0 FC FD FE FD 56 AF 97 F7 DF 07 EA 57 FF E2 57 56 D6 00 89
```

* `scan` contains masked bytes (`??`) and is generally slower to search for.

```sh
DB 27 5B ?? FB ?? ?? FC FD FE ?? ?? ?? ?? F7 DF 07 EA 57 FF ?? ?? ?? D6 00 ??
```

The searched memory block ends with the `find` signature and is guaranteed to
never contain the `DB 27 5B` byte sequence anywhere else.

In the example above:
* 16 KiB of data were searched for `DB 27 5B FA FB` using the AVX2 algorithm.
* 32 KiB of data were searched for `DB 27 5B ?? FB ??` using the TBB algorithm.

### Results
Results obtained with `benchmarks.exe --benchmark_min_time=3`.

<details>

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
find  avx     03 16 kb        319 ns          321 ns      2240000
find  avx tbb 03 16 kb        315 ns          314 ns      2240000
find          03 16 kb      14044 ns        13951 ns        44800
find      tbb 03 16 kb       7925 ns         7847 ns        89600
scan  avx     03 16 kb        317 ns          321 ns      2240000
scan  avx tbb 03 16 kb        315 ns          321 ns      2240000
scan          03 16 kb      13961 ns        13811 ns        49778
scan      tbb 03 16 kb       7732 ns         7673 ns        89600

find  avx     03 64 kb       1587 ns         1604 ns       448000
find  avx tbb 03 64 kb       1571 ns         1569 ns       448000
find          03 64 kb      55477 ns        56250 ns        10000
find      tbb 03 64 kb      12353 ns        12277 ns        56000
scan  avx     03 64 kb       1552 ns         1569 ns       448000
scan  avx tbb 03 64 kb       1566 ns         1569 ns       448000
scan          03 64 kb      55702 ns        56250 ns        10000
scan      tbb 03 64 kb      12348 ns        12277 ns        56000
```

</details>

## CMake
This is a header-only. Building and installing is optional.

### Build
Build benchmarks and tests.

<details>

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
Install header file and CMake config.

<details>

```cmd
cmake --preset install -DCMAKE_INSTALL_PREFIX="path/to/destination"
cmake --build --preset install --target install
```

</details>

[py3]: https://www.python.org/downloads/windows/
[conan]: https://conan.io/center/
