cmake_minimum_required(VERSION 3.10.2)
project(blackboard_test)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(behaviortree_cpp)
find_package(Threads REQUIRED)

include_directories(
  sample_nodes
)

# Build blackboard test 
add_executable(blackboard 
  src/blackboard.cpp
  sample_nodes/dummy_nodes.cpp
)
target_link_libraries(blackboard 
  BT::behaviortree_cpp
  Threads::Threads
)