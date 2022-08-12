#include <iostream>
#include <vector>

using namespace std;

void define_arr();
void same_w_vec();
void elems2zero();
void iseq();

int main()
{
  //define_arr();
  //same_w_vec();
  //elems2zero();
  iseq();
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

void iseq()
{
  /*
  int arr1[5] = {1, 2, 3, 4, 5};
  int arr2[] = {1, 2, 3, 4, 4};

  cout << sizeof(arr1)/sizeof(int) << endl;
  cout << sizeof(arr2)/sizeof(int) << endl;
  if (sizeof(arr2)/sizeof(int) != sizeof(arr1)/sizeof(int)) {
    cout << "not equal" << endl;
    return;
  }
  for (int i = 0; i < sizeof(arr1)/sizeof(int); i++) {
    if (arr1[i] != arr2[i]) {
      cout << "not equal" << endl;
      return;
    }
  }
  cout << "equal" << endl;
  */

  // same with vectors
  vector<int> v1(10, 1);
  vector<int> v2(10, 2);
  
  if (v1.size() != v2.size()) {
    cout << "not equal" << endl;
    return;
  }

  for (auto it1 = v1.cbegin(), it2 = v2.cbegin();
      it1 != v1.cend() && it2 != v2.cend(); it1++, it2++) {
    if (*it1 != *it2) {
      cout << "not equal" << endl;
      return;
    }
  }
  cout << "equal" << endl;
}

