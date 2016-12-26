#include <iostream>

#include <omp.h>

int main(){
  auto num_threads = omp_get_num_procs();

  omp_set_num_threads(2);
  #pragma omp parallel
  {
    std::cout << " threads : " <<  omp_get_num_threads();
    std::cout << " ID : " << omp_get_thread_num() << std::endl;
  }
  return 0;
}
