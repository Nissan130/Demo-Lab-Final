cmake_minimum_required(VERSION 3.10)
project(DecoratorExample)

set(CMAKE_CXX_STANDARD 17)

# GoogleTest
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Source files as a header-only library
add_library(decorator_lib INTERFACE)
target_include_directories(decorator_lib INTERFACE src)

# Test executable
add_executable(runTests tests/DecoratorTest.cpp)
target_link_libraries(runTests decorator_lib gtest gtest_main)

include(GoogleTest)
gtest_discover_tests(runTests)
