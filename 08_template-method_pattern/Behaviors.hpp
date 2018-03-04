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

#endif
