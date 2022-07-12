#include <iostream>
#include "Sales_item.h"

int main(void) {
  Sales_item curr, item;
  int cnt = 1;

  if (std::cin >> curr) {
    int cnt = 1;
    while (std::cin >> item) {
      if (curr.isbn() == item.isbn()) {
        ++cnt;
      } else {
        std::cout << curr.isbn() << " occurs " << cnt << " times." << std::endl;
        cnt = 1;
        curr = item;
      }
    }
    std::cout << curr.isbn() << " occurs " << cnt << " times." << std::endl;
  }

  return 0;
}
