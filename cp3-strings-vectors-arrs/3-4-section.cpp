#include <iostream>
#include <string>
#include <vector>

using namespace std;

void upper();

int main()
{
  upper();
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

