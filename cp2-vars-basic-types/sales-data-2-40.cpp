#include <iostream>

int main(void) {
  struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
  };

  Sales_data data1;

  data1.bookNo = "12312";
  data1.units_sold = 10;
  data1.revenue = data1.units_sold * 1.25;

  std::cout << "bookNo " << data1.bookNo << std::endl; 
  std::cout << "units_sold " << data1.units_sold << std::endl; 
  std::cout << "revenue " << data1.revenue << std::endl; 

  return 0;
}
