#include <iostream>
#include "Sales_item.h"

// 1.21
int main(void) {
  Sales_item item1, item2;

  std::cin >> item1 >> item2;

  if (item1.isbn() == item2.isbn())
    std::cout << item1 + item2 << std::endl;

  return 0; 
}


