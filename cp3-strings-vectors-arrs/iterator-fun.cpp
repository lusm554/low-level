#include <iostream>
#include <string>
#include <vector>

void capitalized();

using namespace std;

int main()
{
  capitalized();
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
