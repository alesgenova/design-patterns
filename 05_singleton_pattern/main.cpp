#include <iostream>
#include <memory>
#include <thread>
#include <vector>

#include "Singleton.hpp"

void makeSingleton(std::shared_ptr< Singleton > s[], int i){
  s[i] = Singleton::getInstance();
  return;
}


int main(){
  const int n = 20;
  const bool threaded = false;
  std::shared_ptr< Singleton > s_vec[n];
  std::thread t_vec[n];

  // spawn n threads:
  for (int i = 0; i < n; ++i) {
    if (threaded){
      // multithreaded version to check if the Singleton is threadsafe
      t_vec[i] = std::thread(makeSingleton, s_vec, i);
    }else{
      // basic singlethreaded version
      makeSingleton(s_vec, i);
    }      
  }

  if (threaded){
    for (int i = 0; i < n; ++i) {
      t_vec[i].join();
    }
  }
  
  for (int i = 0; i < n; i++) {
    std::cout << s_vec[i] << std::endl;
  }

  return 0;
}
