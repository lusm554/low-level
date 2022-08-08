#include <iostream>
#include <vector>

int main()
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

  return 0;
}
