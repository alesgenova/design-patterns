#include <memory>
#include <string>

#include "../03_decorator_pattern/Pizza.hpp"
#include "../03_decorator_pattern/Styles.hpp"
#include "PizzaFactory.hpp"


std::shared_ptr<Pizza> PizzaFactory::createPizza(std::string order){
  std::shared_ptr<Pizza> pizza = nullptr;
  if (order == "Margherita"){
    pizza = std::make_shared<Margherita>();
  }else if (order == "Veggie"){
    pizza = std::make_shared<Veggie>();
  }else if (order == "FlatBread"){
    pizza = std::make_shared<FlatBread>();
  }else{
    pizza = std::make_shared<Basic>();
  }
  return pizza;
}


std::shared_ptr<Pizza> NewYorkFactory::createPizza(std::string order){
  std::shared_ptr<Pizza> pizza = PizzaFactory::createPizza(order);
  pizza = std::make_shared<NewYorkStyle>(pizza);
  return pizza;
}


std::shared_ptr<Pizza> ChicagoFactory::createPizza(std::string order){
  std::shared_ptr<Pizza> pizza = PizzaFactory::createPizza(order);
  pizza = std::make_shared<ChicagoStyle>(pizza);
  return pizza;
}




