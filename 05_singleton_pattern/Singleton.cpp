#include "Singleton.hpp"
#include <mutex>


Singleton::Singleton(){}

std::shared_ptr<Singleton> Singleton::uniqueInstance = nullptr;
std::mutex Singleton::m;

std::shared_ptr<Singleton> Singleton::getInstance(){
  // let's make it thread safe
  m.lock();
  auto instance =  Singleton::getInstanceHelper();
  m.unlock();
  return instance;
}

std::shared_ptr<Singleton> Singleton::getInstanceHelper(){
  if (uniqueInstance == nullptr){
    auto s = new Singleton;
    uniqueInstance = std::shared_ptr<Singleton>(s);
  }
  return uniqueInstance;
}

