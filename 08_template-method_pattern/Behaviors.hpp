#ifndef _08_BEHAVIORS_HPP
#define _08_BEHAVIORS_HPP


class WaterBehavior{
  public:
    virtual void addWater() = 0;
};

class HotWater : public WaterBehavior{
  public:
    virtual void addWater();
};

class IceWater : public WaterBehavior{
  public:
    virtual void addWater();
};


class BrewBehavior{
  public:
    virtual void brew() = 0;
};

class CoffeeBrew : public BrewBehavior{
  public:
    virtual void brew();
};

class TeaBrew : public BrewBehavior{
  public:
    virtual void brew();
};


class CondimentBehavior{
  public:
    virtual void addCondiments() = 0;
};

class MilkSugar : public CondimentBehavior{
  public:
    virtual void addCondiments();
};

class Lemon : public CondimentBehavior{
  public:
    virtual void addCondiments();
};

#endif
