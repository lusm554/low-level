#include <iostream>
#include <string>

using namespace std;

int main()
{
  /*
  // 4.36
  int i = 2;
  double d = .5;

  //i *= (int)d; // old-style cast
  i *= static_cast<int>(d); // new style
  cout << i << endl;
  */

  // 4.37
  int i;
  double d;
  const string *ps;
  char *pc;
  void *pv;

  // a
  // pv = (void*)ps;
  pv = static_cast<void*>(const_cast<string*>(ps));

  // b
  // i = int(*pc);
  i = static_cast<int>(*pc);

  // c
  // pv = &d;
  pv = &d;

  // d
  // pc = (char*) pv;
  pc = reinterpret_cast<char*>(pv);

  return 0;
}
