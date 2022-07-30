#include <iostream>
#include <string>
#include "Sales_data.h"

void ex1_21(void);
void ex1_23(void);

int main(void)
{
	//ex1_21();

  // test multiple "include"
  #include "Sales_data.h"
  ex1_23();
  return 0;
}


void ex1_21(void)
{
  Sales_data item1, item2;
  std::cin >> item1.isbn >> item1.count >> item1.price;
  std::cin >> item2.isbn >> item2.count >> item2.price;

  // log <isbn> <sum count> <counts * prices> <avg price>
  if (item1.isbn == item2.isbn) {
    int s_cnt = item1.count + item2.count;
    int avg_price = ((item1.count * item1.price) + (item2.count * item2.price)) / s_cnt;
    std::cout << item1.isbn << " " << s_cnt << " " << (item1.count * item1.price) + (item2.count * item2.price) <<
      " " << avg_price << std::endl;
  } else {
    std::cout << "ISBN different." << std::endl;
  }
}

void ex1_23(void)
{
  Sales_data start, curr;
  int cnt = 1;

  if (std::cin >> start.isbn) {
    while (std::cin >> curr.isbn) {
      if (start.isbn == curr.isbn) {
        cnt++;
      } else {
        std::cout << cnt << std::endl; 
        cnt = 1;
        start = curr;
      }
    }
    std::cout << cnt << std::endl; 
  }
}
