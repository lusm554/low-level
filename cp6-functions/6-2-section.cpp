#include <iostream>
#include <string>

using namespace std;

void swap(int *a, int *b);
string::size_type find_char(const string &s, char c, string::size_type &cnt);

int main()
{
  /*
  int a = 1, b = 2;
  cout << "a=" << a << " b=" << b << endl;
  swap(&a, &b);
  cout << "a=" << a << " b=" << b << endl;
  */

  string s = "hello world";
  char c = 'l';
  string::size_type cnt;
  
  auto index = find_char(s, c, cnt);
  cout << "Count of " << c << " in " << s << endl;
  cout << "First occurenc at " << index << " index" << endl;

  return 0;
}


void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

string::size_type find_char(const string &s, char c, string::size_type &cnt)
{
  auto ret = s.size();
  cnt = 0;
  for (decltype(ret) i = 0; i != s.size(); ++i) {
    if (s[i] == c)
      if (ret == s.size())
        ret = i;
    ++cnt;
  }
  return ret;
}


