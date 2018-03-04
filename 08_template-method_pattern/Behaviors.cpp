#include <iostream>

#include "Behaviors.hpp"


void HotWater::addWater(){
  std::cout << "Adding HOT Water" << std::endl;
}

void IceWater::addWater(){
  std::cout << "Adding ICE Water" << std::endl;
}


void CoffeeBrew::brew(){
  std::cout << "Brewing COFFEE" << std::endl;
}

void TeaBrew::brew(){
  std::cout << "Brewing TEA" << std::endl;
}


void MilkSugar::addCondiments(){
  std::cout << "Adding MILK and SUGAR" << std::endl;
}

void Lemon::addCondiments(){
  std::cout << "Adding LEMON" << std::endl;
}

