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
    virtual void brew();
    virtual void pour();
    virtual void addCondiments();
    std::shared_ptr<WaterBehavior> waterBehavior;
    std::shared_ptr<BrewBehavior> brewBehavior;
    std::shared_ptr<CondimentBehavior> condimentBehavior;
};

class HotCoffee : public Beverage {
  public:
    HotCoffee();
};

class IceCoffee : public Beverage {
  public:
    IceCoffee();
};

class HotTea : public Beverage {
  public:
    HotTea();
};

class IceTea : public Beverage {
  public:
    IceTea();
};


class TemplateHotCoffee : public Beverage {
  public:
    
  protected:
    virtual void addWater() override;
    virtual void brew() override;
    virtual void addCondiments() override;
};

class TemplateHotTea : public Beverage {
  public:
    
  protected:
    virtual void addWater() override;
    virtual void brew() override;
    virtual void addCondiments() override;
};

#endif
