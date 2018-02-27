#include <memory>
#include "DuckCall.hpp"


DuckCall::DuckCall()
  : quackBehavior(std::make_unique<Quack>())
{}

void DuckCall::performQuack() const {
  quackBehavior->quack();
}
