cmake_minimum_required(VERSION 2.8.3)
project(ejemplos)


find_package(catkin REQUIRED COMPONENTS
  roscpp
)


catkin_package(

)

add_executable (nodo_cpp src/anidado.cpp)

target_link_libraries(nodo_cpp
       ${catkin_LIBRARIES}
)

include_directories(

  ${catkin_INCLUDE_DIRS}
)


