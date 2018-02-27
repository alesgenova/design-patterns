#ifndef QUACKBEHAVIOR_HPP
#define QUACKBEHAVIOR_HPP

class QuackBehavior{
  public:
    virtual void quack() const=0;
};


class Quack: public QuackBehavior{
  void quack() const;
};

class Squeak: public QuackBehavior{
  void quack() const;
};

class QuackNot: public QuackBehavior{
  void quack() const;
};

#endif