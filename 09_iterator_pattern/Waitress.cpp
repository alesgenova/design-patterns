#include <iostream>
#include <string>
#include <memory>

#include "Menu.hpp"
#include "Waitress.hpp"


Waitress::Waitress()
  : bFastmenu(std::make_shared<BreakfastMenu>())
  , lMenu(std::make_shared<LunchMenu>())
  , dMenu(std::make_shared<CafeMenu>())
{}



void Waitress::wholeMenu() const{
  std::cout << "Here is the FULL menu:" << std::endl;
  iterateMenuHelper(bFastmenu);
  iterateMenuHelper(lMenu);
  iterateMenuHelper(dMenu);
  std::cout << std::endl;
}

void Waitress::breakfastMenu() const{
  std::cout << "Here is the BREAKFAST menu:" << std::endl;
  iterateMenuHelper(bFastmenu);
  std::cout << std::endl;
}

void Waitress::lunchMenu() const{
  std::cout << "Here is the LUNCH menu:" << std::endl;
  iterateMenuHelper(lMenu);
  std::cout << std::endl;
}

void Waitress::dinnerMenu() const{
  std::cout << "Here is the DINNER menu:" << std::endl;
  iterateMenuHelper(dMenu);
  std::cout << std::endl;
}

void Waitress::veggieMenu() const{
  std::cout << "Here is the VEGETARIAN menu:" << std::endl;
  iterateMenuHelper(bFastmenu, true);
  iterateMenuHelper(lMenu, true);
  iterateMenuHelper(dMenu, true);
  std::cout << std::endl;
}

void Waitress::iterateMenuHelper(std::shared_ptr<Menu> menu, bool veggieOnly) const{
  auto iterator = menu->createIterator();
  while (iterator->hasNext()){
    auto item = iterator->next();
    bool show = ( item->getVegetarian() && veggieOnly) || !veggieOnly;
    if ( show ){
      std::cout << item->getName() << " | ";
      std::cout << item->getDescription() << " | ";
      std::cout << item->getPrice() << std::endl;
    }
  }
}

