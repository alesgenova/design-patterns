#include "Pizza.hpp"
#include "Toppings.hpp"
#include "Styles.hpp"
#include <iostream>
#include <memory>

int main(){
  // we start from a margherita
  std::shared_ptr<Pizza> pizza0 = std::make_shared<Margherita>();
  // make it a New York style pizza
  pizza0 = std::make_shared<NewYorkStyle>(pizza0);
  // add Salame and Arugula
  pizza0 = std::make_shared<Salame>(pizza0);
  pizza0 = std::make_shared<Arugula>(pizza0);
  // Check final price and description
  std::cout << pizza0->getCost() << std::endl;
  std::cout << pizza0->getDescription() << std::endl;


  // we start from a FlatBread
  std::shared_ptr<Pizza> pizza1 = std::make_shared<FlatBread>();
  // make it a Chicago style pizza
  pizza1 = std::make_shared<ChicagoStyle>(pizza1);
  // add Mozzarella and Arugula
  pizza1 = std::make_shared<Mozzarella>(pizza1);
  pizza1 = std::make_shared<Arugula>(pizza1);
  // Check final price and description
  std::cout << pizza1->getCost() << std::endl;
  std::cout << pizza1->getDescription() << std::endl;

  return 0;
}
