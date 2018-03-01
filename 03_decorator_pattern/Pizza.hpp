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

class Calzone : public Pizza{
  public:
    Calzone(): Pizza(8.99, "Calzone"){};
  private:
    double cost;
};

class FlatBread : public Pizza{
  public:
    FlatBread(): Pizza(4.99, "FlatBread"){};
  private:
    double cost;
};



#endif