#include <iostream>
#include <memory>
#include <unordered_map>

#include "Menu.hpp"
#include "Waitress.hpp"

int main(){

  auto waitress = std::make_shared<Waitress>();
  waitress->wholeMenu();
  waitress->breakfastMenu();
  waitress->lunchMenu();
  waitress->dinnerMenu();
  waitress->veggieMenu();

  return 0;

}
