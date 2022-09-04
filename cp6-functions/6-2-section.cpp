#include <iostream>
#include <string>
#include <vector>

using namespace std;

void swap(int *a, int *b);
string::size_type find_char(const string &s, char c, string::size_type &cnt);
void swap_ref(int &a, int &b);
bool anyCapital(const string &s);
void stolower(string &s);
int get_max(int a, int* b);

//6.18 declarations
class matrix { /* details */ };

bool compare(matrix &a, matrix &b);
vector<int> change_val(int a, vector<int>::iterator iter);

int main()
{
  /*
  int a = 1, b = 2;
  cout << "a=" << a << " b=" << b << endl;
  swap(&a, &b);
  cout << "a=" << a << " b=" << b << endl;
  */

  /*
  string s = "hello world";
  char c = 'l';
  string::size_type cnt;
  
  auto index = find_char(s, c, cnt);
  cout << "Count of " << c << " in " << s << endl;
  cout << "First occurenc at " << index << " index" << endl;
  */

  /*
  int a = 101, b = 202;
  cout << "a=" << a << " b=" << b << endl;
  swap_ref(a, b);
  cout << "a=" << a << " b=" << b << endl;
  */

  /*
  string wcap = "hello";
  string wocap = "Hello";

  cout << anyCapital(wcap) << endl;
  cout << anyCapital(wocap) << endl;
  */

  /*
  string s = "HELLO";
  stolower(s);
  cout << s << endl;
  */

  int a = 0, b = 1, *bp = &b;
  cout << get_max(a, bp) << endl;

  return 0;
}

int get_max(int a, int* b)
{
  return a > *b ? a : *b;
}

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void swap_ref(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
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

bool anyCapital(const string &s)
{
  for (auto beg = s.begin(); beg != s.end(); beg++)
    if (isupper(*beg))
      return true;
  return false;
}

void stolower(string &s)
{
  for (auto &c : s)
    c = tolower(c);
}


