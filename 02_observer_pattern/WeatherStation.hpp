#ifndef WEATHERSTATION_HPP
#define WEATHERSTATION_HPP

#include "Subject.hpp"

class WeatherStation : public Subject{
  public:
    void newMeasurements(float t, float p, float h) const;

  private:

};

#endif