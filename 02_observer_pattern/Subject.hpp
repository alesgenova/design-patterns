#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include <vector>
#include "Observer.hpp"

class Subject{
  public:
    void registerObserver(std::shared_ptr<Observer> o);
    void removeObserver(std::shared_ptr<Observer> o);
    virtual void notifyObservers() const = 0;

  private:
    std::vector<std::shared_ptr<Observer>> observers;
};

#endif