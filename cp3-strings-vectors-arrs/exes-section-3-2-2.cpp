#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl;
using std::string;

void ex2();
void ex4();

int main(void)
{
  //ex2();
  ex4();
  return 0;
}

void ex2()
{ 
  // read line at time
  /*
  string line;
  while (getline(cin, line))
    cout << line << endl; 
  */

  // read word at time
  string word;
  while (cin >> word)
    cout << word << endl;
}

void ex4()
{
  string str1, str2;

  getline(cin, str1);
  getline(cin, str2); 

  // first version
  if (str1 == str2)
    cout << "str1 & str2 equal." << endl;
  else // if not equal check which *larger* 
    cout << ((str1 > str2) ? str1 : str2) << endl;

  // second version 
  if (str1.size() == str2.size())
    cout << "str1 & str2 have the same len." << endl;
  else // if not equal len check which str longer
    cout << (str1.size() > str2.size() ? str1 : str2) << endl;
}
