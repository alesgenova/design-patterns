#ifndef PIZZADECORATOR_HPP
#define PIZZADECORATOR_HPP

#include <string>
#include <memory>
#include "Pizza.hpp"

class PizzaDecorator : public Pizza{
  public:
    PizzaDecorator(double cost, std::string description, std::shared_ptr<Pizza> pizza);
    virtual ~PizzaDecorator() = 0;
    virtual std::string getDescription() const override;
    virtual double getCost() const override;

  protected:
    std::shared_ptr<Pizza> wrappedPizza;

};


#endif