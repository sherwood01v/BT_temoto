#ifndef TEST_BT_NODES_H
#define TEST_BT_NODES_H

#include "behaviortree_cpp/behavior_tree.h"
#include "behaviortree_cpp/bt_factory.h"

namespace TestNodes
{

class TestNode : public BT::SyncActionNode
{
  public:
    TestNode(const std::string& name) :
        BT::SyncActionNode(name, {})
    {
    }

    // You must override the virtual function tick()
    BT::NodeStatus tick() override;
};

} // end namespace

#endif
