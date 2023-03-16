#!/bin/sh
script_file=`readlink -f "$0"`
script_path=`dirname "${script_file}"`
source_path=`dirname "${script_path}"`
cd "${source_path}" || exit 1

if ! [ -x "`command -v ansi2txt`" ]; then
  echo "Error: Command ansi2txt not found. Please install the colorized-logs package."
  exit 1
fi

date

cmake --preset debug-clang
cmake --preset release-clang

date

cmake --build build/debug-clang
cmake --build build/release-clang

date

build/debug-clang/tests
build/release-clang/tests

date

echo "# Linux" > res/linux.md
echo "Benchmark results sorted by scanned memory block sizes." >> res/linux.md

echo "" >> res/linux.md
echo "## LLVM (clang)" >> res/linux.md
echo "" >> res/linux.md
build/release-clang/benchmarks | ansi2txt >> res/linux.md
echo "## LLVM (clang) complete."

date
