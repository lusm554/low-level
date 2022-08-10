#include <iostream>
#include <string>
#include <vector>

using namespace std;

void upper();
void ten_it();
void it_set();
void it_cluster();

int main()
{
  //upper();
  //ten_it();
  //it_set();
  it_cluster();
  return 0;
}

void upper()
{
  string line;
  vector<string> text;
  while (getline(cin, line))
    text.push_back(line);

  // iter over first paragraph
  for(auto it = text.begin(); it != text.end() && !it->empty(); it++)
    for (auto &c : *it)
      c = toupper(c); 
  
  for (auto line : text)
    cout << line << endl;
}

void ten_it()
{
  vector<int> teni;
  for (int i = 0; i < 10; i++) teni.push_back(i);

  for(auto it = teni.begin(); it != teni.end(); it++) {
    *it*=2;
    cout << *it << endl;
  }
}

/* 
Read a set of integers into a vector. Print the sum of each pair of adjacent elements. Change your program so that it prints the sum of the first and last elements, followed by the sum of the second and second-to-last, and so on.
*/

void it_set()
{
  int in;
  vector<int> set;
  while (cin >> in)
    set.push_back(in);

  /*
  for (auto iti = set.cbegin(); iti != set.cend(); iti++)
    for (auto itj = set.cbegin(); itj != set.cend(); itj++)
      cout << *iti * *itj << endl;
  */
  
  for (auto it = set.cbegin(), end = --set.cend(); it != (set.begin() + set.size() / 2); it++, end--)
    cout << *it << " " << *end << " " << *it + *end << endl;
}

void it_cluster()
{
  vector<unsigned> scores(11, 0);  
  unsigned grade;

  auto it = scores.begin();
  
  while (cin >> grade) {
    if (grade <= 100)
      //++scores[grade/10];
      ++(*(it + grade/10));
  }

  for (int i = 0; i < scores.size(); i++) {
    cout << i << " " << scores[i] << endl;
  }
}
