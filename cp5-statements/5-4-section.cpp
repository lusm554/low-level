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
  string str, prev;
  string most_repeated;
  int occur_cnt = 0, max_repeated = 0;

  while (cin >> str) {
    if (str == prev) {
      ++occur_cnt;
      if (occur_cnt > max_repeated) {
        max_repeated = occur_cnt; 
        most_repeated = str;
      }
    }

    prev = str;
  }

  if (max_repeated)
    cout << most_repeated << " occured " << max_repeated << " times." << endl;
  else
    cout << "no word repeated" << endl;
}
