#include <string>
#include <vector>
#include <unordered_map>

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

// const int LunchMenu::MAX_ITEMS = 10;

LunchMenu::LunchMenu()
  : MAX_ITEMS(10)
{

  items = new std::shared_ptr< MenuItem > [MAX_ITEMS];

  items[0] = std::make_shared<MenuItem>(
    "Vegetarian BLT",
    "Seitan Bacon with lettuce & tomato on whole wheat",
    7.99,
    true
  );

  items[1] = std::make_shared<MenuItem>(
    "BLT",
    "Bacon with lettuce & tomato on whole wheat",
    7.49,
    false
  );

  items[2] = std::make_shared<MenuItem>(
    "Soup of the day",
    "Soup of the day, with a side of potato salad",
    4.49,
    true
  );

  items[3] = std::make_shared<MenuItem>(
    "Hotdog",
    "A hot dog, with saurkraut, relish, onions, topped with cheese",
    3.99,
    false
  );

}

std::shared_ptr<MenuIterator> LunchMenu::createIterator(){
  return std::make_shared<LunchIterator>(items, MAX_ITEMS);
}


CafeMenu::CafeMenu(){
  items["Veggie Burger and Air Fries"] = std::make_shared<MenuItem>(
    "Veggie Burger and Air Fries",
    "Veggie burger on a whole wheat bun, lettuce, tomato, and fries",
    10.99,
    true
  );
  items["Soup of the day"] = std::make_shared<MenuItem>(
    "Soup of the day",
    "A cup of the soup of the day, with a side salad",
    5.99,
    true
  );
  items["Burrito"] = std::make_shared<MenuItem>(
    "Burrito",
    "A large burrito, with whole pinto beans, salsa, guacamole",
    8.99,
    false
  );
}


std::shared_ptr<MenuIterator> CafeMenu::createIterator(){
  return std::make_shared<CafeIterator>(items);
}

