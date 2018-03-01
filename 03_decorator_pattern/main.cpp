#include "Pizza.hpp"
#include <iostream>
#include <memory>

int main(){
  auto margherita = std::make_shared<Margherita>();

  std::cout << margherita->getCost() << std::endl;
  std::cout << margherita->getDescription() << std::endl;

  return 0;
}
