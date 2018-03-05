#include <string>

#include "MenuItem.hpp"

MenuItem::MenuItem(std::string n, std::string d, double p, bool v)
  : name(n)
  , description(d)
  , price(p)
  , vegetarian(v)
{}

std::string MenuItem::getName() const{
  return name;
}

std::string MenuItem::getDescription() const{
  return description;
}

double MenuItem::getPrice() const{
  return price;
}

bool MenuItem::getVegetarian() const{
  return vegetarian;
}


