cmake_minimum_required(VERSION 3.10.2)
project(behavior_tree_tests)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(behaviortree_cpp)
find_package(Threads REQUIRED)

include_directories(
  sample_nodes
)

# Build test 1
add_executable(test_1 
  src/test_1.cpp
  sample_nodes/dummy_nodes.cpp
)
target_link_libraries(test_1 
  BT::behaviortree_cpp
  Threads::Threads
)

# Build test 2
add_executable(test_2
  src/test_2.cpp
  sample_nodes/test_nodes.cpp
)
target_link_libraries(test_2 
  BT::behaviortree_cpp
  Threads::Threads
)