#include <iostream>
#include <random>
#include "Observer.hpp"
#include "WeatherPayload.hpp"


Observer::Observer()
  : id{random()}
{}

Observer::~Observer(){}

void Observer::update(std::shared_ptr<WeatherPayload> payload){
  std::cout << "Observer::update" << std::endl;
}

long int Observer::getId() const{
  return id;
}


void Observer::display() const{
  std::cout << "Hi, I'm observer " << id << std::endl;
}