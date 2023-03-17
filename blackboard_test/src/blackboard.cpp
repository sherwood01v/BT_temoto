#include "behaviortree_cpp/bt_factory.h"

// file that contains the custom nodes definitions
#include "dummy_nodes.h"
using namespace DummyNodes;

int main()
{  
  BT::BehaviorTreeFactory factory;

  factory.registerNodeType<DummyNodes::SaySomething>("SaySomething");
  factory.registerNodeType<DummyNodes::ThinkWhatToSay>("ThinkWhatToSay");

  auto tree = factory.createTreeFromFile("./blackboard.xml");
  tree.tickWhileRunning();
  return 0;
}

/*  Expected output:
  Robot says: hello
  Robot says: The answer is 42
*/