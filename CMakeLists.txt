cmake_minimum_required(VERSION 3.17.3)

set(This Example)

project(${This} C CXX)

set(CMAKE_C_STANDARD 9)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDANT_CODE ON)


enable_testing()

add_subdirectory(googletest)

set(Headers
    Example.h
)
set(Sources
    Example.cpp
)


add_library(${This} STATIC ${Headers} ${Sources})

add_subdirectory(test)
