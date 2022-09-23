#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::istream;
using std::ostream;

struct Sales_data
{
    Sales_data() = default; // default initializer
    Sales_data(const string &str) : bookNo(str) {}
    Sales_data(const string &str, unsigned n, double p) :
        bookNo(str), units_sold(n), revenue(p * n) {}
    Sales_data(istream &);

    string isbn() { return bookNo; }
    Sales_data &combine(const Sales_data &rhs);
    double avg_price() const;

    string bookNo;
    unsigned units_sold = 0;
    double revenue = .0;
};

Sales_data &Sales_data::combine(const Sales_data &rhs)
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
    os << item.isbn() << ' ' << item.units_sold << ' ' << item.revenue <<
        ' ' << item.avg_price() << endl;
    return os;
}

Sales_data::Sales_data(istream &is)
{
    read(is, *this);
}

int main()
{
    Sales_data obj1; // default init
    Sales_data obj2("mybooknumber"); // init only bookNo, other inits by default
    Sales_data obj3("mbn", 71, 5.2); // init all members
    Sales_data obj4(cin); // init with constructor outside

    print(cout, obj1);
    print(cout, obj2);
    print(cout, obj3);
    print(cout, obj4);

    return 0;
}
