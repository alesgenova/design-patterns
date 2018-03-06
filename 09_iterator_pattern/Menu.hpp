#ifndef MENU_HPP
#define MENU_HPP

#include <string>
#include <vector>
#include <unordered_map>

#include "MenuItem.hpp"
#include "Iterator.hpp"


class Menu{
  public:
    virtual std::shared_ptr<MenuIterator> createIterator() = 0;
};


class BreakfastMenu : public Menu{
  public:
    BreakfastMenu();
    virtual std::shared_ptr<MenuIterator> createIterator() override;
  private:
    std::vector< std::shared_ptr< MenuItem > > items;
};


class LunchMenu : public Menu{
  public:
    LunchMenu();
    virtual std::shared_ptr<MenuIterator> createIterator() override;
  private:
    const int MAX_ITEMS;
    std::shared_ptr< MenuItem > *items;
};


class CafeMenu : public Menu{
  public:
    CafeMenu();
    virtual std::shared_ptr<MenuIterator> createIterator() override;
  private:
    std::unordered_map< std::string, std::shared_ptr< MenuItem > > items;
};


#endif
