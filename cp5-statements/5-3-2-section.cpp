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
  // vowels
  int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
  // blank spaces, tabls, newlines
  int spacesCnt = 0, tabsCnt = 0, nlCnt = 0; 
  char ch;

  while (cin >> ch) {
    switch (ch) {
      case 'A':
      case 'a':
        ++aCnt;
        break;
      case 'E':
      case 'e':
        ++eCnt;
        break;
      case 'I':
      case 'i':
        ++iCnt;
        break;
      case 'O':
      case 'o':
        ++oCnt;
        break;
      case 'U':
      case 'u':
        ++uCnt;
        break;
      case ' ':
        ++spacesCnt;
        break;
      case '\t':
        ++tabsCnt;
        break;
      case '\n':
        ++nlCnt;
        break;
      default:
        break;
    }
  }

  cout << "Count of aA: \t" << aCnt << '\n'
       << "Count of eE: \t" << eCnt << '\n'
       << "Count of iI: \t" << iCnt << '\n'
       << "Count of oO: \t" << oCnt << '\n'
       << "Count of uU: \t" << uCnt << '\n'
       << "Count of tabls: \t" << tabsCnt << '\n'
       << "Count of new lines: \t" << nlCnt << '\n'
       << "Count of blank spaces: \t" << spacesCnt << endl;
}

