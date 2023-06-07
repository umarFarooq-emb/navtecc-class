cmake_minimum_required(VERSION 3.0)

set(CMAKE_C_COMPILER C:/MinGW/bin/gcc.exe)

set(CMAKE_CXX_COMPILER C:/MinGW/bin/g++.exe)

project(pointers)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(pointers src/pointers.c)
