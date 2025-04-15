cmake_minimum_required(VERSION 3.10)
project(SingletonExample)

set(CMAKE_CXX_STANDARD 17)

# Google Test setup
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Logger source files
add_library(logger_lib
    src/Logger.cpp
)

target_include_directories(logger_lib PUBLIC src)

# Test executable
add_executable(runTests tests/LoggerTest.cpp)
target_link_libraries(runTests logger_lib gtest gtest_main)

include(GoogleTest)
gtest_discover_tests(runTests)
