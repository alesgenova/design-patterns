#include <iostream>
#include <memory>

#include "Machine.hpp"

void buyBalls(BallgumMachine &machine, int n=1){
  for (int i=0; i<n; ++i){
    machine.insertQuarter();
    machine.turnCrank();
    std::cout << std::endl;
  }
}

int main(){

  BallgumMachine machine;
  buyBalls(machine,4);

  return 0;

}
