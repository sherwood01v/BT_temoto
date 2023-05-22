#include "behaviortree_cpp/bt_factory.h"

#include "react_nodes.h"
using namespace ReactNodes;

int main(int argc, cahr** argv)
{  

  ros::init(argc, argv, "my_ros_noide");
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

  BT::NodeStatus status = BT::NodeStatus::IDLE;

  std::cout << "--- ticking\n";
  status = tree.tickOnce();
  std::cout << "--- status: " << BT::toStr(status) << "\n\n";

  while(status == BT::NodeStatus::RUNNING) 
  {
    tree.sleep(std::chrono::milliseconds(100));

    std::cout << "--- ticking\n";
    status = tree.tickOnce();
    std::cout << "--- status: " << BT::toStr(status) << "\n\n";
  }

  tree.tickWhileRunning();
  
  return 0;
}