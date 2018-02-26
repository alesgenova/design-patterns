#include <iostream>

#include "Duck.hpp"


int main(){
  
  MallardDuck mallard;
  RubberDuck rubber;
  DecoyDuck decoy;

  mallard.introduce();
  mallard.performFly();
  mallard.performQuack();

  rubber.introduce();
  rubber.performFly();
  rubber.performQuack();

  decoy.introduce();
  decoy.performFly();
  decoy.performQuack();

  return 0;
}