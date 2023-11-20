get_filename_component(ZJ_FOLDER_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)

add_executable(${ZJ_FOLDER_NAME} main.cpp)
target_link_libraries(${ZJ_FOLDER_NAME} spdlog::spdlog)
