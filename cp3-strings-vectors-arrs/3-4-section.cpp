#include <iostream>
#include <string>
#include <vector>

using namespace std;

void upper();
void ten_it();

int main()
{
  //upper();
  ten_it();
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

