#include <iostream>
#include <memory>
#include "Duck.hpp"
#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"

Duck::Duck(){}

void Duck::performFly() const {
  flyBehavior->fly();
}

void Duck::performQuack() const {
  quackBehavior->quack();
}


MallardDuck::MallardDuck(){
  flyBehavior = std::make_unique<FlyWithWings>();
  quackBehavior = std::make_unique<Quack>();
}

void MallardDuck::introduce() const{
  std::cout << "Hi, I'm a mallard duck!" << std::endl;
}


RubberDuck::RubberDuck(){
  flyBehavior = std::make_unique<FlyNot>();
  quackBehavior = std::make_unique<Squeak>();
}

void RubberDuck::introduce() const{
  std::cout << "Hi, I'm a rubber duck!" << std::endl;
}

DecoyDuck::DecoyDuck(){
  flyBehavior = std::make_unique<FlyNot>();
  quackBehavior = std::make_unique<QuackNot>();
}

void DecoyDuck::introduce() const{
  std::cout << "Hi, I'm a decoy duck!" << std::endl;
}