#ifndef PIZZAFACTORY_HPP
#define PIZZAFACTORY_HPP

#include <memory>
#include <string>
#include "../03_decorator_pattern/Pizza.hpp"

class PizzaFactory{
  public:
    virtual std::shared_ptr<Pizza> createPizza(std::string order);
};

class NewYorkFactory : public PizzaFactory{
  public:
    virtual std::shared_ptr<Pizza> createPizza(std::string order) override;
};

class ChicagoFactory : public PizzaFactory{
  public:
    virtual std::shared_ptr<Pizza> createPizza(std::string order) override;
};

#endif
