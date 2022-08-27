#include <iostream>
#include <vector>
#include <string>

using namespace std;

void read_str();
void check_prefix();


int main()
{
  //read_str();
  check_prefix();

  return 0;
}


void read_str()
{
  string in, prev_in, max_repeat_in;
  int repeat_cnt = 0, max_repeat_cnt = 0;

  while (cin >> in) {
    if (in == prev_in) {
      ++repeat_cnt;
    } else {
      repeat_cnt = 1;
      prev_in = in;
    }

    if (max_repeat_cnt < repeat_cnt) {
      max_repeat_cnt = repeat_cnt;
      max_repeat_in = prev_in;
    }
  }

  if (max_repeat_cnt <= 1)
    cout << "no words repeated." << endl;
  else
    cout << max_repeat_in << " occured " << max_repeat_cnt << " times." << endl;
}

void check_prefix()
{
  vector<int> vi1, vi2;
  bool ispref = true;

  vi1 = {1, 2, 2, 2};
  vi2 = {1, 2, 3};
  
  if (vi2.size() < vi1.size()) {
    vector<int> temp = vi2;
    vi2 = vi1;
    vi1 = temp;
  }

  // check that vi1 is pref of vi2
  for (int i = 0; i < vi1.size(); i++)
  {
    if (!(vi2.size() > i && vi1[i] == vi2[i]))
    {
      ispref = false;
      cout << "not prefix" << endl;
    }
  }
  if (ispref)
    cout << "prefix" << endl;
}

