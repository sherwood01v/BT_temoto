#include "react_nodes.h"

namespace ReactCustomNodes
{

BT::NodeStatus isObjectFound()
{
    SleepMS(200);
    std::cout << "Is object found" << _object_found << std::endl;
    return _object_found ? NodeStatus::SUCCESS : NodeStatus::FAILURE;
}

BT::NodeStatus FindObject::tick()
{
    if(!_start_finding)
    {
        _completion_time = chr::system_clock::now() + chr::milliseconds(200);
        _start_finding = true;
    }
    if(chr::system_clock::now() >= _completion_time)
    {
        std::cout << "[ FindObject: FINISHED ]" << std::endl;
        _start_finding = false;
        return BT::NodeStatus::SUCCESS;
    }
    return BT::NodeStatus::RUNNING;
}

BT::NodeStatus isObjectPicked()
{
    SleepMS(200);
    std::cout << "Is object picked" << _object_found << std::endl;
    return _object_found ? NodeStatus::SUCCESS : NodeStatus::FAILURE;
}

}

// _object_found = false
// _completion_time
// _start_finding = false
// _object_picked = falsee