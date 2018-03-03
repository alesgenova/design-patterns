#include "Singleton.hpp"
#include <mutex>


Singleton::Singleton(){}

std::shared_ptr<Singleton> Singleton::uniqueInstance = nullptr;
std::mutex Singleton::m;

std::shared_ptr<Singleton> Singleton::getInstance(){
  if (uniqueInstance == nullptr){
    // let's make it thread safe, and only make it blocking if uniqueInstance is null
    m.lock();
    if (uniqueInstance == nullptr){
      auto s = new Singleton;
      uniqueInstance = std::shared_ptr<Singleton>(s);
    }
    m.unlock();
  }
  return uniqueInstance;
}

