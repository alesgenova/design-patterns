#include <iostream>
#include "QuackBehavior.hpp"


void Quack::quack() const{
  std::cout << "Quack!" << std::endl;
}

void Squeak::quack() const{
  std::cout << "Squeak" << std::endl;
}

void QuackNot::quack() const{
  std::cout << "..." << std::endl;
}
