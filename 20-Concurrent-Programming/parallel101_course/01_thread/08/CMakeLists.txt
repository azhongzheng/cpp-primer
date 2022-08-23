cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
project(cpptest LANGUAGES CXX)
find_package(Threads REQUIRED)
set(CMAKE_CXX_COMPILER "/usr/local/bin/g++-12")
add_executable(cpptest main.cpp)
target_link_libraries(cpptest PUBLIC Threads::Threads)

