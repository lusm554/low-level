#include <iostream>

using namespace std;

int main()
{
  //4.28
  cout << "short int\t" << sizeof(short int) << endl;
  cout << "int\t\t" << sizeof(int) << endl;
  cout << "long int\t" << sizeof(long int) << endl;
  cout << "long long int\t" << sizeof(long long int) << endl;

  cout << "char\t\t" << sizeof(char) << endl;
  cout << "bool\t\t" << sizeof(bool) << endl;
  cout << "double\t\t" << sizeof(double) << endl;
  cout << "long double\t" << sizeof(long double) << endl;
  cout << "float\t\t" << sizeof(float) << endl;

  // 4.29
  int x[10];
  int *p = x;

  cout << sizeof(x)/sizeof(*x) << endl; // 10
  cout << sizeof(p)/sizeof(*p) << endl; // 2, sizeof(p) returns size of pointer

  // 4.30
  // (sizeof x) + y
  // (sizeof a) < b
	// sizeof (p->mem[i])
	// sizeof f() returns void if underfined or size of return type

  return 0;
}
