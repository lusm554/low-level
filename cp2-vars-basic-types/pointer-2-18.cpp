#include <iostream>

int main(void) {
  // change value of a pointer
  int a = 10, b = 20;
  int *pa = &a, *pb = &b;
  std::cout << "Pointer pa: " << *pa << " Pointer pb: " << *pb << std::endl; // 10 20

  pa = pb;
  std::cout << "Pointer pa: " << *pa << " Pointer pb: " << *pb << std::endl; // 20 20


  // change the value to which the pointer points
  int c = 10, *pc = &c;
  std::cout << "Value c: " << c << std::endl; // 10

  *pc = 100;
  std::cout << "Value c: " << c << std::endl; // 100

  return 0;
}
