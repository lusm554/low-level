#include <iostream>
#include <string>

std::istream& read_until_eof(std::istream& in);

int main(void)
{
  read_until_eof(std::cin);

  return 0;
}


std::istream& read_until_eof(std::istream& is)
{
  std::string input;
  while(is >> input)
  {
    std::cout << input << std::endl;
  }

  is.clear();
  return is;
}


