cmake_minimum_required(VERSION 3.0)

project(heat_transfer)

#set execute file path
set(EXECUTABLE_OUTPUT_PATH "${CMAKE_SOURCE_DIR}/bin")


#header files search path
include_directories("${CMAKE_SOURCE_DIR}/include")

#link library

#other source files
file(GLOB_RECURSE all_source "${CMAKE_SOURCE_DIR}/source/*.cpp")

#generate the target file
add_executable(main main.cpp)
# target_sources(main PUBLIC main.cpp)
# target_sources(main all_source)
