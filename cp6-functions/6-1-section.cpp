#include <iostream>
#include "Chapter6.h"

using namespace std;

// Declared in Chapter6.h
/*
int fact(int val);
int get_fact(void);
int cnt_calls();
*/

int main()
{
  /*
  int fact5 = fact(5);
  cout << fact5 << endl;

  int fact = get_fact();
  cout << fact << endl;

  int test_abs;
  if (cin >> test_abs)
    cout << abs(test_abs) << endl;
  */

  for (int i = 0; i < 5; i++)
    cout << cnt_calls() << endl;

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

int abs(int val)
{
  return val < 0 ? (-val) : val;
}

int cnt_calls()
{
  static size_t cnt = 0;
  return cnt++;
}


