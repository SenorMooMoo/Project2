cmake_minimum_required(VERSION 3.20)
project(Project2)

set(CMAKE_CXX_STANDARD 14)

add_executable(Project2 main.cpp;Stack.h)

add_executable(Stack Stack.h; stackTest.cpp)
