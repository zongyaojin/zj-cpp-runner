cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

project(zj-cpp-examples)

include(${CMAKE_SOURCE_DIR}/cmake/CPM.cmake)
cpmaddpackage("gh:gabime/spdlog@1.8.2")

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS ON)

add_subdirectory(${CMAKE_SOURCE_DIR}/example1)
add_subdirectory(${CMAKE_SOURCE_DIR}/example2)
