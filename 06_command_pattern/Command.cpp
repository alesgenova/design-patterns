#include <memory>

#include "Command.hpp"


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



