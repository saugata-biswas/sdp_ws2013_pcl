cmake_minimum_required(VERSION 2.8.3)
project(pcl_viewer)

find_package(catkin REQUIRED COMPONENTS 
	roscpp
	dynamic_reconfigure
)

find_package(PCL 1.7 REQUIRED)

generate_dynamic_reconfigure_options(cfg/viewer.cfg)

catkin_package(CATKIN_DEPENDS	roscpp)

include_directories(
  ${catkin_INCLUDE_DIRS}
	${PCL_INCLUDE_DIRS}
	include/
)

add_library(displayer src/displayer.cpp)
add_executable(pcl_viewer nodes/pcl_viewer.cpp)

target_link_libraries(pcl_viewer 
	${catkin_LIBRARIES}
	${PCL_LIBRARIES}
	displayer
)

add_dependencies(pcl_viewer	${PROJECT_NAME}_gencfg)
