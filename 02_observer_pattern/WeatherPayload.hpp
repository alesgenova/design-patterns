#ifndef WPAYLOAD_HPP
#define WPAYLOAD_HPP

#include "Payload.hpp"

class WeatherPayload : public Payload{
  public:
    WeatherPayload(float, float, float);
    ~WeatherPayload();
    float getTemperature() const;
    float getPressure() const;
    float getHumidity() const;

  private:
    // the payload is just a carrier, its values can't be modified once
    // instanciated.
    // this guarantees all the Observers receive the same information
    // and none of them can tamper with the payload data
    const float temperature;
    const float pressure;
    const float humidity;

};

#endif
