cmake_minimum_required(VERSION 3.30)

project(NetworkingCpp)

message(STATUS "Current Source dir" ${CMAKE_CURRENT_SOURCE_DIR})
message(STATUS "Current Binary dir" ${CMAKE_CURRENT_BINARY_DIR})
message(STATUS "Source dir"${CMAKE_SOURCE_DIR})
message(STATUS "Binary dir"${CMAKE_BINARY_DIR})


set(THIRDPARTY_INSTALL "${CMAKE_SOURCE_DIR}/third_party/spdlogger/install")
set(THIRDPARTY_INSTALL_LIBS "${THIRDPARTY_INSTALL}/lib")
set(THIRDPARTY_INSTALL_HDRS "${THIRDPARTY_INSTALL}/include")
set(CMAKE_PREFIX_PATH "${THIRDPARTY_INSTALL_LIBS}/cmake")
message(STATUS "prefix path ${CMAKE_PREFIX_PATH}")

find_package(spdlog CONFIG REQUIRED)
add_subdirectory(Class1_CMake)

add_executable(Main main.cpp)

target_link_libraries(Main PUBLIC Logger)