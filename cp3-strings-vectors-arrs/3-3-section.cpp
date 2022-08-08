#include <iostream>
#include <vector>

using std::cout; using std::cin; using std::endl;
using std::vector; using std::string;

void read_seq();
void check_size();

int main()
{
  check_size();

  return 0;
}

void read_seq()
{
  // 3.14 read sequence of ints
  int num;
  std::vector<int> ivec;
  while (std::cin >> num)
    ivec.push_back(num); 
  
  std::cout << ivec.size() << std::endl;

  // 3.15 read sequence of strings
  std::string word;
  std::vector<std::string> svec;
  while (std::cin >> word)
    svec.push_back(word);
  
  std::cout << svec.size() << std::endl;
}

void check_size()
{
  vector<int> v1; // 0
  vector<int> v2(10); // 10
  vector<int> v3(10, 42); // 10
  vector<int> v4{10}; // 1
  vector<int> v5{10, 42}; // 2
  vector<string> v6{10}; // 10
  vector<string> v7{10, "hi"}; // 10

  cout << v1.size() << endl;
  cout << v2.size() << endl;
  cout << v3.size() << endl;
  cout << v4.size() << endl;
  cout << v5.size() << endl;
  cout << v6.size() << endl;
  cout << v7.size() << endl;
}

