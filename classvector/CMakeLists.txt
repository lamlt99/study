cmake_minimum_required(VERSION 3.8)
project(classvector)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp vt.cpp vt.h)
add_executable(classvector ${SOURCE_FILES})