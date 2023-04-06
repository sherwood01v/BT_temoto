#ifndef REACT_BT_NODES_H
#define REACT_BT_NODES_H

#include "behaviortree_cpp/behavior_tree.h"
#include "behaviortree_cpp/bt_factory.h"

namespace chr = std::chrono;

namespace ReactNodes
{

class isObjectFound : public BT::SyncActionNode
{
public:
    isObjectFound(const std::string& name, const BT::NodeConfig& config)
      : BT::SyncActionNode(name, config)
    {}

    BT::NodeStatus tick() override;

    static BT::PortsList providedPorts()
    {
      return BT::PortsList{};
    }

private:
    bool _object_found   = false;
};

class FindObject : public BT::StatefulActionNode
{
  public:
    FindObject(const std::string& name, const BT::NodeConfig& config)
      : BT::StatefulActionNode(name, config)
    {}

    BT::NodeStatus onStart() override
    {
      return BT::NodeStatus::RUNNING;
    }

    BT::NodeStatus onRunning() override;

    void onHalted() override;

    static BT::PortsList providedPorts()
    {
      return BT::PortsList{};
    }

  private:
      bool _start_finding   = false;
      chr::system_clock::time_point _completion_time;
      bool _object_found;

};

class isObjectPicked : public BT::SyncActionNode
{
public:
    isObjectPicked(const std::string& name, const BT::NodeConfig& config)
      : BT::SyncActionNode(name, config)
    {}

    BT::NodeStatus tick() override;

    static BT::PortsList providedPorts()
    {
      return BT::PortsList{};
    }

private:
    bool _object_picked   = false;
};

class PickObject : public BT::StatefulActionNode
{
  public:
    PickObject(const std::string& name, const BT::NodeConfig& config)
      : BT::StatefulActionNode(name, config)
    {}

    BT::NodeStatus onStart() override
    {
      return BT::NodeStatus::RUNNING;
    }

    BT::NodeStatus onRunning() override;

    void onHalted() override;

    static BT::PortsList providedPorts()
    {
      return BT::PortsList{};
    }

  private:
      bool _start_picking   = false;
      chr::system_clock::time_point _completion_time;
      bool _object_picked;

};

class isSeqInterrupted : public BT::SyncActionNode
{
public:
    isSeqInterrupted(const std::string& name, const BT::NodeConfig& config)
      : BT::SyncActionNode(name, config)
    {}

    BT::NodeStatus tick() override;

    static BT::PortsList providedPorts()
    {
      return BT::PortsList{};
    }

private:
    bool _seq_interrupted   = false;
};

class InterruptSeq : public BT::SyncActionNode
{
  public:
    InterruptSeq(const std::string& name, const BT::NodeConfig& config)
      : BT::SyncActionNode(name, config)
    {}

    BT::NodeStatus tick() override;

    static BT::PortsList providedPorts()
    {
      return BT::PortsList{};
    }

  private:
      bool _seq_interrupted;
      bool _object_found;

};

class isObjectPlaced : public BT::SyncActionNode
{
public:
    isObjectPlaced(const std::string& name, const BT::NodeConfig& config)
      : BT::SyncActionNode(name, config)
    {}

    BT::NodeStatus tick() override;

    static BT::PortsList providedPorts()
    {
      return BT::PortsList{};
    }

private:
    bool _object_placed   = false;
};

class PlaceObject : public BT::StatefulActionNode
{
  public:
    PlaceObject(const std::string& name, const BT::NodeConfig& config)
      : BT::StatefulActionNode(name, config)
    {}

    BT::NodeStatus onStart() override
    {
      return BT::NodeStatus::RUNNING;
    }

    BT::NodeStatus onRunning() override;

    void onHalted() override;

    static BT::PortsList providedPorts()
    {
      return BT::PortsList{};
    }

  private:
      bool _start_placing   = false;
      chr::system_clock::time_point _completion_time;
      bool _object_placed;

};

} // end namespace

#endif
