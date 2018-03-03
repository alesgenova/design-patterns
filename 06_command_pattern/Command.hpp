#ifndef _06_COMMAND_HPP
#define _06_COMMAND_HPP

#include <memory>

#include "Receiver.hpp"

class Command{
  public:
    virtual void execute() = 0;
    virtual void undo() = 0;
};

class LightCmd : public Command{
  public:
    LightCmd(std::shared_ptr<Light> t_receiver);
    virtual void execute() = 0;
    virtual void undo() override;
  protected:
    std::shared_ptr<Light> receiver;
    int prevStatus;
};

class LightOnCmd : public LightCmd{
  public:
    LightOnCmd(std::shared_ptr<Light> t_receiver);
    virtual void execute() override;
};

class LightOffCmd : public LightCmd{
  public:
    LightOffCmd(std::shared_ptr<Light> t_receiver);
    virtual void execute() override;
};


class FanCmd : public Command{
  public:
    FanCmd(std::shared_ptr<CeilingFan> t_receiver);
    virtual void execute() = 0;
    virtual void undo() override;
  protected:
    std::shared_ptr<CeilingFan> receiver;
    int prevStatus;
};

class FanHighCmd : public FanCmd{
  public:
    FanHighCmd(std::shared_ptr<CeilingFan> t_receiver);
    virtual void execute() override;
};

class FanLowCmd : public FanCmd{
  public:
    FanLowCmd(std::shared_ptr<CeilingFan> t_receiver);
    virtual void execute() override;
};

class FanOffCmd : public FanCmd{
  public:
    FanOffCmd(std::shared_ptr<CeilingFan> t_receiver);
    virtual void execute() override;
};


class DoorCmd : public Command{
  public:
    DoorCmd(std::shared_ptr<Door> t_receiver);
    virtual void execute() = 0;
    virtual void undo() override;
  protected:
    std::shared_ptr<Door> receiver;
    int prevStatus;
};

class DoorOpenCmd : public DoorCmd{
  public:
    DoorOpenCmd(std::shared_ptr<Door> t_receiver);
    virtual void execute() override;
};

class DoorCloseCmd : public DoorCmd{
  public:
    DoorCloseCmd(std::shared_ptr<Door> t_receiver);
    virtual void execute() override;
};


class NullCmd : public Command{
  public:
    NullCmd();
    virtual void execute() override;
    virtual void undo() override;
};

#endif
