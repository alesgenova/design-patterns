#ifndef FLYBEHAVIOR_HPP
#define FLYBEHAVIOR_HPP

class FlyBehavior{
  public:
    virtual void fly() const=0;
};


class FlyWithWings: public FlyBehavior{
  void fly() const;
};

class FlyNot: public FlyBehavior{
  void fly() const;
};

class FlyWithRockets: public FlyBehavior{
  void fly() const;
};


#endif