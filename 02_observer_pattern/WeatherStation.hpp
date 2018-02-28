#ifndef WEATHERSTATION_HPP
#define WEATHERSTATION_HPP

#include <vector>
#include <memory>
#include "Subject.hpp"
#include "Screen.hpp"

class WeatherStation : public Subject{
  public:
    void newMeasurements(float t, float p, float h) const;

  private:
    std::vector<std::shared_ptr<WeatherScreen>> observers;
};

#endif