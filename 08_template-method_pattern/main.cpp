#include <iostream>
#include <memory>

#include "Beverage.hpp"

int main(){

  auto hotCoffee = std::make_shared<HotCoffee>();
  auto iceCoffee = std::make_shared<IceCoffee>();

  hotCoffee->prepareRecipe();
  iceCoffee->prepareRecipe();

  return 0;

}
