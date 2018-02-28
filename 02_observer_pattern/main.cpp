#include <iostream>
#include <memory>

#include "Screen.hpp"
#include "WeatherStation.hpp"

int main(){
  WeatherStation station;
  std::shared_ptr<CurrentScreen> screen0 = std::make_shared<CurrentScreen>();
  std::shared_ptr<CurrentScreen> screen1 = std::make_shared<CurrentScreen>();
  std::shared_ptr<CurrentScreen> screen2 = std::make_shared<CurrentScreen>();



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
