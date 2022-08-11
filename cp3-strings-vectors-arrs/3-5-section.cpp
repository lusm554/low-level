#include <iostream>
#include <vector>

using namespace std;

void define_arr();
void same_w_vec();
void elems2zero();

int main()
{
  //define_arr();
  //same_w_vec();
  elems2zero();
  return 0;
}


void define_arr()
{
  int arr[10];
  for (int i = 0; i < 10; i++)
    arr[i] = i;
}

void same_w_vec()
{
  vector<int> arr(10);
  for (int i = 0; i < 10; i++)
    arr[i] = i;
}

void elems2zero()
{
  int arr[10];
  for (int i = 0; i < 10; i++)
    arr[i] = i;

  int *b = begin(arr), *e = end(arr);
  while (b != e)
    *b++ = 0; 

  for (auto i : arr)
    cout << i << endl;
}
