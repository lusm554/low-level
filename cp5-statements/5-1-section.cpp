#include <iostream>

using namespace std;

int main()
{
  // 5.1
  ; // null statement
  {} // also null statement

  // 5.2
  { int a; } // block

  // 5.3
  int sum = 0, val = 0;
  while (++val <= 10)
    sum += val;

  cout << sum << endl;

  return 0;
}


