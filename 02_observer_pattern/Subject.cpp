#include <iostream>
#include <memory>
#include "Subject.hpp"
#include "Observer.hpp"
#include "Payload.hpp"


Subject::~Subject(){}

void Subject::registerObserver(Observer* o){
  observers.push_back(o);
  return;
}


//void Subject::removeObserver(std::shared_ptr<Observer> o){
void Subject::removeObserver(Observer* o){

  for (auto it = observers.begin(); it != observers.end(); it++){
    if ((*it)->getId()==o->getId()){
      observers.erase(it);
      return;
    }
  }
  return;
}


void Subject::notifyObservers(std::shared_ptr<Payload> p) const{
  for (auto it = observers.begin(); it != observers.end(); it++){
    (*it)->update(p);
  }
  return;
}


std::vector<Observer*> Subject::getObservers() const{
  return observers;
}

void Subject::announceObservers() const{
  for (auto it = observers.begin(); it != observers.end(); it++){
    (*it)->display();
  }
}

