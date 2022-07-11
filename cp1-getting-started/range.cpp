#include <iostream>


int main(void) {
  int from = 0, to = 0;

  std::cout << "Inter two nums:" << std::endl;
  std::cin >> from >> to;

  while (from <= to)
    std::cout << from++ << std::endl;

  return 0;
}

