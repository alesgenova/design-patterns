#include <memory>

#include "Command.hpp"

// Light Commands

LightCmd::LightCmd(std::shared_ptr<Light> t_receiver)
  : receiver(t_receiver)
  , prevStatus(receiver->getStatus())
{}

void LightCmd::undo(){
  if (prevStatus == Light::OFF){
    receiver->off();
  }else if (prevStatus == Light::ON){
    receiver->on();
  }
}

LightOnCmd::LightOnCmd(std::shared_ptr<Light> t_receiver)
  : LightCmd::LightCmd(t_receiver)
{}

void LightOnCmd::execute(){
  prevStatus = receiver->getStatus();
  receiver->on();
}

LightOffCmd::LightOffCmd(std::shared_ptr<Light> t_receiver)
  : LightCmd::LightCmd(t_receiver)
{}

void LightOffCmd::execute(){
  prevStatus = receiver->getStatus();
  receiver->off();
}


// CeilingFan Commands

FanCmd::FanCmd(std::shared_ptr<CeilingFan> t_receiver)
  : receiver(t_receiver)
  , prevStatus(receiver->getStatus())
{}

void FanCmd::undo(){
  if (prevStatus == CeilingFan::OFF){
    receiver->off();
  }else if (prevStatus == CeilingFan::HIGH){
    receiver->high();
  }else if (prevStatus == CeilingFan::LOW){
    receiver->low();
  }
}

FanHighCmd::FanHighCmd(std::shared_ptr<CeilingFan> t_receiver)
  : FanCmd::FanCmd(t_receiver)
{}

void FanHighCmd::execute(){
  prevStatus = receiver->getStatus();
  receiver->high();
}

FanLowCmd::FanLowCmd(std::shared_ptr<CeilingFan> t_receiver)
  : FanCmd::FanCmd(t_receiver)
{}

void FanLowCmd::execute(){
  prevStatus = receiver->getStatus();
  receiver->low();
}

FanOffCmd::FanOffCmd(std::shared_ptr<CeilingFan> t_receiver)
  : FanCmd::FanCmd(t_receiver)
{}

void FanOffCmd::execute(){
  prevStatus = receiver->getStatus();
  receiver->off();
}


// Door Commands

DoorCmd::DoorCmd(std::shared_ptr<Door> t_receiver)
  : receiver(t_receiver)
  , prevStatus(receiver->getStatus())
{}

void DoorCmd::undo(){
  if (prevStatus == Door::CLOSED){
    receiver->close();
  }else if (prevStatus == Door::OPEN){
    receiver->open();
  }
}

DoorOpenCmd::DoorOpenCmd(std::shared_ptr<Door> t_receiver)
  : DoorCmd::DoorCmd(t_receiver)
{}

void DoorOpenCmd::execute(){
  prevStatus = receiver->getStatus();
  receiver->open();
}

DoorCloseCmd::DoorCloseCmd(std::shared_ptr<Door> t_receiver)
  : DoorCmd::DoorCmd(t_receiver)
{}

void DoorCloseCmd::execute(){
  prevStatus = receiver->getStatus();
  receiver->close();
}


// Dummy NullCmd class does nothing, but still implements the Command interface
NullCmd::NullCmd(){}

void NullCmd::execute(){}

void NullCmd::undo(){}