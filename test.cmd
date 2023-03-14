@echo off

cmake --preset debug
cmake --preset release
cmake --preset debug-clang
cmake --preset release-clang
cmake --preset debug-clang-cl
cmake --preset release-clang-cl

cmake --build build/debug
cmake --build build/release
cmake --build build/debug-clang
cmake --build build/release-clang
cmake --build build/debug-clang-cl
cmake --build build/release-clang-cl

build\debug\tests.exe
build\release\tests.exe
build\debug-clang\tests.exe
build\release-clang\tests.exe
build\debug-clang-cl\tests.exe
build\release-clang-cl\tests.exe

build\release\benchmarks.exe --benchmark_min_time=3
build\release-clang\benchmarks.exe --benchmark_min_time=3
build\release-clang-cl\benchmarks.exe --benchmark_min_time=3
