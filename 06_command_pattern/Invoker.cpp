#include <iostream>
#include <memory>

#include "Command.hpp"
#include "Invoker.hpp"


std::shared_ptr<Command> RemoteControl::emptyCmd = std::make_shared<NullCmd>();

RemoteControl::RemoteControl(){
  for (int i = 0; i < nButtons; ++i){
    onSlots.push_back(emptyCmd);
    offSlots.push_back(emptyCmd);
  }
}

void RemoteControl::setSlot(int i, std::shared_ptr<Command> onCmd,std::shared_ptr<Command> offCmd){
  onSlots[i] = onCmd;
  offSlots[i] = offCmd;
}

void RemoteControl::clearSlot(int i){
  onSlots[i] = emptyCmd;
  offSlots[i] = emptyCmd;
}

void RemoteControl::pressOnBtn(int i){
  onSlots[i]->execute();
  lastCommands.push_back(onSlots[i]);
}

void RemoteControl::pressOffBtn(int i){
  offSlots[i]->execute();
  lastCommands.push_back(offSlots[i]);
}

void RemoteControl::undoLast(){
  if (lastCommands.size() > 0){
    std::cout << "UNDOING" << std::endl;
    lastCommands[lastCommands.size()-1]->undo();
    lastCommands.erase(lastCommands.end());
  }
}


