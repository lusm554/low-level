#include <iostream>

using namespace std;

int fact(int val);
int get_fact(void);

int main()
{
  int fact5 = fact(5);
  cout << fact5 << endl;

  int fact = get_fact();
  cout << fact << endl;
}

int fact(int val)
{
  int res = 1;
  while (val > 1)
    res *= val--;

  return res;
}

int get_fact(void)
{
  int val;
  if (!(cin >> val))
    throw runtime_error("Bad input to get_fact");

  int res = 1;
  while (val > 1)
    res *= val--;

  return res;
}
