#include <iostream>
#include <memory>

#include "Menu.hpp"

int main(){

  auto menu = std::make_shared<BreakfastMenu>();
  auto iterator = menu->createIterator();

  while (iterator->hasNext()){
    auto item = iterator->next();
    std::cout << item->getName() << std::endl;
  }

  return 0;

}
