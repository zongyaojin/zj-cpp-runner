cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(zj-cpp-runner)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS ON)

find_package(spdlog REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(Boost REQUIRED)

set(ZJ_COOK_PATH "kitchen")
set(ZJ_MAIN_FILE ${CMAKE_SOURCE_DIR}/${ZJ_COOK_PATH}/main.cpp)
file(GLOB ZJ_SOURCE_FILES "${CMAKE_SOURCE_DIR}/${ZJ_COOK_PATH}/*.cpp")
set(ZJ_INCLUDE_PATH ${CMAKE_SOURCE_DIR}/${ZJ_COOK_PATH})

message("---- main: ${ZJ_MAIN_FILE}")
message("---- sources: ${ZJ_SOURCE_FILES}")
message("---- include: ${ZJ_INCLUDE_PATH}")

add_executable(${PROJECT_NAME} ${ZJ_MAIN_FILE})
target_sources(${PROJECT_NAME} PRIVATE ${ZJ_SOURCE_FILES})
target_include_directories(${PROJECT_NAME} PUBLIC ${ZJ_INCLUDE_PATH})
target_link_libraries(${PROJECT_NAME} spdlog::spdlog Eigen3::Eigen Boost::boost)
