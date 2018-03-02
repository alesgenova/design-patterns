#include "Pizza.hpp"
#include "PizzaDecorator.hpp"
#include "Styles.hpp"

StyleDecorator::StyleDecorator(double cost, std::string description, std::shared_ptr<Pizza> pizza)
  : PizzaDecorator::PizzaDecorator(cost, description, pizza)
{}

StyleDecorator::~StyleDecorator(){}

NewYorkStyle::NewYorkStyle(std::shared_ptr<Pizza> pizza)
  : StyleDecorator::StyleDecorator(0.0, "New York Style", pizza)
{}

ChicagoStyle::ChicagoStyle(std::shared_ptr<Pizza> pizza)
  : StyleDecorator::StyleDecorator(0.99, "Chicago Style", pizza)
{}

