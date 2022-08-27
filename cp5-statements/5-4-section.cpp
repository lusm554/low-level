#include <iostream>
#include <vector>
#include <string>

using namespace std;

void read_str();

int main()
{
  read_str();

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
