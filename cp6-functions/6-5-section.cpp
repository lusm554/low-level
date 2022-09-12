#include <iostream>
#include <string>
#include <vector>

//#define NDEBUG

using namespace std;

inline bool isShorter(const string &s1, const string &s2);
void rprint(vector<int> &vec, int i);

int main()
{
  /*
	string s1 = "hello";
	string s2 = "world!";	

	cout << "s1 is horter?" << " " << (isShorter(s1, s2) ? "True." : "False.") << endl;

	s1 = "not shorter";
	cout << "s1 is horter?" << " " << (isShorter(s1, s2) ? "True." : "False.") << endl;
  */

  // recursive print
  vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 7, 9, 10};
  size_t index = vec.size() - 1;
  rprint(vec, index);

  return 0;
}

// Rewrite the isShorter function from § 6.2.2 (p. 211) to be inline.
// compare the length of two strings
inline bool isShorter(const string &s1, const string &s2) {
		return s1.size() < s2.size();
}

void rprint(vector<int> &vec, int i)
{
  #ifndef NDEBUG
  cout << "Function: " << __func__
       << " Current index: " << i
       << " Length of vec: " << vec.size() << endl;
  #endif
  if (i == 0)
  {
    cout << vec[0] << endl;
    return;
  }
  rprint(vec, i - 1);
  cout << vec[i] << endl;
}

