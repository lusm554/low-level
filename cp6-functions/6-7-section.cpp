#include <iostream>
#include <vector>

#define NDEBUG

using namespace std;

int funcT(int a, int b);
inline int add(int a, int b);
inline int sub(int a, int b);
inline int mult(int a, int b);
inline int _div(int a, int b);


int main()
{
  // 6.54
  /*
  vector<int(*)(int, int)> vec(10, funcT);

  cout << "Size: " << vec.size() << endl;

  for (int i = 0; i < vec.size(); i++)
    cout << vec[i](i, i<<2) << endl;
  */

  // 6.55
  /*
  vector<int(*)(int, int)> operations = {&add, &sub, &mult, &_div};
  int a = 10, b = 20;

  for (decltype(operations[0]) &oper : operations) // auto &oper, decltype(operations[0]) &oper 
    cout << oper(a, b) << endl;
  */

  // 6.56
  vector<int(*)(int, int)> ops = {&add, &sub, &mult, &_div};
  int b = 101, a = 202;

  for (auto it = ops.begin(); it != ops.end(); ++it)
    cout << (*it)(a, b) << endl;

  return 0;
}

int funcT(int a, int b)
{
  #ifndef NDEBUG
    cout << "Hello, I'm inside vector" << endl;
  #endif
  return a + b;
}

inline int add(int a, int b)
{
  return a + b;
}

inline int sub(int a, int b)
{
  return a - b;
}

inline int mult(int a, int b)
{
  return a * b;
}

// using _ for don't overload built in div func
inline int _div(int a, int b)
{
  return a / b;
}

