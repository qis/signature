@echo off
pushd %~dp0..

rd /q /s build\debug
rd /q /s build\release
rd /q /s build\debug-clang
rd /q /s build\release-clang
rd /q /s build\debug-clang-cl
rd /q /s build\release-clang-cl

time /t

cmake --preset debug
cmake --preset release
cmake --preset debug-clang
cmake --preset release-clang
cmake --preset debug-clang-cl
cmake --preset release-clang-cl

time /t

cmake --build build/debug
cmake --build build/release
cmake --build build/debug-clang
cmake --build build/release-clang
cmake --build build/debug-clang-cl
cmake --build build/release-clang-cl

time /t

build\debug\tests.exe
build\release\tests.exe
build\debug-clang\tests.exe
build\release-clang\tests.exe
build\debug-clang-cl\tests.exe
build\release-clang-cl\tests.exe

build\debug\main.exe
build\release\main.exe
build\debug-clang\main.exe
build\release-clang\main.exe
build\debug-clang-cl\main.exe
build\release-clang-cl\main.exe

time /t

echo # Windows> res\windows.md
echo Benchmark results sorted by scanned memory block sizes.>> res\windows.md

echo.>> res\windows.md
echo ## MSVC (cl)>> res\windows.md
echo.>> res\windows.md
build\release\benchmarks.exe >> res\windows.md
echo ## MSVC (cl) complete.
time /t

echo.>> res\windows.md
echo ## LLVM (clang)>> res\windows.md
echo.>> res\windows.md
build\release-clang\benchmarks.exe >> res\windows.md
echo ## LLVM (clang) complete.
time /t

echo.>> res\windows.md
echo ## LLVM (clang-cl)>> res\windows.md
echo.>> res\windows.md
build\release-clang-cl\benchmarks.exe >> res\windows.md
echo ## LLVM (clang-cl) complete.

time /t

popd

powershell "[console]::beep(500,100)"
