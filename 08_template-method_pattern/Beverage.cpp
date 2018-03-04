#include <iostream>
#include <memory>

#include "Behaviors.hpp"
#include "Beverage.hpp"

Beverage::~Beverage(){}

void Beverage::prepareRecipe(){
  addWater();
  brew();
  pour();
  addCondiments();
}

void Beverage::addWater(){
  waterBehavior->addWater();
}

void Beverage::brew(){
  brewBehavior->brew();
}

void Beverage::pour(){
  std::cout << "Pouring the beverage in the cup" << std::endl;
}

void Beverage::addCondiments(){
  condimentBehavior->addCondiments();
}


HotCoffee::HotCoffee(){
  waterBehavior = std::make_shared<HotWater>();
  brewBehavior = std::make_shared<CoffeeBrew>();
  condimentBehavior = std::make_shared<MilkSugar>();
}

IceCoffee::IceCoffee(){
  waterBehavior = std::make_shared<IceWater>();
  brewBehavior = std::make_shared<CoffeeBrew>();
  condimentBehavior = std::make_shared<MilkSugar>();
}


HotTea::HotTea(){
  waterBehavior = std::make_shared<HotWater>();
  brewBehavior = std::make_shared<TeaBrew>();
  condimentBehavior = std::make_shared<Lemon>();
}

IceTea::IceTea(){
  waterBehavior = std::make_shared<IceWater>();
  brewBehavior = std::make_shared<TeaBrew>();
  condimentBehavior = std::make_shared<Lemon>();
}


void TemplateHotCoffee::addWater(){
  std::cout << "Adding HOT Water" << std::endl;
}

void TemplateHotCoffee::brew(){
  std::cout << "Brewing COFFEE" << std::endl;
}

void TemplateHotCoffee::addCondiments(){
  std::cout << "Adding MILK and SUGAR" << std::endl;
}


void TemplateHotTea::addWater(){
  std::cout << "Adding HOT Water" << std::endl;
}

void TemplateHotTea::brew(){
  std::cout << "Brewing TEA" << std::endl;
}

void TemplateHotTea::addCondiments(){
  std::cout << "Adding LEMON" << std::endl;
}

