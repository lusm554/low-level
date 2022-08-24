#include <iostream>
#include <string>
#include <vector>

using namespace std;

void count_vowels();
void count_occurs();

int main()
{
  //count_vowels();
  count_occurs();

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

void count_occurs()
{
  int ffCnt = 0, flCnt = 0, fiCnt = 0;
  char ch, prevch = '\0';
  
  while (cin >> ch) {
    switch (ch) {
      case 'i':
        if (prevch == 'f') {
          ++fiCnt;
        }
        break;
      case 'f':
        if (prevch == 'f') {
          ++ffCnt;
        }
        break;
      case 'l':
        if (prevch == 'f') {
          ++flCnt;
        }
        break;
      default:
        break;
    }
    prevch = ch;
  }

  cout << "Count of ff: \t" << ffCnt << '\n'
       << "Count of fl: \t" << flCnt << '\n'
       << "Count of fi: \t" << fiCnt << endl;
}
