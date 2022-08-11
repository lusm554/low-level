#include <iostream>
#include <vector>

using namespace std;

void define_arr();
void same_w_vec();

int main()
{
  //define_arr();
  same_w_vec();
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

