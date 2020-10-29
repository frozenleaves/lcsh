cmake_minimum_required(VERSION 3.17)
project(lcsh)

set(CMAKE_CXX_STANDARD 14)

add_executable(lcsh main.cpp tools.cpp tools.h)