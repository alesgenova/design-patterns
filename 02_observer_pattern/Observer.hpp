#ifndef OBSERVER_HPP
#define OBSERVER_HPP

#include <memory>
#include "Subject.hpp"
#include "Payload.hpp"

class Observer{
  public:
    virtual void update(std::shared_ptr<Payload> payload) = 0;

  private:

};

#endif