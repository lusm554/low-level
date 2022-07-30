#include <iostream>
#include <string>
#include "Sales_data.h"

using std::cin; using std::cout; using std::endl;

void ex1_21(void);
void ex1_23(void);

int main(void)
{
	ex1_21();

  //ex1_23();
  return 0;
}


void ex1_21(void)
{
  Sales_data item1, item2;
  cin >> item1.isbn >> item1.count >> item1.price;
  cin >> item2.isbn >> item2.count >> item2.price;

  // log <isbn> <sum count> <counts * prices> <avg price>
  if (item1.isbn == item2.isbn) {
    int s_cnt = item1.count + item2.count;
    int avg_price = ((item1.count * item1.price) + (item2.count * item2.price)) / s_cnt;
    cout << item1.isbn << " " << s_cnt << " " << (item1.count * item1.price) + (item2.count * item2.price) <<
      " " << avg_price << endl;
  } else {
    cout << "ISBN different." << endl;
  }
}

void ex1_23(void)
{
  Sales_data start, curr;
  int cnt = 1;

  if (cin >> start.isbn) {
    while (cin >> curr.isbn) {
      if (start.isbn == curr.isbn) {
        cnt++;
      } else {
        cout << cnt << endl; 
        cnt = 1;
        start = curr;
      }
    }
    cout << cnt << endl; 
  }
}
