#include "WeatherPayload.hpp"


WeatherPayload::WeatherPayload(float t, float p, float h)
  : temperature{t}
  , pressure{p}
  , humidity{h}
{}

WeatherPayload::~WeatherPayload(){}

float WeatherPayload::getTemperature() const{
  return temperature;
}

float WeatherPayload::getPressure() const{
  return pressure;
}

float WeatherPayload::getHumidity() const{
  return humidity;
}