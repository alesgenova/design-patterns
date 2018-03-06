#include <iostream>
#include <memory>

#include "State.hpp"
#include "Machine.hpp"


BallgumMachine::BallgumMachine()
  : noQuarterState(std::make_shared<NoQuarterState>(this))
  , hasQuarterState(std::make_shared<HasQuarterState>(this))
  , soldState(std::make_shared<SoldState>(this))
  , soldOutState(std::make_shared<SoldOutState>(this))
  , state(noQuarterState)
  , balls(3)
{}

std::shared_ptr<MachineState> BallgumMachine::getState() const{
  return state;
}

void BallgumMachine::setState(std::shared_ptr<MachineState> t_state){
  state = t_state;
}

int BallgumMachine::getBalls() const{
  return balls;
}

void BallgumMachine::setBalls(int t_balls){
  balls = t_balls;
}

void BallgumMachine::insertQuarter(){
  state->insertQuarter();
}

void BallgumMachine::ejectQuarter(){
  state->ejectQuarter();
}

void BallgumMachine::turnCrank(){
  state->turnCrank();
}

