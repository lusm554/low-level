#include <iostream>
#include <string>
#include <vector>

void capitalized();
void upper();

using namespace std;

int main()
{
  //capitalized();
  upper();
  return 0;
}

void capitalized()
{
  string s = "some string";
  if (s.begin() != s.end()) {
    auto it = s.begin();
    *it = toupper(*it);  
  }

  cout << s << endl;
}

void upper()
{
  string s;
  if (!(cin >> s))
    return;

  for (auto it = s.begin(); it != s.end() && !isspace(*it); it++)
    *it = toupper(*it);

  cout << s << endl;
}

