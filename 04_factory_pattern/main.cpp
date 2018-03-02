#include <iostream>
#include <memory>

#include "PizzaFactory.hpp"

int main(){
  auto nyFactory = std::make_shared<NewYorkFactory>();
  auto chiFactory = std::make_shared<ChicagoFactory>();
  
  auto pizza0 = nyFactory->createPizza("Margherita");
  std::cout << pizza0->getDescription() << std::endl;
  std::cout << pizza0->getCost() << std::endl;

  auto pizza1 = chiFactory->createPizza("Veggie");
  std::cout << pizza1->getDescription() << std::endl;
  std::cout << pizza1->getCost() << std::endl;

  return 0;
}
