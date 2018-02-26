#include <iostream>
#include <memory>

#include "Duck.hpp"
#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"


int main(){

  MallardDuck mallard;
  RubberDuck rubber;
  DecoyDuck decoy;
  ModelDuck model;

  mallard.display();
  mallard.performFly();
  mallard.performQuack();
  std::cout << std::endl;

  rubber.display();
  rubber.performFly();
  rubber.performQuack();
  std::cout << std::endl;

  decoy.display();
  decoy.performFly();
  decoy.performQuack();
  std::cout << std::endl;

  model.display();
  model.performFly();
  model.performQuack();
  std::cout << std::endl;

  model.setFlyBehavior(std::make_unique<FlyWithRockets>());
  model.setQuackBehavior(std::make_unique<Squeak>());

  model.display();
  model.performFly();
  model.performQuack();



  return 0;
}