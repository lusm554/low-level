#include <iostream>
#include <vector>

using namespace std;

void rec_print(vector<int> &vec, int i);

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
