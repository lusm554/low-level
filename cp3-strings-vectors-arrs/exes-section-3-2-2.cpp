#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl;
using std::string;

void ex2();

int main(void)
{
  ex2();
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
