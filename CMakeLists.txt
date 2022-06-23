cmake_minimum_required(VERSION 3.22)
project(cmake_study C)

set(CMAKE_C_STANDARD 17)

include_directories(${PROJECT_SOURCE_DIR}/show)
add_subdirectory(${PROJECT_SOURCE_DIR}/show)
aux_source_directory(. MAIN_SRCS)


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
#set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

add_executable(cmake_study ${MAIN_SRCS})

target_link_libraries(cmake_study show)
