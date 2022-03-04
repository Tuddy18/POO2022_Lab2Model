cmake_minimum_required(VERSION 3.21)
project(lab2model)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab2model main.cpp io_operations/array_io.cpp io_operations/array_io.h menu/menu.cpp menu/menu.h problem/increasing_sequence.cpp problem/increasing_sequence.h test/tests.cpp test/tests.h)
