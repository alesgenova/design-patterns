#include <string>
#include <vector>

#include "MenuItem.hpp"
#include "Iterator.hpp"
#include "Menu.hpp"


BreakfastMenu::BreakfastMenu(){

  items.push_back(std::make_shared<MenuItem>(
    "K&B's Pancake Breakfast",
    "Pancakes with scrambled eggs, and toast",
    4.99,
    true
  ));

  items.push_back(std::make_shared<MenuItem>(
    "Regular Pancake Breakfast",
    "Pancakes with fried eggs, sausage",
    5.99,
    false
  ));

  items.push_back(std::make_shared<MenuItem>(
    "Blueberry Pancakes",
    "Pancakes made with fresh blueberries",
    5.49,
    true
  ));

  items.push_back(std::make_shared<MenuItem>(
    "Waffles",
    "Waffles, with your choice of blueberries or strawberries",
    4.49,
    true
  ));


}

std::shared_ptr<MenuIterator> BreakfastMenu::createIterator(){
  return std::make_shared<BreakfastIterator>(items);
}
