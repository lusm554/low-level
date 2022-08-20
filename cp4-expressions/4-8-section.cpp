#include <iostream>

using namespace std;

int main()
{
  // 4.25
  unsigned long res = ~'q' << 6; // warning: shifting a negative value is undefined

  cout << res << endl;

  // 4.27
  unsigned long UL1 = 3, UL2 = 7;

  cout << (UL1 & UL2) << endl; // 3
  cout << (UL1 | UL2) << endl; // 7

  cout << (UL1 && UL2) << endl; // 1, because converts to bool. But 7 for int type
  cout << (UL1 || UL2) << endl; // 1, because converts to bool. but 3 for int type

  return 0;
}
