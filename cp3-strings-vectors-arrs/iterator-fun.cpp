#include <iostream>
#include <string>
#include <vector>

void capitalized();
void upper();
void until_empty();

using namespace std;

int main()
{
  //capitalized();
  //upper();
  until_empty();
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

void until_empty()
{
  string curr_word;
  vector<string> text;
  while (cin >> curr_word)
    text.push_back(curr_word);

  for (auto it = text.cbegin(); it != text.cend() && !it->empty(); it++)
    cout << *it << endl;
}
