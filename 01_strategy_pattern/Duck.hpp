#ifndef DUCK_HPP
#define DUCK_HPP

#include <memory>
#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"

class Duck{
  public:
    Duck();
    virtual void display() const = 0;
    void performFly() const;
    void performQuack() const;
    void setFlyBehavior(std::unique_ptr<FlyBehavior> fb);
    void setQuackBehavior(std::unique_ptr<QuackBehavior> qb);

  protected:
    std::unique_ptr<FlyBehavior> flyBehavior;
    std::unique_ptr<QuackBehavior> quackBehavior;
};


class MallardDuck: public Duck{
  public:
    MallardDuck();
    void display() const;
  private:

};


class RubberDuck: public Duck{
  public:
    RubberDuck();
    void display() const;
  private:

};

class DecoyDuck: public Duck{
  public:
    DecoyDuck();
    void display() const;
  private:

};

class ModelDuck: public Duck{
  public:
    ModelDuck();
    void display() const;
  private:

};

#endif
