#include "Pizza.hpp"
#include "Toppings.hpp"

ToppingDecorator::ToppingDecorator(double cost, std::string description, std::shared_ptr<Pizza> pizza)
  : Pizza(cost, description)
  , wrappedPizza(pizza)
{}

ToppingDecorator::~ToppingDecorator(){}

double ToppingDecorator::getCost() const{
  return cost + wrappedPizza->getCost();
}

std::string ToppingDecorator::getDescription() const{
  return description +" "+ wrappedPizza->getDescription();
}

Salame::Salame(std::shared_ptr<Pizza> pizza)
  :ToppingDecorator::ToppingDecorator(1.99, "Salame", pizza)
{}

Mozzarella::Mozzarella(std::shared_ptr<Pizza> pizza)
  :ToppingDecorator::ToppingDecorator(0.99, "Mozzarella", pizza)
{}

Arugula::Arugula(std::shared_ptr<Pizza> pizza)
  :ToppingDecorator::ToppingDecorator(0.49, "Arugula", pizza)
{}


