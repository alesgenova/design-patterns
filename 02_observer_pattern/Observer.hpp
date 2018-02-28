#ifndef OBSERVER_HPP
#define OBSERVER_HPP

#include <memory>
#include <string>
#include "WeatherPayload.hpp"

class Observer{
  public:
    Observer();
    virtual ~Observer() = 0;
    virtual void update(std::shared_ptr<WeatherPayload> payload);
    long int getId() const;
    void display() const;

  private:
    const long int id;

};

#endif