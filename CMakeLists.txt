cmake_minimum_required(VERSION 3.20)
project(strophoid)

set(CMAKE_CXX_STANDARD 20)

set(SOURCE_FILES main.cpp strophoid.cpp strophoid.h)

add_executable(strophoid ${SOURCE_FILES})
