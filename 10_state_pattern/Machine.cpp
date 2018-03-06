#include <iostream>
#include <memory>

#include "State.hpp"
#include "Machine.hpp"


BallgumMachine::BallgumMachine()
  : noQuarterState(std::make_shared<NoQuarterState>(this))
{
  state = noQuarterState;
}

void BallgumMachine::insertQuarter(){
  state->insertQuarter();
  std::cout << "And We're Back" << std::endl;
}