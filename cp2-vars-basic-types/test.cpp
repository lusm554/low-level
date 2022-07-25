#include <iostream>

int main(void) {
  int a = 3, b = 4;
  decltype(a) c = a;
  decltype((b)) d = a;

  std::cout << c << std::endl;
  std::cout << d << std::endl;
  ++c;
  ++d;

  std::cout << c << std::endl;
  std::cout << d << std::endl;

  return 0;
}
