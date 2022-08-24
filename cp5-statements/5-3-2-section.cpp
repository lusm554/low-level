#include <iostream>
#include <string>
#include <vector>

using namespace std;

void count_vowels();

int main()
{
  count_vowels();

  return 0;
}


void count_vowels()
{
  int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
  char ch;

  while (cin >> ch) {
    switch (ch) {
      case 'a':
        ++aCnt;
        break;
      case 'e':
        ++eCnt;
        break;
      case 'i':
        ++iCnt;
        break;
      case 'o':
        ++oCnt;
        break;
      case 'u':
        ++uCnt;
        break;
      default:
        break;
    }
  }

  cout << "Count of a: \t" << aCnt << '\n'
       << "Count of e: \t" << eCnt << '\n'
       << "Count of i: \t" << iCnt << '\n'
       << "Count of o: \t" << oCnt << '\n'
       << "Count of u: \t" << uCnt << endl;
}

