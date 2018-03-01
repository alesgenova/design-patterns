#ifndef PIZZA_HPP
#define PIZZA_HPP

#include <string>

class Pizza{
  public:
    Pizza();
    Pizza(double c, std::string d): cost(c), description(d) {};
    virtual ~Pizza() = 0;
    virtual double getCost() const;
    virtual std::string getDescription() const;

  protected:
    double cost;
    std::string description;
};

class Margherita : public Pizza{
  public:
    Margherita(): Pizza(7.99, "Margherita"){};
  private:
    double cost;
};

#endif