#!/bin/sh
script_file=`readlink -f "$0"`
script_path=`dirname "${script_file}"`
source_path=`dirname "${script_path}"`
cd "${source_path}" || exit 1

rm -rf build/check
cmake --preset check -B build/check
cmake --build build/check
build/check/tests
build/check/main

# Use powershell on Windows and the 'sox' package on Linux to play sound.
if [ -x /mnt/c/Windows/System32/WindowsPowerShell/v1.0/powershell.exe ]; then
  /mnt/c/Windows/System32/WindowsPowerShell/v1.0/powershell.exe "[console]::beep(500,100)"
elif [ -x "`command -v play`" ]; then
  play -q -n synth 0.1 sin 500
fi
