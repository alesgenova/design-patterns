#include <iostream>
#include <memory>

#include "DuckAdapter.hpp"
#include "Turkey.hpp"


DuckAdapter::DuckAdapter(std::shared_ptr< Turkey > t_turkey)
  : turkey(t_turkey)
{}


void DuckAdapter::display() const{
  std::cout << "I am a Turkey with a Duck interface" << std::endl;
}

void DuckAdapter::fly() const{
  for (int i=0; i<2; ++i){
    turkey->shortFly();
  }
}


void DuckAdapter::quack() const{
  turkey->gobble();
}

