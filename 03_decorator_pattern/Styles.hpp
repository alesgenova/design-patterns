#ifndef STYLES_HPP
#define STYLES_HPP

#include <string>
#include <memory>
#include "Pizza.hpp"
#include "PizzaDecorator.hpp"

class StyleDecorator : public PizzaDecorator{
  public:
    StyleDecorator(double cost, std::string description, std::shared_ptr<Pizza> pizza);
    virtual ~StyleDecorator() = 0;

  protected:
    std::shared_ptr<Pizza> wrappedPizza;

};

class NewYorkStyle : public StyleDecorator{
  public:
    NewYorkStyle(std::shared_ptr<Pizza> pizza);

};

class ChicagoStyle : public StyleDecorator{
  public:
    ChicagoStyle(std::shared_ptr<Pizza> pizza);

};


#endif