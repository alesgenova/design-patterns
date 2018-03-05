#include <string>
#include <memory>

#include "MenuItem.hpp"
#include "Iterator.hpp"


BreakfastIterator::BreakfastIterator(std::vector< std::shared_ptr<MenuItem> > t_items)
  : items(t_items)
  , curr(0)
{}

bool BreakfastIterator::hasNext() const{
  return curr < items.size();
}

std::shared_ptr<MenuItem> BreakfastIterator::next(){
  return items[curr++];
}


LunchIterator::LunchIterator(std::shared_ptr< MenuItem > t_items[], int T_MAX_ITEMS)
  : MAX_ITEMS(T_MAX_ITEMS)
  , items(t_items)
  , curr(0)
{}

bool LunchIterator::hasNext() const{
  if (curr >= MAX_ITEMS){
    return false;
  }
  return items[curr] != nullptr;
}

std::shared_ptr<MenuItem> LunchIterator::next(){
  return items[curr++];
}




