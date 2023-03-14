#!/bin/sh

cmake --preset debug-clang
cmake --preset release-clang

cmake --build build/debug-clang
cmake --build build/release-clang

build/debug-clang/tests
build/release-clang/tests
build/release-clang/benchmarks --benchmark_min_time=3
