#ifndef OBSERVER_HPP
#define OBSERVER_HPP

#include <memory>
#include <string>
#include "Payload.hpp"

class Observer{
  public:
    Observer();
    virtual ~Observer() = 0;
    long int getId() const;
    virtual void update(std::shared_ptr<Payload> payload);
    void display() const;

  private:
    const long int id;

};

#endif