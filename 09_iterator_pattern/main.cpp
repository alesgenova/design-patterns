#include <iostream>
#include <memory>

#include "Menu.hpp"
#include "Waitress.hpp"

int main(){

  auto waitress = std::make_shared<Waitress>();
  waitress->wholeMenu();
  waitress->breakfastMenu();
  waitress->lunchMenu();
  waitress->veggieMenu();
  // auto bMenu = std::make_shared<BreakfastMenu>();
  // std::shared_ptr<MenuIterator> bIterator = bMenu->createIterator();

  // auto lMenu = std::make_shared<LunchMenu>();
  // std::shared_ptr<MenuIterator> lIterator = lMenu->createIterator();


  return 0;

}
