#include <iostream>
#include <string>
#include <initializer_list>

using namespace std;

int sum_lst(initializer_list<int> lst);

int main(int argc, char** argv) 
{
  /*
  string res = "";

  for (int i = 1; i < argc; i++) 
    res += argv[i] + string(" ");

  cout << res << endl;
  */

  /*
  for (int i = 0; i < argc; i++)
    cout << i << ":\t" << argv[i] << endl;
  */

  initializer_list<int> list = {1, 2, 3};
  cout << sum_lst(list) << endl;

  return 0;
}

int sum_lst(initializer_list<int> lst)
{
  int sum = 0;
  for (int i : lst)
    sum += i;
  
  return sum;
}


