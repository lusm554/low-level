#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

int main()
{
  //4.4
  int a = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;  
  // 16 + 75 + 24 % 4 / 2
  // 16 + 75 = 91
  cout << a << endl;

  // 4.6
  int ival = 11;
  bool iseven = ival % 2 == 0;
  cout << (iseven ? "even" : "odd") << endl;

  // 4.7
  short short_int = numeric_limits<short>::max(); // 32767 
  cout << ++short_int << endl;

  return 0;
}
