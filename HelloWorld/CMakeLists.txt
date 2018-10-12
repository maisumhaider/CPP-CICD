cmake_minimum_required(VERSION 3.12)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 17)

add_executable(HelloWorld main.cpp src/add.cpp include/add.h test/tests.cpp)