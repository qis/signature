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

# Dependencies
if(SIGNATURE_BUILD_BENCHMARKS OR SIGNATURE_BUILD_TESTS OR SIGNATURE_BUILD_MAIN)
  list(PREPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/third_party)
  list(PREPEND CMAKE_PREFIX_PATH ${CMAKE_CURRENT_SOURCE_DIR}/third_party)
  find_package(Boost REQUIRED COMPONENTS headers)
  find_package(TBB REQUIRED COMPONENTS tbb)
  foreach(dir ${TBB_LIB_DIRS})
    get_filename_component(dir ${dir} DIRECTORY)
    foreach(lib ${TBB_LIBRARY_LIST})
      if(EXISTS ${dir}/bin/${lib}${CMAKE_SHARED_LIBRARY_SUFFIX})
        if(NOT EXISTS ${CMAKE_CURRENT_BINARY_DIR}/${lib}.dll)
          file(COPY ${dir}/bin/${lib}${CMAKE_SHARED_LIBRARY_SUFFIX}
            DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
        endif()
      endif()
    endforeach()
  endforeach()
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
  if(WIN32)
    target_compile_definitions(benchmarks PRIVATE WIN32_LEAN_AND_MEAN NOMINMAX)
  endif()
  if(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(benchmarks PRIVATE /arch:AVX2)
  endif()
endif()

# Tests
if(SIGNATURE_BUILD_TESTS)
  find_package(doctest REQUIRED)
  file(GLOB tests_headers src/memory.hpp src/tests.hpp)
  file(GLOB tests_sources src/memory.cpp src/tests.cpp src/tests/*.cpp)
  add_executable(tests ${tests_headers} ${tests_sources})
  target_link_libraries(tests PRIVATE Boost::headers doctest::doctest TBB::tbb signature)
  target_include_directories(tests PRIVATE src)
  if(WIN32)
    target_compile_definitions(tests PRIVATE WIN32_LEAN_AND_MEAN NOMINMAX)
  endif()
  if(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(tests PRIVATE /arch:AVX2)
  endif()
endif()

# Main
if(SIGNATURE_BUILD_MAIN)
  file(GLOB main_headers src/memory.hpp)
  file(GLOB main_sources src/memory.cpp src/main.cpp)
  add_executable(main ${main_headers} ${main_sources})
  target_link_libraries(main PRIVATE TBB::tbb signature)
  target_include_directories(main PRIVATE src)
  if(WIN32)
    target_compile_definitions(main PRIVATE WIN32_LEAN_AND_MEAN NOMINMAX)
  endif()
  if(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(main PRIVATE /arch:AVX2)
  endif()
endif()
