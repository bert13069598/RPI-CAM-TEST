cmake_minimum_required(VERSION 3.10)
project(OpenCVCam)

set(CMAKE_CXX_STANDARD 11) 
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})

find_package(OpenCV 4 REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(opencv_cam test.cpp)
target_link_libraries(opencv_cam ${OpenCV_LIBS})
