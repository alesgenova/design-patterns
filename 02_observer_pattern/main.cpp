#include <iostream>
#include <memory>

#include "WeatherPayload.hpp"

int main(){
  WeatherPayload load(25, 2, 99);

  std::cout << load.getTemperature() << std::endl;
  std::cout << load.getPressure() << std::endl;
  std::cout << load.getHumidity() << std::endl;

  

  return 0;
}