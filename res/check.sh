#!/bin/sh
script_file=`readlink -f "$0"`
script_path=`dirname "${script_file}"`
source_path=`dirname "${script_path}"`
cd "${source_path}" || exit 1

cmake --preset debug-clang
cmake --build build/debug-clang
build/debug-clang/tests
