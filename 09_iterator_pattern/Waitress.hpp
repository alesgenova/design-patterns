#ifndef WAITRESS_HPP
#define WAITRESS_HPP

#include <string>
#include <memory>

#include "Menu.hpp"

class Waitress{
  public:
    Waitress();
    void wholeMenu() const;
    void breakfastMenu() const;
    void lunchMenu() const;
    void veggieMenu() const;
    
  private:
    const std::shared_ptr<Menu> bFastmenu;
    const std::shared_ptr<Menu> lMenu;
    void iterateMenuHelper(std::shared_ptr<Menu> menu, bool veggieOnly=false) const;
};



#endif
