#include <string>
#include <memory>

#include "MenuItem.hpp"
#include "Iterator.hpp"


BreakfastIterator::BreakfastIterator(std::vector< std::shared_ptr<MenuItem> > t_items)
  : items(t_items)
  , n(items.size())
  , curr(0)
{}

bool BreakfastIterator::hasNext() const{
  return curr < n;
}

std::shared_ptr<MenuItem> BreakfastIterator::next(){
  return items[curr++];
}





