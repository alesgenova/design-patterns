#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include <vector>
#include "Observer.hpp"
#include "Payload.hpp"

class Subject{
  public:
    virtual ~Subject() = 0;
    void registerObserver(std::shared_ptr<Observer> o);
    void removeObserver(std::shared_ptr<Observer> o);
    void notifyObservers(std::shared_ptr<Payload> p) const;

  private:
    std::vector<std::shared_ptr<Observer>> observers;
};

#endif
