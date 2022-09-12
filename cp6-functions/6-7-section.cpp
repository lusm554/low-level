#include <iostream>
#include <vector>

#define NDEBUG

using namespace std;

int funcT(int a, int b);

int main()
{
  // 6.54
  vector<int(*)(int, int)> vec(10, funcT);

  cout << "Size: " << vec.size() << endl;

  for (int i = 0; i < vec.size(); i++)
    cout << vec[i](i, i<<2) << endl;

  return 0;
}

int funcT(int a, int b)
{
  #ifndef NDEBUG
    cout << "Hello, I'm inside vector" << endl;
  #endif
  return a + b;
}

