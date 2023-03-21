#ifndef TEST_BT_NODES_H
#define TEST_BT_NODES_H

#include "behaviortree_cpp/behavior_tree.h"
#include "behaviortree_cpp/bt_factory.h"

namespace TestNodes
{

class CalcNode : public BT::SyncActionNode
{
  public:
    CalcNode(const std::string& name, const BT::NodeConfig& config) :
        BT::SyncActionNode(name, config)
    {
    }

    // You must override the virtual function tick()
    BT::NodeStatus tick() override;

    static BT::PortsList providedPorts()
    {
      return{ BT::InputPort<std::string>("input_number")};
      return { BT::OutputPort<std::string>("output_number") };
    }
};

} // end namespace

#endif
