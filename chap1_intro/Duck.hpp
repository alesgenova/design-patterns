#ifndef DUCK_HPP
#define DUCK_HPP

#include <memory>
#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"

class Duck{
  public:
    Duck();
    virtual void introduce() const = 0;
    void performFly() const;
    void performQuack() const;

  protected:
    std::unique_ptr<FlyBehavior> flyBehavior;
    std::unique_ptr<QuackBehavior> quackBehavior;
};


class MallardDuck: public Duck{
  public:
    MallardDuck();
    void introduce() const;
  private:

};


class RubberDuck: public Duck{
  public:
    RubberDuck();
    void introduce() const;
  private:

};

class DecoyDuck: public Duck{
  public:
    DecoyDuck();
    void introduce() const;
  private:

};

#endif