#include "test_nodes.h"

namespace TestNodes
{

BT::NodeStatus InitialCalcNode::tick()
{
    int8_t number = 2;
    setOutput<int8_t>("output_number", number);
    std::cout << "Initial number: " << std::to_string(number) << std::endl;
    return BT::NodeStatus::SUCCESS;
}

BT::NodeStatus CalcNode::tick()
{
    auto msg = getInput<int8_t>("input_number");
    if (!msg)
    {
        throw BT::RuntimeError( "missing required input [input_number]: ", msg.error() );
    }
    std::cout << "Incremented number: " << std::to_string(msg.value()+1) << std::endl;
    setOutput<int8_t>("output_number", *msg+1);
    return BT::NodeStatus::SUCCESS;
}

}
