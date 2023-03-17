#!/bin/sh
script_file=`readlink -f "$0"`
script_path=`dirname "${script_file}"`
source_path=`dirname "${script_path}"`
cd "${source_path}" || exit 1

rm -rf build/check
cmake --preset debug-clang -B build/check
cmake --build build/check --target main
build/debug-clang/tests
