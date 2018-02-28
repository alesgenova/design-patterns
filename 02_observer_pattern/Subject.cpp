#include <memory>
#include "Subject.hpp"
#include "Observer.hpp"
#include "Payload.hpp"


void Subject::registerObserver(std::shared_ptr<Observer> o){
  observers.push_back(o);
  return;
}



void Subject::removeObserver(std::shared_ptr<Observer> o){
  for (auto it = observers.begin(); it != observers.end(); it++){
    if (*it==o){
      observers.erase(it);
    }
  }
  return;
}
