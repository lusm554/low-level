#include <iostream>
#include <string>

using namespace std;

class Person
{
  // Define functions as const because
  // they don't modify the class member's value
  public:
    string get_name() const
    {
      return _name;
    }

    string get_address() const
    {
      return _address;
    }

    string _name;
    string _address;
};

istream &Read(istream &is, Person &obj)
{
	is >> obj._name >> obj._address;
	return is;
}

ostream &Print(ostream &os, Person &obj)
{
	os << obj.get_name() << ' ' << obj.get_address() << endl;
	return os;
}

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

istream &read(istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;

	return is;
}

ostream &print(ostream &os, Sales_data &item)
{
	os << item.isbn() << ' ' << item.units_sold << ' ' << item.revenue
	<< ' ' << item.avg_price() << endl;

	return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

void trans_proc_w_rpa();

int main()
{
	//trans_proc_w_rpa();
	Person p;
	Read(cin, p);
	Print(cout, p);

  return 0;
}

// rpa - read print add
void trans_proc_w_rpa()
{
	Sales_data total;

	if (read(cin, total))	
	{
		Sales_data curr;
		while(read(cin, curr))
		{
			if (total.isbn() == curr.isbn())
			{
				total.combine(curr);
			}
			else
			{
				print(cout, total);
				total = curr;
			}
		}
		print(cout, total);
	}
	else
	{
		cout << "Where is data??" << endl;
	}
}

