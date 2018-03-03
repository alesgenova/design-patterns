#include <iostream>
#include <memory>

#include "Receiver.hpp"
#include "Command.hpp"
#include "Invoker.hpp"


int main(){
  // main here acts as the Client

  // instantiate a bunch of Receivers and Commands,
  // and create the RemoteController (i.e. the Invoker)

  auto light = std::make_shared<Light>("Kitchen");
  auto lightOn = std::make_shared<LightOnCmd>(light);
  auto lightOff = std::make_shared<LightOffCmd>(light);

  auto fan = std::make_shared<CeilingFan>("Living Room");
  auto fanHigh = std::make_shared<FanHighCmd>(fan);
  auto fanLow = std::make_shared<FanLowCmd>(fan);
  auto fanOff = std::make_shared<FanOffCmd>(fan);

  auto door = std::make_shared<Door>("Garage");
  auto doorOpen = std::make_shared<DoorOpenCmd>(door);
  auto doorClose = std::make_shared<DoorCloseCmd>(door);

  RemoteControl remote;
  remote.setSlot(0, lightOn, lightOff);
  remote.setSlot(1, doorOpen, doorClose);
  remote.setSlot(2, fanHigh, fanOff);
  remote.setSlot(3, fanLow, fanOff);

  remote.pressOnBtn(0);
  remote.pressOnBtn(1);
  remote.pressOnBtn(2);
  remote.pressOnBtn(3);
  remote.undoLast();
  remote.undoLast();

  remote.pressOffBtn(2);
  remote.pressOffBtn(1);

  remote.clearSlot(0);
  remote.pressOffBtn(0);
  
  return 0;

}
