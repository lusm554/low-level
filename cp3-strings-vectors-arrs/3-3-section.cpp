#include <iostream>
#include <vector>
#include <cctype>

using std::cout; using std::cin; using std::endl;
using std::vector; using std::string;

void read_seq();
void check_size();
void read_seq_word();
void three_ways_define_vector();
void set_of_ints();

int main()
{
  //check_size();
  //read_seq_word();
  //three_ways_define_vector();
  set_of_ints();
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

void read_seq_word()
{
  string word;
  vector<string> text;
  while (cin >> word)
    text.push_back(word);
  
  int i = 0;
  for (auto word : text) {
    i++;
    for (auto &c : word) c = std::toupper(c);
    cout << word << " ";

    if (i == 8) {
      i = 0;
      cout << endl;
    }
  } 
  cout << endl;
}

void three_ways_define_vector()
{
  // 1
  vector<int> w1 = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};

  // 2, the best one i think
  vector<int> w2(10, 42);

  // 3
  vector<int> w3;
  for (int i = 0; i < 10; i++)
    w3.push_back(42);

  cout << w1.size() << " " << w2.size() << " " << w3.size() << endl; // 10 10 10 
}

void set_of_ints()
{
  int num;
  vector<int> nums;
  while (cin >> num)
    nums.push_back(num); 

  // sum of pairs..
  /*
  for (auto i : nums) {
    for (auto j : nums) {
      cout << "i: " << i << " j: " << j << " " << i + j << endl;
    }
  }
  */

  for (decltype(nums.size()) i = 0; i < nums.size()/2; i++) {
    int lasti = nums.size()-i-1;
    cout << nums[i] + nums[lasti] << endl;
  }
}
