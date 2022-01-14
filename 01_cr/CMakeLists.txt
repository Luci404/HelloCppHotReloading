cmake_minimum_required(VERSION 3.10)

project(Host)
add_executable(Host "${CMAKE_SOURCE_DIR}/host/main.cpp")
target_include_directories(Host PRIVATE "${CMAKE_SOURCE_DIR}/vendor")

project(Module)
add_library(Module SHARED "${CMAKE_SOURCE_DIR}/module/module.cpp")
target_include_directories(Module PRIVATE "${CMAKE_SOURCE_DIR}/vendor")