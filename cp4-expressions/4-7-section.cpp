#include <iostream>
#include <vector>

using namespace std;

void ter_cond();

int main()
{
  ter_cond();

  return 0;
}


void ter_cond()
{
  vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); ++iter)
    *iter = *iter % 2 == 0 ? *iter : *iter*2;

  for (int &val : vec)
    cout << val << endl;
}

