#include <iostream>
#include <string>

using std::string;
using std::cout; using std::cin; using std::endl;

void read_words(void);
void get_line(void);
void basic_iterate_str(void);

int main(void)
{
  //read_words();
  //get_line();
  basic_iterate_str();
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
    if (!line.empty() && line.size() < 80)
      cout << line << endl;
}

void basic_iterate_str(void)
{
  string str = "some string";

  for (auto c : str)
    cout << c << endl;


  string check_punc = "Hello, World!!";
  decltype(check_punc.size()) cnt = 0; 

  for (auto c : check_punc)
    if (std::ispunct(c))
      cnt++;
  cout << cnt << " punctuation chars in " << check_punc << endl; 
}
