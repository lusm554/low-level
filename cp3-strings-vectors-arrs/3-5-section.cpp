#include <iostream>

using namespace std;

void define_arr();

int main()
{
  define_arr();
  return 0;
}


void define_arr()
{
  int arr[10];
  for (int i = 0; i < 10; i++)
    arr[i] = i;
}

