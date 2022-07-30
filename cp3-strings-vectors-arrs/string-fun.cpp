#include <iostream>
#include <string>

using std::string;
using std::cout; using std::cin; using std::endl;

void read_words(void);
void get_line(void);

int main(void)
{
  //read_words();
  get_line();
  return 0;
}

void read_words(void)
{
  string word;
  while (cin >> word)
    cout << word << endl;
}

void get_line(void)
{
  string line;
  while (getline(cin, line))
    if (!line.empty())
      cout << line << endl;
}

