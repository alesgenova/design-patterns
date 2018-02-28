#include <iostream>
#include <memory>

#include "Screen.hpp"
#include "WeatherStation.hpp"

int main(){
  // WeatherStation station;
  // CurrentScreen screen0;
  // CurrentScreen screen1;
  // CurrentScreen screen2;


  // //screen0.display();
  // //screen1.display();
  // station.registerObserver(&screen0);
  // station.registerObserver(std::make_shared<CurrentScreen>(screen1));
  // station.registerObserver(std::make_shared<CurrentScreen>(screen2));
  // station.announceObservers();
  // std::cout << std::endl;

  // station.removeObserver(std::make_shared<CurrentScreen>(screen1));
  // station.removeObserver(std::make_shared<CurrentScreen>(screen0));
  // station.announceObservers();
  // std::cout << std::endl;

  // station.registerObserver(std::make_shared<CurrentScreen>(screen0));
  // station.registerObserver(std::make_shared<CurrentScreen>(screen1));
  // station.announceObservers();
  // station.newMeasurements(25, 2, 99);

  auto payload = std::make_shared<WeatherPayload>(22, 1, 88);
  //screen0.update(payload);

  std::vector<Observer*> vec{};

  CurrentScreen screen0;
  CurrentScreen screen1;
  CurrentScreen screen2;



  vec.push_back(&screen0);
  vec.push_back(&screen1);
  vec.push_back(&screen2);
  for (size_t i=0; i<vec.size(); i++){
    vec[i]->update(payload);
    std::cout << std::endl;
  }


  const int n = 3;
  Observer* arr[n];
  arr[0] = &screen0;
  arr[1] = &screen1;
  arr[2] = &screen2;
  for (int i=0; i<n; ++i){
    (*arr[i]).update(payload);
    std::cout << std::endl;
  }




  //std::cout << arr.size() << std::endl;


  return 0;
}
