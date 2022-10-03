#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::istream;
using std::ostream;
using std::endl;

void test_sales_data(void);

class Sales_data;
istream& read(istream &, Sales_data &);
ostream& print(ostream &, const Sales_data &);
Sales_data add(const Sales_data &, const Sales_data &);

class Person;
istream& Read(istream &, Person &);
ostream& Print(ostream &, const Person &);

class Person
{
    friend istream& Read(istream &, Person &);
    friend ostream& Print(ostream &, const Person &);

    public:
        Person() = default;
        Person(const string name, const string address) :
            _name(name), _address(address) { }
        Person(istream &is)
        {
            Read(is, *this);
        }

        string get_name() const
        {
            return _name;
        }
        string get_address() const
        {
            return _address;
        }
    private:
        string _name;
        string _address;
};

istream& Read(istream &is, Person &obj)
{
    is >> obj._name >> obj._address;
    return is;
}

ostream& Print(ostream &os, const Person &obj)
{
    os << obj._name << " " << obj._address << endl;
    return os;
}

class Sales_data
{
	friend istream& read(istream &, Sales_data &);
	friend ostream& print(ostream &, const Sales_data &);
	friend Sales_data add(const Sales_data &, const Sales_data &);

public:
	Sales_data() = default;
	Sales_data(const string &str) : bookNo(str) {}
	Sales_data(const string &str, unsigned n, double p) :
		bookNo(str), units_sold(n), revenue(p * n) {}
	Sales_data(istream &is)
	{
		read(is, *this);
	}
	string isbn() const
	{
		return bookNo;
	}
	Sales_data& combine(const Sales_data &rhs);

private:
	double avg_price() const
	{
		return units_sold == 0 ? 0 : revenue / units_sold;
	}
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

istream& read(istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

ostream& print(ostream &os, const Sales_data &item)
{
	os << item.isbn() << ' ' << item.units_sold << ' ' << item.revenue <<
	 ' ' << item.avg_price() << '\n';
	return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

int main()
{
    //test_sales_data();

    Person pers(cin);

    Print(cout, pers);
	return 0;
}

void test_sales_data(void)
{
    Sales_data total(cin);
	if(total.isbn().empty() == false)
	{
		while(cin)
		{
			Sales_data trans(cin);
			if(total.isbn() == trans.isbn())
			{
				total.combine(trans);
			}
			else
			{
				print(cout, total);
				total = trans;
			}
		}
		print(cout, total);
	}
	else
	{
		cout << "No data?!" << '\n';
	}
}
