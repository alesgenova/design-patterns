#include <iostream>
#include <memory>
#include "Duck.hpp"
#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"

Duck::Duck(){}

void Duck::fly() const {
  flyBehavior->fly();
}

void Duck::quack() const {
  quackBehavior->quack();
}

void Duck::setFlyBehavior(std::unique_ptr<FlyBehavior> fb){
  flyBehavior = std::move(fb);
}

void Duck::setQuackBehavior(std::unique_ptr<QuackBehavior> qb){
  quackBehavior = std::move(qb);
}


MallardDuck::MallardDuck(){
  flyBehavior = std::make_unique<FlyWithWings>();
  quackBehavior = std::make_unique<Quack>();
}

void MallardDuck::display() const{
  std::cout << "Hi, I'm a mallard duck!" << std::endl;
}


RubberDuck::RubberDuck(){
  flyBehavior = std::make_unique<FlyNot>();
  quackBehavior = std::make_unique<Squeak>();
}

void RubberDuck::display() const{
  std::cout << "Hi, I'm a rubber duck!" << std::endl;
}

DecoyDuck::DecoyDuck(){
  flyBehavior = std::make_unique<FlyNot>();
  quackBehavior = std::make_unique<QuackNot>();
}

void DecoyDuck::display() const{
  std::cout << "Hi, I'm a decoy duck!" << std::endl;
}


ModelDuck::ModelDuck(){
  flyBehavior = std::make_unique<FlyNot>();
  quackBehavior = std::make_unique<Quack>();
}

void ModelDuck::display() const{
  std::cout << "Hi, I'm a model duck!" << std::endl;
}
