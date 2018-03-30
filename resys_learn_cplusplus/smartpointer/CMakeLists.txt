project(smart_pointer)
cmake_minimum_required(VERSION 2.8)
#aux_source_directory(. ROOT_DIR)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/lib)

include_directories(
    ${PROJECT_SOURCE_DIR}/include
)

link_directories(
    ${PROJECT_SOURCE_DIR}/build/lib
)

add_subdirectory(src)
add_subdirectory(test)