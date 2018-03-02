#include "Pizza.hpp"
#include "PizzaDecorator.hpp"

PizzaDecorator::PizzaDecorator(double cost, std::string description, std::shared_ptr<Pizza> pizza)
  : Pizza(cost, description)
  , wrappedPizza(pizza)
{}

PizzaDecorator::~PizzaDecorator(){}

double PizzaDecorator::getCost() const{
  return cost + wrappedPizza->getCost();
}

std::string PizzaDecorator::getDescription() const{
  return description +" "+ wrappedPizza->getDescription();
}

