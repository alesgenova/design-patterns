#ifndef MACHINE_HPP
#define MACHINE_HPP

#include <memory>

#include "State.hpp"

class MachineState;
//class NoQuarterState;


class BallgumMachine{
  public:
    BallgumMachine();
    void insertQuarter();
  private:
    std::shared_ptr<MachineState> state;
    std::shared_ptr<MachineState> noQuarterState;

};



#endif
