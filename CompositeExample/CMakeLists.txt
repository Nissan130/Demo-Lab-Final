cmake_minimum_required(VERSION 3.10)
project(CompositeExample)

set(CMAKE_CXX_STANDARD 17)

# Google Test
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Library from src folder
add_library(composite_lib INTERFACE)
target_include_directories(composite_lib INTERFACE src)

# Test executable
add_executable(runTests tests/CompositeTest.cpp)
target_link_libraries(runTests composite_lib gtest gtest_main)

include(GoogleTest)
gtest_discover_tests(runTests)
