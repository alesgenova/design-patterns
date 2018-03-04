#ifndef DUCKADAPTER_HPP
#define DUCKADAPTER_HPP

#include <memory>
#include "Duck.hpp"
#include "Turkey.hpp"

class DuckAdapter : public Duck{
  private:
    const std::shared_ptr< Turkey > turkey;
  public:
    DuckAdapter(std::shared_ptr< Turkey > turkey);
    void display() const override;
    void fly() const override;
    void quack() const override;
};

#endif
