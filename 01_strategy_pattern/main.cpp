#include <iostream>
#include <memory>

#include "Duck.hpp"
#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"
#include "DuckCall.hpp"


int main(){

  MallardDuck mallard;

  mallard.display();
  mallard.fly();
  mallard.quack();
  std::cout << std::endl;

  RubberDuck rubber;
  
  rubber.display();
  rubber.fly();
  rubber.quack();
  std::cout << std::endl;

  DecoyDuck decoy;

  decoy.display();
  decoy.fly();
  decoy.quack();
  std::cout << std::endl;

  ModelDuck model;

  model.display();
  model.fly();
  model.quack();
  std::cout << std::endl;

  model.setFlyBehavior(std::make_unique<FlyWithRockets>());
  model.setQuackBehavior(std::make_unique<Squeak>());

  model.display();
  model.fly();
  model.quack();
  std::cout << std::endl;

  DuckCall device;
  
  device.quack();

  return 0;
}