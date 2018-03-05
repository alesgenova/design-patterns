#include <iostream>
#include <memory>

#include "Menu.hpp"

void iterateMenu(std::shared_ptr<MenuIterator> iterator){
  while (iterator->hasNext()){
    auto item = iterator->next();
    std::cout << item->getName() << std::endl;
  }
  std::cout << std::endl;
}

int main(){

  auto bMenu = std::make_shared<BreakfastMenu>();
  std::shared_ptr<MenuIterator> bIterator = bMenu->createIterator();
  iterateMenu(bIterator);

  auto lMenu = std::make_shared<LunchMenu>();
  std::shared_ptr<MenuIterator> lIterator = lMenu->createIterator();
  iterateMenu(lIterator);


  return 0;

}
