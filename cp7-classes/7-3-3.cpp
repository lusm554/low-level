#include <iostream>

class Y;

class X
{
  Y *ptr;
};

class Y
{
  X obj;
};

int main(void)
{
  X obj_x;
  Y obj_y;

  return 0;
}
