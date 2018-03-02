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
};

class Calzone : public Pizza{
  public:
    Calzone(): Pizza(8.99, "Calzone"){};
};

class FlatBread : public Pizza{
  public:
    FlatBread(): Pizza(4.99, "FlatBread"){};
};

class Veggie : public Pizza{
  public:
    Veggie(): Pizza(8.99, "Veggie"){};
};

class Basic : public Pizza{
  public:
    Basic(): Pizza(4.99, "Basic"){};
};


#endif
