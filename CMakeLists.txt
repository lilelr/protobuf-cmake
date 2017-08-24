project(hello)
cmake_minimum_required(VERSION 2.8)
set(CMAKE_VERBOSE_MAKEFILE ON)

add_subdirectory(proto)
add_subdirectory(src)