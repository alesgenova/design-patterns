#include <memory>
#include <iostream>
#include "Screen.hpp"
#include "WeatherPayload.hpp"

void WeatherScreen::update(std::shared_ptr<WeatherPayload> p){
  temperature = p->getTemperature();
  pressure = p->getPressure();
  humidity = p->getHumidity();
  std::cout << "Temperature: " << temperature << std::endl;
  std::cout << "Pressure: " << pressure << std::endl;
  std::cout << "Humidity: " << humidity << std::endl;
}

void CurrentScreen::update(std::shared_ptr<WeatherPayload> p){
  std::cout << "CurrentScreen just received an update!" << std::endl;
  WeatherScreen::update(p);
  return;
}
