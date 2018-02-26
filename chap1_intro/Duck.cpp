#include <iostream>
#include <memory>
#include "Duck.hpp"
#include "FlyBehavior.hpp"

Duck::Duck(){}

void Duck::performFly() const {
  std::cout << "Prepping for fly" << std::endl;
  flyBehavior->fly();
}

MallardDuck::MallardDuck(){
  flyBehavior = std::make_unique<FlyWithWings>();
}

RubberDuck::RubberDuck(){
  flyBehavior = std::make_unique<FlyNot>();
}