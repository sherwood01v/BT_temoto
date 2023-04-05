cmake_minimum_required(VERSION 3.10.2)
project(blackboard_test)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(behaviortree_cpp)
find_package(Threads REQUIRED)

include_directories(
  sample_nodes
)

# Build calculator
add_executable(crossdoor 
  src/crossdoor.cpp
  sample_nodes/crossdoor_nodes.cpp
)
target_link_libraries(crossdoor 
  BT::behaviortree_cpp
  Threads::Threads
)