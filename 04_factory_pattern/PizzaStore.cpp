#include <memory>
#include <string>

#include "../03_decorator_pattern/Pizza.hpp"
#include "PizzaFactory.hpp"
#include "PizzaStore.hpp"

PizzaStore::PizzaStore(std::shared_ptr<PizzaFactory> t_factory)
  : factory(t_factory)
{}

PizzaStore::~PizzaStore(){}


std::shared_ptr<Pizza> PizzaStore::orderPizza(std::string order) const{
  std::shared_ptr<Pizza> pizza = factory->createPizza(order);
  /* trivial methods I couldn't be bothered with implementing
  pizza->bake()
  pizza->slice()
  pizza->box()
  */
  return pizza;
}

