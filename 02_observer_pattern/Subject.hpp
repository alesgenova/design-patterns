#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include <vector>
#include <memory>
#include "Observer.hpp"
#include "WeatherPayload.hpp"

class Subject{
  public:
    virtual ~Subject() = 0;
    void registerObserver(std::shared_ptr<Observer> o);
    void removeObserver(std::shared_ptr<Observer> o);
    void notifyObservers(std::shared_ptr<WeatherPayload> p) const;
    void announceObservers() const;
    std::vector<std::shared_ptr<Observer>> getObservers() const;

  private:
    std::vector<std::shared_ptr<Observer>> observers;
};

#endif
