#include <iostream>


int main(void) {
  int i = 0;

  while (i++ < 10) {
    for (int j = 0; j < i*2; j++) {
      if (j == 0 || j == i*2-1 || i == 10)
        std::cout << "*";
      else
        std::cout << " ";
    }
    std::cout << std::endl;
  }

  return 0;

}

