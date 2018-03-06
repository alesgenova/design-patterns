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
    void ejectQuarter();
    void turnCrank();
    std::shared_ptr<MachineState> getState() const;
    void setState(std::shared_ptr<MachineState>);
    int getBalls() const;
    void setBalls(int);
    std::shared_ptr<MachineState> noQuarterState;
    std::shared_ptr<MachineState> hasQuarterState;
    std::shared_ptr<MachineState> soldState;
    std::shared_ptr<MachineState> soldOutState;

  private:
    std::shared_ptr<MachineState> state;
    int balls;
};



#endif
