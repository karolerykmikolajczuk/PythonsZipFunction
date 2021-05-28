cmake_minimum_required(VERSION 3.20)
project(ZIP)

set(CMAKE_CXX_STANDARD 17)

add_executable(ZIP main.cpp tests/basic_check.cpp)
