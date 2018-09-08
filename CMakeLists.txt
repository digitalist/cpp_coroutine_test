
cmake_minimum_required(VERSION 3.10)
project(coroutines_test)

SET(CLANG_COROUTINES_TS "-fcoroutines-ts")

set(CMAKE_CXX_STANDARD 17)

#Don't forget to set the compiler to clang++:

set(CMAKE_CXX_COMPILER "clang++")


set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -stdlib=libc++")
include_directories(cppcoro)

SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS}  ${CLANG_COROUTINES_TS} -stdlib=libc++ ")
add_executable(coroutines_test main.cpp)