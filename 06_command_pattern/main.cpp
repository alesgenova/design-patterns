#include <iostream>
#include <memory>

#include "Receiver.hpp"


int main(){

  auto light = std::make_shared<Light>("Kitchen");
  auto fan = std::make_shared<CeilingFan>("Living Room");
  auto door = std::make_shared<Door>("Garage");

  std::cout << light->getStatus() << std::endl;
  light->on();
  std::cout << light->getStatus() << std::endl;
  light->off();
  std::cout << light->getStatus() << std::endl;
  std::cout << std::endl;

  std::cout << fan->getStatus() << std::endl;
  fan->low();
  std::cout << fan->getStatus() << std::endl;
  fan->high();
  std::cout << fan->getStatus() << std::endl;
  fan->off();
  std::cout << fan->getStatus() << std::endl;
  std::cout << std::endl;


  std::cout << door->getStatus() << std::endl;
  door->open();
  std::cout << door->getStatus() << std::endl;
  door->close();
  std::cout << door->getStatus() << std::endl;
  std::cout << std::endl;

  return 0;
}
