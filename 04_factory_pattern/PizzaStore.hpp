#ifndef PIZZASTORE_HPP
#define PIZZASTORE_HPP

#include <memory>
#include <string>

#include "../03_decorator_pattern/Pizza.hpp"
#include "PizzaFactory.hpp"

class PizzaStore{
  public:
    PizzaStore(std::shared_ptr<PizzaFactory> t_factory);
    virtual ~PizzaStore() = 0;
    std::shared_ptr<Pizza> orderPizza(std::string order) const;
  private:
    std::shared_ptr<PizzaFactory> factory;
};


#endif
