#include <iostream>
#include <vector>
#include <string>

using namespace std;

void letter_grade();
void letter_grade_ter();
void correct();

int main()
{
  //letter_grade();
  //letter_grade_ter();
  //correct();

  return 0;
}


void letter_grade()
{
  vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
  string lettergrade;

  int grade;
  while (cin >> grade && grade <= 100) {
    if (grade < 60)
      lettergrade += scores[0];
    else
      lettergrade += scores[(grade - 50)/10];
  }

  cout << lettergrade << endl;
}

void letter_grade_ter()
{
  vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
  string lettergrade;

  int grade;
  while (cin >> grade && grade <= 100) {
    lettergrade += grade < 60 ? scores[0] : scores[(grade - 50)/10];
  }

  cout << lettergrade << endl;
}

void correct()
{
  // a
  /*
  if (val != val2)
    val = val2;
  else
    val = val2 = 0;
  */

  // b
  /*
  if (val < minval) {
    minval = val;
    occurs += 1;
  }
  */

  // c
  /*
  int val;
  if (val = get_value())
    cout << ... << endl;
  if (!val)
    cout << ...;
  */

  // d
  /*
  if (val == 0)
    val = get_value(); 
  */
}

