#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  // 4.13
  int i; double d;
  d = i = 3.5; // i = 3, d = 3
  cout << i << " " << d << endl;  

  i = d = 3.5; // d = 3.5, i = 3
  cout << i << " " << d << endl;  

  // 4.14
  // if (42 = i) - error, cannot assign lvalue
  // if (i = 42) - assign 42 to i, return i

  // 4.16
  // if ((p = getPtr()) != 0)
  // if (i == 1024)

  return 0;
}
