#include "behaviortree_cpp/bt_factory.h"

// file that contains the custom nodes definitions
#include "crossdoor_nodes.h"
// using namespace CrossDoorNodes;

int main()
{  
  BT::BehaviorTreeFactory factory;

  CrossDoor cross_door;
  cross_door.registerNodes(factory);

  // factory.registerNodeType<CrossDoor::isDoorClosed>("isDoorClosed");
  // factory.registerNodeType<CrossDoor::smashDoor>("smashDoor");

  auto tree = factory.createTreeFromFile("./crossdoor.xml");
  tree.tickWhileRunning();
  return 0;
}