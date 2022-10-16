#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void get_lines(std::vector<std::string>& ivec);

int main(void)
{
  std::vector<std::string> vec;
  get_lines(vec);

  for (auto &line : vec)
    std::cout << line << std::endl;

  return 0; 
}

void get_lines(std::vector<std::string>& ivec)
{
  std::ifstream input("io.txt"); 
  std::string line;

  while (std::getline(input, line))
    ivec.push_back(line);

  input.close();
}

