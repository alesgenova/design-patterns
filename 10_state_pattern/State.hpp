#ifndef MACHINESTATE_HPP
#define MACHINESTATE_HPP

#include <memory>

#include "Machine.hpp"

class BallgumMachine;

class MachineState{
  public:
    MachineState(BallgumMachine *t_machine);
    virtual void insertQuarter() = 0;
    // virtual void ejectQuarter() = 0;
    // virtual void turnCrank() = 0;
    // virtual void dispense() = 0;
  protected:
    const BallgumMachine *machine;
};


class NoQuarterState : public MachineState{
  public:
    NoQuarterState(BallgumMachine *t_machine);
    virtual void insertQuarter() override;
  private:

};





#endif
