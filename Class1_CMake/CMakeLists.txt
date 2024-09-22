cmake_minimum_required(VERSION 3.30)
project(Logger)

message(STATUS "Current Source dir" ${CMAKE_CURRENT_SOURCE_DIR})
message(STATUS "Current Binary dir" ${CMAKE_CURRENT_BINARY_DIR})
message(STATUS "Source dir"${CMAKE_SOURCE_DIR})
message(STATUS "Binary dir"${CMAKE_BINARY_DIR})


add_library(Logger STATIC src/Logger.cpp)

target_include_directories(Logger PUBLIC inc)
    
target_link_libraries(Logger PUBLIC spdlog::spdlog_header_only)
