# Signature
C++23 binary signature search algorithm optimized using AVX2.

## Build
This is a header-only library. Building is only necessary for benchmarks and tests.

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
build\release\benchmarks.exe
build\debug\tests.exe
```

## Install
This is a header-only library. Installing is only necessary to generate a CMake config.

```cmd
cmake --preset install -DCMAKE_INSTALL_PREFIX="path/to/destination"
cmake --build --preset install --target install
```

[py3]: https://www.python.org/downloads/windows/
[conan]: https://conan.io/center/
