#ifndef DUCKCALL_HPP
#define DUCKCALL_HPP

#include <memory>
#include "QuackBehavior.hpp"

class DuckCall{
  public:
    DuckCall();
    void quack() const;

  private:
    const std::unique_ptr<QuackBehavior> quackBehavior;
};

#endif