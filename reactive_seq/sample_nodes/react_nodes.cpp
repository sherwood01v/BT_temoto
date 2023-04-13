#include "react_nodes.h"

namespace chr = std::chrono;

namespace ReactNodes
{

inline void SleepMS(int ms)
{
  std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}

// FIND OBJECT
BT::NodeStatus isObjectFound::tick()
{
    SleepMS(200);
    std::cout << "Is object found" << _object_found << std::endl;
    return _object_found ? BT::NodeStatus::SUCCESS : BT::NodeStatus::FAILURE;
}

BT::NodeStatus FindObject::onRunning()
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
        _object_found = true;
        return BT::NodeStatus::SUCCESS;
    }
    return BT::NodeStatus::RUNNING;
}

void FindObject::onHalted()
{
  printf("[ FindObject: ABORTED ]");
}

// PICK THE OBJECT
BT::NodeStatus isObjectPicked::tick()
{
    SleepMS(200);
    std::cout << "Is object picked" << _object_picked << std::endl;
    return _object_picked ? BT::NodeStatus::SUCCESS : BT::NodeStatus::FAILURE;
}

BT::NodeStatus PickObject::onRunning()
{
    std::cout << "Is _start_picking" << _start_picking << std::endl;
    if(!_start_picking)
    {
        _completion_time = chr::system_clock::now() + chr::milliseconds(200);
        _start_picking = true;
    }
    if(chr::system_clock::now() >= _completion_time)
    {
        std::cout << "[ PickObject: FINISHED ]" << std::endl;
        _start_picking = false;
        _object_picked = true;
        return BT::NodeStatus::SUCCESS;
    }
    return BT::NodeStatus::RUNNING;
}

void PickObject::onHalted()
{
  printf("[ PickObject: ABORTED ]");
}

// INTERRUPT THE SEQUENCE
BT::NodeStatus isSeqInterrupted::tick()
{
    SleepMS(200);
    std::cout << "Was seq interrupted" << _seq_interrupted << std::endl;
    return _seq_interrupted ? BT::NodeStatus::SUCCESS : BT::NodeStatus::FAILURE;
}

BT::NodeStatus InterruptSeq::tick()
{
    std::cout << "[ Interrupt seq: FINISHED ]" << std::endl;
    _object_found = false;
    _seq_interrupted = true;
    return BT::NodeStatus::SUCCESS;
}

// PLACE THE OBJECT
BT::NodeStatus isObjectPlaced::tick()
{
    SleepMS(200);
    std::cout << "Is object placed" << _object_placed << std::endl;
    return _object_placed ? BT::NodeStatus::SUCCESS : BT::NodeStatus::FAILURE;
}

BT::NodeStatus PlaceObject::onRunning()
{
    if(!_start_placing)
    {
        _completion_time = chr::system_clock::now() + chr::milliseconds(200);
        _start_placing = true;
    }
    if(chr::system_clock::now() >= _completion_time)
    {
        std::cout << "[ PlaceObject: FINISHED ]" << std::endl;
        _start_placing = false;
        _object_placed = true;
        return BT::NodeStatus::SUCCESS;
    }
    return BT::NodeStatus::RUNNING;
}

void PlaceObject::onHalted()
{
  printf("[ PlaceObject: ABORTED ]");
}

}

// _object_found = false +
// _completion_time
// _start_finding = false
// _object_picked = false
// _start_picking = false
// _seq_interrupted = false
// _object_placed = false
// _start_placing = false