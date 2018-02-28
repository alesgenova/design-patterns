#ifndef SCREEN_HPP
#define SCREEN_HPP

#include <memory>
#include "Observer.hpp"
#include "Payload.hpp"
#include "WeatherPayload.hpp"

class WeatherScreen : public Observer{
  public:
    virtual ~WeatherScreen() = 0;
    virtual void update(std::shared_ptr<WeatherPayload> p) override;
  protected:
    float temperature;
    float pressure;
    float humidity;
};

class CurrentScreen : public WeatherScreen{
  public:
    void update(std::shared_ptr<WeatherPayload> p);

  private:

};

class ForecastScreen : public WeatherScreen{
  public:
    void update(std::shared_ptr<WeatherPayload> p);

  private:

};

class StatsScreen : public WeatherScreen{
  public:
    void update(std::shared_ptr<WeatherPayload> p);

  private:

};

#endif