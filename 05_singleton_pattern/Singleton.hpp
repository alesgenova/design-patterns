#ifndef SINGLETON_HPP
#define SINGLETON_HPP

#include <memory>
#include <mutex>


class Singleton{
  public:
    // the static getInstance method is the only way to obtain an instance
    // since the constructor is private
    static std::shared_ptr<Singleton> getInstance();

  private:
    // private constructor is central to the singleton pattern
    Singleton();
    static std::shared_ptr<Singleton> uniqueInstance;
    static std::mutex m;
};

#endif
