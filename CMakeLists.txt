cmake_minimum_required (VERSION 3.5)
project(stack LANGUAGES C)

set(CMAKE_BUILD_TYPE Release)
set(ROOT_DIR ${CMAKE_CURRENT_LIST_DIR})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${ROOT_DIR}/export)

file(GLOB 
	CS "${ROOT_DIR}/src/*.c")
include_directories("${ROOT_DIR}/include")

add_library(${PROJECT_NAME} STATIC ${CS})

