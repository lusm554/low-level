#include <iostream>
#include <sstream>
#include <vector>

void read_iss(void)
{
  std::string line;
  while (std::getline(std::cin, line))
  {
    std::istringstream record(line);
    std::string str; 
    while (record >> str)
      std::cout << str << std::endl;
  }
} 

void read(std::istream& is)
{
  std::string line;
  std::vector<std::string> lines;

  // read input line by line
  while (std::getline(is, line))
  {
    lines.push_back(line); 
  }

  // read each line like an input
  for (std::string& iline : lines) 
  {
    std::istringstream record(iline);
    std::string input;

    while (record >> input)
      std::cout << input << std::endl;
  }
}

int main(void)
{
  //read_iss(); 
  
  read(std::cin);
    
  return 0;
}

