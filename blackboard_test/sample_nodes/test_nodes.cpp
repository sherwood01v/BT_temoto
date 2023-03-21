#include "test_nodes.h"

namespace TestNodes
{

BT::NodeStatus CalcNode::tick()
{
    auto msg = getInput<std::string>("input_number");
    if (!msg)
    {
        throw BT::RuntimeError( "missing required input [input_number]: ", msg.error() );
    }
    std::cout << "CalcNode: " << msg.value() << std::endl;
    setOutput("output_number", "ff");
    return BT::NodeStatus::SUCCESS;
}

}
