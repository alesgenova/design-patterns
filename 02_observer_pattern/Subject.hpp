#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include <vector>
#include <memory>
#include "Observer.hpp"
#include "Payload.hpp"

class Subject{
  public:
    virtual ~Subject() = 0;
    void registerObserver(Observer* o);
    void removeObserver(Observer* o);
    void notifyObservers(std::shared_ptr<Payload> p) const;
    void announceObservers() const;
    std::vector<Observer*> getObservers() const;

  private:
    std::vector<Observer*> observers;
};

#endif
