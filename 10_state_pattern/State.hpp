#ifndef MACHINESTATE_HPP
#define MACHINESTATE_HPP

#include <memory>

#include "Machine.hpp"

class BallgumMachine;

class MachineState{
  public:
    MachineState(BallgumMachine *t_machine);
    virtual void insertQuarter() = 0;
    virtual void ejectQuarter() = 0;
    virtual void turnCrank() = 0;
    virtual void dispense() = 0;
  protected:
    BallgumMachine *machine;
};


class NoQuarterState : public MachineState{
  public:
    NoQuarterState(BallgumMachine *t_machine);
    virtual void insertQuarter() override;
    virtual void ejectQuarter() override;
    virtual void turnCrank() override;
    virtual void dispense() override;
};

class HasQuarterState : public MachineState{
  public:
    HasQuarterState(BallgumMachine *t_machine);
    virtual void insertQuarter() override;
    virtual void ejectQuarter() override;
    virtual void turnCrank() override;
    virtual void dispense() override;
};

class SoldState : public MachineState{
  public:
    SoldState(BallgumMachine *t_machine);
    virtual void insertQuarter() override;
    virtual void ejectQuarter() override;
    virtual void turnCrank() override;
    virtual void dispense() override;
};

class SoldOutState : public MachineState{
  public:
    SoldOutState(BallgumMachine *t_machine);
    virtual void insertQuarter() override;
    virtual void ejectQuarter() override;
    virtual void turnCrank() override;
    virtual void dispense() override;
};



#endif
