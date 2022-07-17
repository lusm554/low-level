#include <iostream>

int main(void) {
  int val = 1024;
  int *pi = &val;
  int **pp = &pi; 

  std::cout << val << " " << *pi << std::endl;
  std::cout << **pp << std::endl;

  return 0;
}
