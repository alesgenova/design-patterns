#ifndef _06_INVOKER_HPP
#define _06_INVOKER_HPP

#include <memory>
#include <vector>
#include "Command.hpp"

class Invoker{

};

class RemoteControl : public Invoker{
  public:
    RemoteControl();
    void pressOnBtn(int i);
    void pressOffBtn(int i);
    void setSlot(int i, std::shared_ptr<Command> onCmd,std::shared_ptr<Command> offCmd);
    void clearSlot(int i);
    void undoLast();
    
  private:
    static const int nButtons = 7;
    static std::shared_ptr<Command> emptyCmd;
    std::vector< std::shared_ptr< Command > > onSlots;
    std::vector< std::shared_ptr< Command > > offSlots;
    std::vector< std::shared_ptr<Command> > lastCommands;
};

#endif
