#include <iostream>

using namespace std;

int fact(int val);

int main()
{
  int fact5 = fact(5);
  cout << fact5 << endl;
}

int fact(int val)
{
  int res = 1;
  while (val > 1)
    res *= val--;

  return res;
}
