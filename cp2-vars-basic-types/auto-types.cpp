#include <iostream>

int main(void) {
  const int i = 42; // const int i
  auto j = i; // int j, not const
  const auto &k = i; // const reference to const int i
  auto *p = &i; // int pointer to const int i
  const auto j2 = i, &k2 = i; // const int i, reference to int i

  std::cout << "i: " << i << " j: " << j << std::endl;
  j = 1;
  std::cout << "i: " << i << " j: " << j << std::endl;

  //k = 2;

  //*p = 1;

  //j2 = 0;

  //k2 = 5;

  return 0;
}
