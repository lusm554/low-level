#include <iostream>

using namespace std;

int main()
{
  // 4.36
  int i = 2;
  double d = .5;

  //i *= (int)d; // old-style cast
  i *= static_cast<int>(d); // new style
  cout << i << endl;

  return 0;
}
