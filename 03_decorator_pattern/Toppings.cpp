#include <string>
#include <memory>

#include "Pizza.hpp"
#include "PizzaDecorator.hpp"
#include "Toppings.hpp"

ToppingDecorator::ToppingDecorator(double cost, std::string description, std::shared_ptr<Pizza> pizza)
  : PizzaDecorator::PizzaDecorator(cost, description, pizza)
{}

ToppingDecorator::~ToppingDecorator(){}

Salame::Salame(std::shared_ptr<Pizza> pizza)
  : ToppingDecorator::ToppingDecorator(1.99, "Salame", pizza)
{}

Mozzarella::Mozzarella(std::shared_ptr<Pizza> pizza)
  : ToppingDecorator::ToppingDecorator(0.99, "Mozzarella", pizza)
{}

Arugula::Arugula(std::shared_ptr<Pizza> pizza)
  : ToppingDecorator::ToppingDecorator(0.49, "Arugula", pizza)
{}


