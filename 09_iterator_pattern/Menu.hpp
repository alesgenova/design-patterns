#ifndef MENU_HPP
#define MENU_HPP

#include <string>
#include <vector>

#include "MenuItem.hpp"
#include "Iterator.hpp"


class Menu{
  virtual std::shared_ptr<MenuIterator> createIterator() = 0;
};


class BreakfastMenu : public Menu{
  public:
    BreakfastMenu();
    virtual std::shared_ptr<MenuIterator> createIterator() override;
  private:
    std::vector< std::shared_ptr< MenuItem > > items;
};


// class LunchMenu{
//   public:
//     virtual std::shared_ptr<MenuIterator> createIterator() override;
//   private:
//     static const MAX_ITEMS = 10;
//     std::shared_ptr< MenuItem > items[MAX_ITEMS];
// };





#endif
