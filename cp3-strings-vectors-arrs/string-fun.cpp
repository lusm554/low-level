#include <iostream>
#include <string>

using std::string;
using std::cout; using std::cin; using std::endl;

void read_words(void);

int main(void)
{
  read_words();

  return 0;
}

void read_words(void)
{
  string word;
  while (cin >> word)
    cout << word << endl;
}
