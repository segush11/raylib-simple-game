cmake_minimum_required(VERSION 3.20)

project(raylib_simple_game)

find_package(raylib 3.5.0 REQUIRED)

set(CMAKE_C_STANDARD 11)

add_executable(${CMAKE_PROJECT_NAME} main.c)

if(APPLE)
	target_link_libraries(${CMAKE_PROJECT_NAME} "-framework OpenGL")
	target_link_libraries(${CMAKE_PROJECT_NAME} "-framework Cocoa")
	target_link_libraries(${CMAKE_PROJECT_NAME} "-framework CoreVideo")
	target_link_libraries(${CMAKE_PROJECT_NAME} "-framework IOKit")
endif()

target_link_libraries(${CMAKE_PROJECT_NAME} raylib)

target_compile_definitions(${CMAKE_PROJECT_NAME} PUBLIC ASSETS_PATH="${CMAKE_CURRENT_SOURCE_DIR}/assets/")
