#ifndef ITERATOR_HPP
#define ITERATOR_HPP

#include <string>
#include <vector>
#include <memory>
#include <unordered_map>

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
    int curr;
};


class LunchIterator : public MenuIterator{
  public:
    LunchIterator(std::shared_ptr< MenuItem > t_items[], int T_MAX_ITEMS);
    virtual std::shared_ptr<MenuItem> next() override;
    virtual bool hasNext() const override;
  private:
    const std::shared_ptr< MenuItem > *items;
    const int MAX_ITEMS;
    int curr;
};


class CafeIterator : public MenuIterator{
  public:
    CafeIterator(std::unordered_map< std::string, std::shared_ptr< MenuItem > > t_items);
    virtual std::shared_ptr<MenuItem> next() override;
    virtual bool hasNext() const override;
  private:
    std::unordered_map< std::string, std::shared_ptr< MenuItem > > items;
    std::unordered_map< std::string, std::shared_ptr< MenuItem > >::iterator curr;
};


#endif
