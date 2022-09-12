#include <iostream>
#include <string>

using namespace std;

inline bool isShorter(const string &s1, const string &s2);

int main()
{
	string s1 = "hello";
	string s2 = "world!";	

	cout << "s1 is horter?" << " " << (isShorter(s1, s2) ? "True." : "False.") << endl;

	s1 = "not shorter";
	cout << "s1 is horter?" << " " << (isShorter(s1, s2) ? "True." : "False.") << endl;


  return 0;
}

// Rewrite the isShorter function from § 6.2.2 (p. 211) to be inline.

// compare the length of two strings
inline bool isShorter(const string &s1, const string &s2) {
		return s1.size() < s2.size();
}
