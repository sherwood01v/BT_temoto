#include "test_nodes.h"

namespace TestNodes
{

BT::NodeStatus TestNode::tick()
{
    std::cout << "TestNode: " << this->name() << std::endl;
    return BT::NodeStatus::SUCCESS;
}

}
