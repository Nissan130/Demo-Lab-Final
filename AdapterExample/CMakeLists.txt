cmake_minimum_required(VERSION 3.10)
project(AdapterExample)

set(CMAKE_CXX_STANDARD 17)

# GoogleTest
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Header-only library
add_library(adapter_lib INTERFACE)
target_include_directories(adapter_lib INTERFACE src)

# Test
add_executable(runTests tests/PrinterAdapterTest.cpp)
target_link_libraries(runTests adapter_lib gtest gtest_main)

include(GoogleTest)
gtest_discover_tests(runTests)
