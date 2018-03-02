#ifndef TOPPINGS_HPP
#define TOPPINGS_HPP

#include <string>
#include <memory>
#include "Pizza.hpp"
#include "PizzaDecorator.hpp"

class ToppingDecorator : public PizzaDecorator{
  public:
    ToppingDecorator(double cost, std::string description, std::shared_ptr<Pizza> pizza);
    virtual ~ToppingDecorator() = 0;

};

class Salame : public ToppingDecorator{
  public:
    Salame(std::shared_ptr<Pizza> pizza);

};

class Mozzarella : public ToppingDecorator{
  public:
    Mozzarella(std::shared_ptr<Pizza> pizza);

};

class Arugula : public ToppingDecorator{
  public:
    Arugula(std::shared_ptr<Pizza> pizza);

};



#endif