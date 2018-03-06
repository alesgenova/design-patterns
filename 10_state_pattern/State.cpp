#include <iostream>
#include <memory>

#include "Machine.hpp"
#include "State.hpp"


MachineState::MachineState(BallgumMachine* t_machine)
  : machine(t_machine)
{}

NoQuarterState::NoQuarterState(BallgumMachine* t_machine)
  : MachineState::MachineState(t_machine)
{}

void NoQuarterState::insertQuarter(){
  std::cout << "NoQuarterState::insertQuarter" << std::endl;
}

