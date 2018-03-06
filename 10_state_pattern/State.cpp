#include <iostream>
#include <memory>

#include "Machine.hpp"
#include "State.hpp"


MachineState::MachineState(BallgumMachine* t_machine)
  : machine(t_machine)
{}


// NoQuarterState

NoQuarterState::NoQuarterState(BallgumMachine* t_machine)
  : MachineState::MachineState(t_machine)
{}

void NoQuarterState::insertQuarter(){
  std::cout << "Quarter inserted" << std::endl;
  machine->setState(machine->hasQuarterState);
}

void NoQuarterState::ejectQuarter(){
  std::cout << "Can't eject the quarter, there is no quarter" << std::endl;
}

void NoQuarterState::turnCrank(){
  std::cout << "Can't turn the crank, since there is no quarter" << std::endl;
}

void NoQuarterState::dispense(){
  std::cout << "Can't dispense, since there is no quarter" << std::endl;
}

// HasQuarterState

HasQuarterState::HasQuarterState(BallgumMachine* t_machine)
  : MachineState::MachineState(t_machine)
{}

void HasQuarterState::insertQuarter(){
  std::cout << "Can't insert, you already inserted a quarter" << std::endl;
}

void HasQuarterState::ejectQuarter(){
  std::cout << "Ejecting the quarter" << std::endl;
  machine->setState(machine->noQuarterState);
}

void HasQuarterState::turnCrank(){
  std::cout << "Turning the crank" << std::endl;
  machine->setState(machine->soldState);
  machine->getState()->dispense();
}

void HasQuarterState::dispense(){
  std::cout << "Can't dispense, you have to turn the crank first" << std::endl;
}


// SoldState

SoldState::SoldState(BallgumMachine* t_machine)
  : MachineState::MachineState(t_machine)
{}

void SoldState::insertQuarter(){
  std::cout << "Can't insert, the machine is busy" << std::endl;
}

void SoldState::ejectQuarter(){
  std::cout << "Can't eject, the machine is busy" << std::endl;
}

void SoldState::turnCrank(){
  std::cout << "Can't turn, the machine is busy" << std::endl;
}

void SoldState::dispense(){
  std::cout << "Dispensing the ball!" << std::endl;
  int nBalls = machine->getBalls();
  nBalls-- ;
  machine->setBalls(nBalls);
  if (nBalls > 0){
    machine->setState(machine->noQuarterState);
  }else{
    machine->setState(machine->soldOutState);
  }
}


// SoldOutState

SoldOutState::SoldOutState(BallgumMachine* t_machine)
  : MachineState::MachineState(t_machine)
{}

void SoldOutState::insertQuarter(){
  std::cout << "Can't insert, the machine is out of gums" << std::endl;
}

void SoldOutState::ejectQuarter(){
  std::cout << "Can't eject, the machine is out of gums" << std::endl;
}

void SoldOutState::turnCrank(){
  std::cout << "Can't turn, the machine is out of gums" << std::endl;
}

void SoldOutState::dispense(){
  std::cout << "Can't dispense, the machine is out of gums" << std::endl;
}

