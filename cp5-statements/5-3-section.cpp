#include <iostream>
#include <vector>
#include <string>

using namespace std;

void letter_grade();

int main()
{
  letter_grade();

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

