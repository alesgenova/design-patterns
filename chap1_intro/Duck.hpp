#ifndef DUCK_HPP
#define DUCK_HPP

#include <memory>
#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"

class Duck{
  public:
    Duck();
    void performFly() const;
    //void performQuack() const;

  protected:
    std::unique_ptr<FlyBehavior> flyBehavior;
};


class MallardDuck: public Duck{
  public:
    MallardDuck();
  private:

};


class RubberDuck: public Duck{
  public:
    RubberDuck();
  private:

};

#endif