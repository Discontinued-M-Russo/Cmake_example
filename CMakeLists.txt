cmake_minimum_required(VERSION 3.9)
project(untitled1)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(test)

add_executable(Example2 main.cpp src/rectangle.cpp src/rectangle.h)