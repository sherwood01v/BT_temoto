cmake_minimum_required(VERSION 3.10.2)
project(reactive_seq_test)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(behaviortree_cpp)
find_package(Threads REQUIRED)

include_directories(
  sample_nodes
)

# Build react
add_executable(react
  src/react.cpp
  sample_nodes/react_nodes.cpp
)
target_link_libraries(react 
  BT::behaviortree_cpp
  Threads::Threads
)