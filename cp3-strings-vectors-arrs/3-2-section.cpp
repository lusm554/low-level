#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl;
using std::string;

void ex3_6();

int main()
{
  ex3_6();
  return 0;
}

void ex3_6()
{
  string str = "hello world";
  for (auto &c : str) // same as char &c
    c = 'X';

  cout << str << endl;
}
