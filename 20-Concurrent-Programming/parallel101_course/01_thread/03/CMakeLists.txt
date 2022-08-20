cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
project(cpptest LANGUAGES CXX)
find_package(Threads REQUIRED)

add_executable(cpptest main.cpp)
target_link_libraries(cpptest PUBLIC Threads::Threads)