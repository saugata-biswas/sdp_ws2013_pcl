 
cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(kinect_snapshot)

find_package(PCL 1.7 REQUIRED)

include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

set(ROS_BUILD_TYPE Release)

file(GLOB kinectpclviewer_SRC
    "src/*.h"
    "src/*.cpp"
)
add_executable(kinect_snapshot ${kinectpclviewer_SRC})

target_link_libraries (kinect_snapshot ${PCL_LIBRARIES})