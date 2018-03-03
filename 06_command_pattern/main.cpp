#include <iostream>
#include <memory>

#include "Receiver.hpp"
#include "Command.hpp"


int main(){

  auto light = std::make_shared<Light>("Kitchen");
  auto lightOn = std::make_shared<LightOnCmd>(light);
  auto lightOff = std::make_shared<LightOffCmd>(light);

  lightOn->execute();
  lightOff->execute();
  lightOff->undo();


  auto fan = std::make_shared<CeilingFan>("Living Room");
  auto fanHigh = std::make_shared<FanHighCmd>(fan);
  auto fanLow = std::make_shared<FanLowCmd>(fan);
  auto fanOff = std::make_shared<FanOffCmd>(fan);

  fanHigh->execute();
  fanLow->execute();
  fanOff->execute();
  fanOff->undo();


  // auto door = std::make_shared<Door>("Garage");

  // std::cout << light->getStatus() << std::endl;
  // light->on();
  // std::cout << light->getStatus() << std::endl;
  // light->off();
  // std::cout << light->getStatus() << std::endl;
  // std::cout << std::endl;

  // std::cout << fan->getStatus() << std::endl;
  // fan->low();
  // std::cout << fan->getStatus() << std::endl;
  // fan->high();
  // std::cout << fan->getStatus() << std::endl;
  // fan->off();
  // std::cout << fan->getStatus() << std::endl;
  // std::cout << std::endl;

  // std::cout << door->getStatus() << std::endl;
  // door->open();
  // std::cout << door->getStatus() << std::endl;
  // door->close();
  // std::cout << door->getStatus() << std::endl;
  // std::cout << std::endl;

  return 0;

}
