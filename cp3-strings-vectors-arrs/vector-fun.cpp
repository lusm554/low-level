#include <iostream>
#include <vector>

using std::cout; using std::cin; using std::endl;
using std::vector; using std::string;

void fill_vector();

int main()
{
  fill_vector();

  return 0;
}

void fill_vector()
{
  vector<int> v;
  for (int i = 0; i < 100; i++)
    v.push_back(i);
  
  cout << v[99] << endl;

  vector<string> text;
  string word; 
  while (cin >> word)
    text.push_back(word);
  cout << "Count of words: " << text.size() << endl;
}

