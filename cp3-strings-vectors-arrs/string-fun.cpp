#include <iostream>
#include <string>

using std::string;
using std::cout; using std::cin; using std::endl;

void read_words(void);
void get_line(void);
void basic_iterate_str(void);
void change_str(void);

int main(void)
{
  //read_words();
  //get_line();
  //basic_iterate_str();
  change_str();
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

void change_str(void)
{
  // to upper
  string str = "Hello World!";
  for (auto &c : str)
    c = std::toupper(c);

  cout << str << endl;

  // first char to upper
  string s = "some string";
  if (!s.empty())
    s[0] = std::toupper(s[0]);

  cout << s << endl;

  // first word to upper
  string words = "how are you?";
  for (decltype(words.size()) i = 0; i != words.size() && !isspace(words[i]); ++i) {
    words[i] = toupper(words[i]);
  }

  cout << words << endl;

}

