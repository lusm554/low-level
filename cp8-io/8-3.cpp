#include <iostream>
#include <sstream>


int main(void)
{
  std::string line;
  while (std::getline(std::cin, line))
  {
    std::istringstream record(line);
    std::string str; 
    while (record >> str)
      std::cout << str << std::endl;
  }
    
  return 0;
}

