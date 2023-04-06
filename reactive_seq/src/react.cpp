#include "behaviortree_cpp/bt_factory.h"

#include "react_nodes.h"
using namespace ReactNodes;

int main()
{  
  BT::BehaviorTreeFactory factory;

  factory.registerNodeType<ReactNodes::isObjectFound>("isObjectFound");
  factory.registerNodeType<ReactNodes::FindObject>("FindObject");
  factory.registerNodeType<ReactNodes::isObjectPicked>("isObjectPicked");
  factory.registerNodeType<ReactNodes::PickObject>("PickObject");
  factory.registerNodeType<ReactNodes::isSeqInterrupted>("isSeqInterrupted");
  factory.registerNodeType<ReactNodes::InterruptSeq>("InterruptSeq");
  factory.registerNodeType<ReactNodes::isObjectPlaced>("isObjectPlaced");
  factory.registerNodeType<ReactNodes::PlaceObject>("PlaceObject");

  auto tree = factory.createTreeFromFile("./react.xml");
  tree.tickWhileRunning();
  return 0;
}