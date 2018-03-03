#include <string>
#include <iostream>

#include "Receiver.hpp"

Receiver::~Receiver(){}

Receiver::Receiver(std::string t_location)
  : location(t_location)
{}

// Concrete Light Receiver implementation

Light::Light(std::string t_location)
  : Receiver::Receiver(t_location)
  , status(OFF)
{}

void Light::on(){
  std::cout << "Turning ON the Light in the " << location << std::endl;
  status = ON;
}

void Light::off(){
  std::cout << "Turning OFF the Light in the " << location << std::endl;
  status = OFF;
}

int Light::getStatus() const{
  return status;
}

// Concrete CeilingFan Receiver implementation

CeilingFan::CeilingFan(std::string t_location)
  : Receiver::Receiver(t_location)
  , status(OFF)
{}

void CeilingFan::high(){
  std::cout << "Setting the CeilingFan in the " << location << " to HIGH" << std::endl;
  status = HIGH;
}

void CeilingFan::low(){
  std::cout << "Setting the CeilingFan in the " << location << " to LOW" << std::endl;
  status = LOW;
}

void CeilingFan::off(){
  std::cout << "Turning OFF the CeilingFan in the " << location << std::endl;
  status = OFF;
}

int CeilingFan::getStatus() const{
  return status;
}

// Concrete Door Receiver implementation

Door::Door(std::string t_location)
  : Receiver::Receiver(t_location)
  , status(CLOSED)
{}

void Door::open(){
  std::cout << "OPENING the Door in the " << location << std::endl;
  status = OPEN;
}

void Door::close(){
  std::cout << "CLOSING the Door in the " << location << std::endl;
  status = CLOSED;
}

int Door::getStatus() const{
  return status;
}






