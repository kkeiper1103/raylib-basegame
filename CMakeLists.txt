cmake_minimum_required(VERSION 3.21)
project(RaylibBasegame)

set(EXECUTABLE game)

set(CMAKE_CXX_STANDARD 20)

add_executable(${EXECUTABLE} main.cpp)