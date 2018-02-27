#include <iostream>
#include <memory>

#include "Duck.hpp"
#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"
#include "DuckCall.hpp"


int main(){

  MallardDuck mallard;

  mallard.display();
  mallard.performFly();
  mallard.performQuack();
  std::cout << std::endl;

  RubberDuck rubber;
  
  rubber.display();
  rubber.performFly();
  rubber.performQuack();
  std::cout << std::endl;

  DecoyDuck decoy;

  decoy.display();
  decoy.performFly();
  decoy.performQuack();
  std::cout << std::endl;

  ModelDuck model;

  model.display();
  model.performFly();
  model.performQuack();
  std::cout << std::endl;

  model.setFlyBehavior(std::make_unique<FlyWithRockets>());
  model.setQuackBehavior(std::make_unique<Squeak>());

  model.display();
  model.performFly();
  model.performQuack();
  std::cout << std::endl;

  DuckCall device;
  
  device.performQuack();



  return 0;
}