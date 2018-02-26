#include <iostream>
#include "FlyBehavior.hpp"


void FlyWithWings::fly() const{
  std::cout << "I'm flying with my wings!" << std::endl;
}


void FlyNot::fly() const{
  std::cout << "All I can do is fall" << std::endl;
}


void FlyWithRockets::fly() const{
  std::cout << "I'm flying faster than sound!" << std::endl;
}
