#include "behaviortree_cpp/bt_factory.h"
#include "test_nodes.h"

int main()
{
    // We use the BehaviorTreeFactory to register our custom nodes
  BT::BehaviorTreeFactory factory;

  // The recommended way to create a Node is through inheritance.
  factory.registerNodeType<TestNodes::TestNode>("TestNode");

  auto tree = factory.createTreeFromFile("./test_2_tree.xml");
  tree.tickWhileRunning();

  return 0;
}
