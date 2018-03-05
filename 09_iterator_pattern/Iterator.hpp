#ifndef ITERATOR_HPP
#define ITERATOR_HPP

#include <string>
#include <vector>
#include <memory>

#include "MenuItem.hpp"


class MenuIterator{
  public:
    virtual std::shared_ptr<MenuItem> next() = 0;
    virtual bool hasNext() const = 0;
};


class BreakfastIterator : public MenuIterator{
  public:
    BreakfastIterator(std::vector< std::shared_ptr<MenuItem> > t_items);
    virtual std::shared_ptr<MenuItem> next() override;
    virtual bool hasNext() const override;
  private:
    const std::vector< std::shared_ptr<MenuItem> > items;
    const int n;
    int curr;
};


#endif
