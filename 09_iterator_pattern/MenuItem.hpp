#ifndef MENUITEM_HPP
#define MENUITEM_HPP

#include <string>


class MenuItem{
  public:
    MenuItem(std::string n, std::string d, double p, bool v);
    std::string getName() const;
    std::string getDescription() const;
    double getPrice() const;
    bool getVegetarian() const;
  private:
    const std::string name;
    const std::string description;
    const double price;
    const bool vegetarian;

};

#endif
