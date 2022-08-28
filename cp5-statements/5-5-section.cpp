#include <iostream>
#include <string>
#include <vector>

using namespace std;

void check_in();
void check_in_cont();

int main()
{
  //check_in();
  check_in_cont();

  return 0;
}


void check_in()
{
  string in, previn;
  bool isrepeated = false;

  while (cin >> in) {
    if (in == previn) {
      cout << "Word " << in << " occurs 2 times." << endl;
      isrepeated = true;
      break;
    }
    previn = in;
  }

  if (!isrepeated)
    cout << "No word repeated." << endl;
}

void check_in_cont()
{
  string in, previn;
  bool isrepeated = false;

  while (cin >> in) {
    if (in[0] != '_')
      continue;
    if (in == previn) {
      cout << "Word " << in << " occurs 2 times." << endl;
      isrepeated = true;
      break;
    }
    previn = in;
  }

  if (!isrepeated)
    cout << "No word repeated." << endl;
}

