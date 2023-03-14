cmake_minimum_required(VERSION 3.23 FATAL_ERROR)
project(signature VERSION 0.1.0 LANGUAGES CXX)

# Options
option(SIGNATURE_BUILD_BENCHMARKS "Build benchmarks" OFF)
option(SIGNATURE_BUILD_TESTS "Build tests" OFF)
option(SIGNATURE_BUILD_MAIN "Build main" OFF)

option(SIGNATURE_INSTALL_HEADERS "Install signature headers" ON)
option(SIGNATURE_INSTALL_CONFIG "Install signature config" ${SIGNATURE_INSTALL_HEADERS})
option(SIGNATURE_INSTALL_LIBDIR "Install signature config prefix" ${CMAKE_INSTALL_LIBDIR})

if(SIGNATURE_INSTALL_CONFIG AND NOT SIGNATURE_INSTALL_HEADERS)
  message(FATAL_ERROR "SIGNATURE_INSTALL_CONFIG requires SIGNATURE_INSTALL_HEADERS")
endif()

if(NOT SIGNATURE_INSTALL_LIBDIR)
  set(SIGNATURE_INSTALL_LIBDIR .)
endif()

# Build Configuration
if(SIGNATURE_BUILD_BENCHMARKS OR SIGNATURE_BUILD_TESTS OR SIGNATURE_BUILD_MAIN)
  # Set conan install directory.
  if(WIN32)
    set(third_party third_party/msvc)
  else()
    set(third_party third_party/llvm)
  endif()

  # Copy binaries installed with conan to build directory.
  if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${third_party}/bin)
    file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/${third_party}/bin/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
  endif()

  # Add conan install directory to module and config search paths.
  list(PREPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/${third_party})
  list(PREPEND CMAKE_PREFIX_PATH ${CMAKE_CURRENT_SOURCE_DIR}/${third_party})

  # Find common dependencies.
  find_package(TBB REQUIRED COMPONENTS tbb)

  # Remove exceptions and RTTI options from MSVC compiler flags.
  if(MSVC)
    string(REPLACE "/EHsc" "" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
    string(REPLACE "/GR" "" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
  endif()

  # Configures the target and sources.
  function(signature_configure_target target)
    # Configure the standard library.
    if(WIN32)
      target_compile_definitions(${target} PRIVATE WIN32_LEAN_AND_MEAN NOMINMAX)
    else()
      target_compile_definitions(${target} PRIVATE -D_LIBCPP_ENABLE_EXPERIMENTAL=1)
      target_compile_options(${target} PRIVATE -stdlib=libc++)
      target_link_libraries(${target} PRIVATE c++ c++experimental)
    endif()

    # Enable AVX2 support.
    if(MSVC)
      target_compile_options(${target} PRIVATE /arch:AVX2)
    else()
      target_compile_options(${target} PRIVATE -mavx2)
    endif()

    # Configure sources.
    foreach(source IN LISTS ARGN)
      if(source MATCHES "_noe\.")
        # Disable exceptions and RTTI for source filenames that end with "_noe".
        if(MSVC)
          set_source_files_properties(${source} PROPERTIES COMPILE_OPTIONS "/EHs-c-;/GR-")
        else()
          set_source_files_properties(${source} PROPERTIES COMPILE_OPTIONS "-fno-exceptions;-fno-rtti")
        endif()
        if(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
          set_source_files_properties(${source} PROPERTIES COMPILE_DEFINITIONS "_HAS_EXCEPTIONS=0")
        endif()
      else()
        # Enable exceptions and RTTI for source filenames that don't end with "_noe"'.
        if(MSVC)
          set_source_files_properties(${source} PROPERTIES COMPILE_OPTIONS "/EHsc;/GR")
        endif()
      endif()
    endforeach()
  endfunction()
endif()

# Library
file(GLOB headers include/qis/*.hpp)
add_library(signature INTERFACE ${headers})
target_compile_features(signature INTERFACE cxx_std_23)

target_include_directories(signature INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

if(SIGNATURE_INSTALL_HEADERS)
  install(DIRECTORY include/ DESTINATION include FILES_MATCHING PATTERN "*.hpp")
endif()

if(SIGNATURE_INSTALL_CONFIG)
  install(TARGETS signature EXPORT signature)
  install(EXPORT signature FILE signature-config.cmake
    NAMESPACE qis:: DESTINATION ${SIGNATURE_INSTALL_LIBDIR}/cmake/signature)
endif()

add_library(qis::signature ALIAS signature)

# Benchmarks
if(SIGNATURE_BUILD_BENCHMARKS)
  find_package(benchmark REQUIRED)
  file(GLOB benchmark_headers src/memory.hpp src/benchmarks.hpp)
  file(GLOB benchmark_sources src/memory.cpp src/benchmarks.cpp src/benchmarks/*.cpp)
  add_executable(benchmarks ${benchmark_headers} ${benchmark_sources})
  target_link_libraries(benchmarks PRIVATE benchmark::benchmark TBB::tbb signature)
  target_include_directories(benchmarks PRIVATE src)
  signature_configure_target(benchmarks ${benchmark_sources})
endif()

# Tests
if(SIGNATURE_BUILD_TESTS)
  find_package(doctest REQUIRED)
  file(GLOB tests_headers src/memory.hpp src/tests.hpp)
  file(GLOB tests_sources src/memory.cpp src/tests.cpp src/tests/*.cpp)
  add_executable(tests ${tests_headers} ${tests_sources})
  target_link_libraries(tests PRIVATE doctest::doctest TBB::tbb signature)
  target_include_directories(tests PRIVATE src)
  signature_configure_target(tests ${tests_sources})
endif()

# Main
if(SIGNATURE_BUILD_MAIN)
  file(GLOB main_headers src/memory.hpp)
  file(GLOB main_sources src/memory.cpp src/main.cpp)
  add_executable(main ${main_headers} ${main_sources})
  target_link_libraries(main PRIVATE TBB::tbb signature)
  target_include_directories(main PRIVATE src)
  signature_configure_target(main ${main_sources})
endif()
