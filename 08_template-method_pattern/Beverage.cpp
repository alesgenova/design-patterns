#include <iostream>
#include <memory>

#include "Behaviors.hpp"
#include "Beverage.hpp"

Beverage::~Beverage(){}

void Beverage::prepareRecipe(){
  addWater();
  pour();
}

void Beverage::addWater(){
  waterBehavior->addWater();
}

void Beverage::pour(){
  std::cout << "Pouring the beverage in the cup" << std::endl;
}


HotCoffee::HotCoffee(){
  waterBehavior = std::make_shared<HotWater>();
}

IceCoffee::IceCoffee(){
  waterBehavior = std::make_shared<IceWater>();
}


