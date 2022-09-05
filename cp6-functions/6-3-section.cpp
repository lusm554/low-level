#include <iostream>
#include <string>
#include <vector>

using namespace std;

void rec_print(vector<int> &vec, int i);
string (*get_10_s())[10];
string ss[10] = {"hello", "world"};

int main()
{
  // 6.33, recursive print 
  vector<int> vec = { 1, 2, 3, 4, 5 };
  rec_print(vec, vec.size() - 1);



  return 0;
}

void rec_print(vector<int> &vec, int i)
{
  if (i == 0) {
    cout << vec[i] << endl;
    return;
  }
  rec_print(vec, i - 1);
  cout << vec[i] << endl;
}

string (*get_10_s())[10] 
{
  return &ss;
}

