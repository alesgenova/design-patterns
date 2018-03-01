#include "Pizza.hpp"

Pizza::~Pizza(){}

double Pizza::getCost() const{
  return cost;
}

std::string Pizza::getDescription() const{
  return description;
}


