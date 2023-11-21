cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

project(zj-cpp-runner)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS ON)

add_subdirectory(${CMAKE_SOURCE_DIR}/example1)
add_subdirectory(${CMAKE_SOURCE_DIR}/example2)
