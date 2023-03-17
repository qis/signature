#!/bin/sh
script_file=`readlink -f "$0"`
script_path=`dirname "${script_file}"`
source_path=`dirname "${script_path}"`
cd "${source_path}" || exit 1

if ! [ -x "`command -v ansi2txt`" ]; then
  echo "Error: Command ansi2txt not found. Please install the colorized-logs package."
  exit 1
fi

rm -rf build/debug-clang
rm -rf build/release-clang

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

# Use powershell on Windows and the 'sox' package on Linux to play sound.
if [ -x /mnt/c/Windows/System32/WindowsPowerShell/v1.0/powershell.exe ]; then
  /mnt/c/Windows/System32/WindowsPowerShell/v1.0/powershell.exe "[console]::beep(500,100)"
elif [ -x "`command -v play`" ]; then
  play -q -n synth 0.1 sin 500
fi
