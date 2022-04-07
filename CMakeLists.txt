cmake_minimum_required(VERSION 3.21)
project(RAII_example)

set(CMAKE_CXX_STANDARD 14)

add_executable(RAII_example1 main1.cpp)
add_executable(RAII_example2 main2.cpp Document.cpp Document.h)
add_executable(RAII_example3 main3.cpp)