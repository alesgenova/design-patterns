#include <memory>

#include "WeatherStation.hpp"
#include "WeatherPayload.hpp"

void WeatherStation::newMeasurements(float t, float p, float h) const{
  notifyObservers(std::make_shared<WeatherPayload>(t, p, h));
}