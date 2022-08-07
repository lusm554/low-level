#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl;
using std::string;

void ex3_6();
void ex3_8();

int main()
{
  //ex3_6();
  ex3_8();
  return 0;
}

void ex3_6()
{
  string str = "hello world";
  for (auto &c : str) // same as char &c
    c = 'X';

  cout << str << endl;
}

void ex3_8()
{
  string wstr = "hello world"; 
  string::size_type n = 0;
  while (n < wstr.size())
    wstr[n++] = 'X';

  cout << wstr << endl;

  string fstr = "hello world";
  for (string::size_type i = 0; i < fstr.size(); i++)
    fstr[i] = 'X';

  cout << fstr << endl; 
}
