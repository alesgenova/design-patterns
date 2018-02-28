#include <iostream>
#include <memory>

#include "Screen.hpp"
#include "WeatherStation.hpp"

int main(){
  WeatherStation station;
  auto screen0 = std::make_shared<CurrentScreen>();
  auto screen1 = std::make_shared<ForecastScreen>();
  auto screen2 = std::make_shared<StatsScreen>();



  station.registerObserver(screen0);
  station.registerObserver(screen1);
  station.registerObserver(screen2);
  station.announceObservers();
  std::cout << std::endl;

  station.removeObserver(screen1);
  station.removeObserver(screen0);
  station.announceObservers();
  std::cout << std::endl;

  station.registerObserver(screen0);
  station.registerObserver(screen1);
  station.announceObservers();
  station.newMeasurements(25, 2, 99);

  //auto payload = std::make_shared<WeatherPayload>(22, 1, 88);
  //screen0.update(payload);



  return 0;
}
