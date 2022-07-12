#include <iostream>
#include "Sales_item.h"

int main(void) {
  Sales_item item;
  Sales_item sum;

  while (std::cin >> item) {
    std::cout << item << sum << std::endl;
    sum += item;
  }

  std::cout << "the sum: " << sum << std::endl;

  return 0;
}
