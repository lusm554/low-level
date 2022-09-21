#include <iostream>
#include <string>

using namespace std;

void sales_data_test();

struct Sales_data
{
  string isbn() const { return bookNo; } 
  Sales_data& combine(const Sales_data &rhs);
  double avg_price() const;

  string bookNo;
  unsigned units_sold = 0;
  double revenue = .0;
};

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this;
}

double Sales_data::avg_price() const
{
  return units_sold == 0 ? 0 : revenue / units_sold;
}

int main()
{
  //sales_data_test();
  
  return 0;
}



void sales_data_test()
{
  Sales_data total;
  if (cin >> total.bookNo >> total.units_sold >> total.revenue)
  {
    Sales_data trans;
    while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue)
    {
      if (total.bookNo == trans.bookNo)
      {
        total.units_sold += trans.units_sold;
        total.revenue += trans.revenue;
      }
      else
      {
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
        total = trans;
      }
    }
    cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
  } 
  else
  {
    cerr << "Where data?!" << endl;
  }
}


