cmake_minimum_required(VERSION 3.23)
project(cpp_primer)

set(CMAKE_CXX_STANDARD 20)
# set(CMAKE_C_COMPILER "/usr/local/bin/gcc")
# set(CMAKE_CXX_COMPILER "/usr/local/bin/g++")

# add_subdirectory(20-Concurrent-Programming/concurrency)

add_executable(cpp_primer 20-Concurrent-Programming/concurrency/08_improved_mutex_lock.cpp)
