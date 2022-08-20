#include <iostream>
#include <vector>
#include <string>

using namespace std;

void ter_cond();
void pass();

int main()
{
  //ter_cond();
  //pass();

  //4.23
  string s = "word";
  string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");

  cout << p1 << endl;

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

void pass()
{
  int grade = 76;

  /*
  string finalgrade = (grade > 90) ? "high pass"
                      : (grade < 60) ? "fail" : "pass";
  */

  string finalgrade = (grade > 90) ? "high pass" : (grade > 60 && grade <= 75) ? "low pass" : (grade < 60) ? "fail" : "pass";

  cout << finalgrade << endl;


  string f;
  if (grade > 90)
    f = "high pass";
  else if (grade > 60 && grade <= 75)
    f = "low pass";
  else if (grade < 60)
    f = "fail";
  else
    f = "pass";

  cout << f << endl;
  // don't look at that logic...
}

