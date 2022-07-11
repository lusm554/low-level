#include <iostream>

int main(void) {
  int from = 0, to = 0;

  std::cout << "Enter from and to" << std::endl; 
  std::cin >> from >> to; 

  if (from < to) {
    for (int i = from; i <= to; i++) {
      std::cout << "n: " << i << std::endl;
    } 
  }

  return 0;
}
