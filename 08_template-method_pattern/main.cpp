#include <iostream>
#include <memory>

#include "Beverage.hpp"

int main(){
  
  auto hotCoffee = std::make_shared<HotCoffee>();
  std::cout << "Making a HotCoffee" << std::endl;
  hotCoffee->prepareRecipe();
  std::cout << std::endl;

  auto iceCoffee = std::make_shared<IceCoffee>();
  std::cout << "Making a IceCoffee" << std::endl;
  iceCoffee->prepareRecipe();
  std::cout << std::endl;

  auto hotTea = std::make_shared<HotTea>();
  std::cout << "Making a HotTea" << std::endl;
  hotTea->prepareRecipe();
  std::cout << std::endl;

  auto iceTea = std::make_shared<IceTea>();
  std::cout << "Making a IceTea" << std::endl;
  iceTea->prepareRecipe();
  std::cout << std::endl;

  auto templateHotCoffee = std::make_shared<TemplateHotCoffee>();
  std::cout << "Making a TemplateHotCoffee" << std::endl;
  templateHotCoffee->prepareRecipe();
  std::cout << std::endl;

  auto templateHotTea = std::make_shared<TemplateHotTea>();
  std::cout << "Making a TemplateHotTea" << std::endl;
  templateHotTea->prepareRecipe();
  std::cout << std::endl;


  return 0;

}
