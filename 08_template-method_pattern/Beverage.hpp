#ifndef _08_BEVERAGE_HPP
#define _08_BEVERAGE_HPP

#include <memory>
#include "Behaviors.hpp"

class Beverage{
  public:
    virtual ~Beverage() = 0;
    // prepareRecipe is the Template Method, it can't be overridden
    virtual void prepareRecipe() final;


  protected:
    // when subclassing we can either override the actual methods,
    // or compose the behaviors a-la Strategy Pattern
    virtual void addWater();
    virtual void pour();
    std::shared_ptr<WaterBehavior> waterBehavior;
};

class HotCoffee : public Beverage {
  public:
    HotCoffee();
};

class IceCoffee : public Beverage {
  public:
    IceCoffee();
};

#endif
