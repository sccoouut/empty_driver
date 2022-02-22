cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

project(empty_driver LANGUAGES CXX)

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/FindWDK/cmake")
find_package(WDK REQUIRED)

wdk_add_driver(${PROJECT_NAME}
	main.cpp
)
