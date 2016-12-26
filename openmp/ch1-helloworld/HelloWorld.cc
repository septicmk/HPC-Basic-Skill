#include <iostream>
#include <thread>

#include <omp.h>

int main(){
  auto num_threads = std::thread::hardware_concurrency();
#pragma omp parallel for
  for(int i = 0; i < num_threads; ++i){
    std::cout << "hello openmp form thread " << i << std::endl;
  }
}
