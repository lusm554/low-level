#include <iostream>
#include <string>

/* 
1.21 Write a program that reads two Sales_item objects that have the same ISBN and produces their sum.
1.22 Write a program that reads several transactions for the same ISBN. Write the sum of all the transactions that were read.
1.23 Write a program that reads several transactions and counts how many transactions occur for each ISBN.
*/


void ex1_21(void);

struct Sales_data {
  std::string isbn;
  int count;
  double price;
};

int main(void)
{
  // 1.21
  ex1_21(); 

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
