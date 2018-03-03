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


#endif
