#include <iostream>
#include <memory>

#include "Duck.hpp"
#include "DuckAdapter.hpp"
#include "Turkey.hpp"


void makeDuckFlyAndQuack(std::shared_ptr< Duck > d){
  d->display();
  d->quack();
  d->fly();
  std::cout << std::endl;
}


int main(){

  auto mallard = std::make_shared< MallardDuck >();
  makeDuckFlyAndQuack(mallard);

  auto turkey = std::make_shared< WildTurkey >();
  auto adaptedTurkey = std::make_shared< DuckAdapter >(turkey);
  makeDuckFlyAndQuack(adaptedTurkey);

  return 0;

}
