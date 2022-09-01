#include "Chapter6.h"

int fact(int val)
{
  if (val == 0 || val == 1)
    return 1;

  int res = 1;
  while (val > 1)
    res *= val--;

  return res;
}
