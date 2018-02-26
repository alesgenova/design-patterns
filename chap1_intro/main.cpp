#include <iostream>

#include "Duck.hpp"

int main(){
  MallardDuck mallard;
  RubberDuck rubber;

  mallard.performFly();
  rubber.performFly();

  return 0;
}