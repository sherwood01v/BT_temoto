#include "behaviortree_cpp/bt_factory.h"

// file that contains the custom nodes definitions
#include "test_nodes.h"
using namespace TestNodes;

int main()
{  
  BT::BehaviorTreeFactory factory;

  factory.registerNodeType<TestNodes::InitialCalcNode>("InitialCalcNode");
  factory.registerNodeType<TestNodes::CalcNode>("CalcNode");

  auto tree = factory.createTreeFromFile("./calculator.xml");
  tree.tickWhileRunning();
  return 0;
}