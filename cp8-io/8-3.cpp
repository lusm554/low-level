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

struct PersonInfo {
  std::string name;
  std::vector<std::string> phones;
};

void read_pers(std::istream& in)
{
  std::vector<PersonInfo> people;

  // get input people
  std::string line, word;
  while (std::getline(in, line))
  {
    PersonInfo info;
    std::istringstream record(line);
    record >> info.name;
    while (record >> word)
      info.phones.push_back(word);
    people.push_back(info);
  }

  // print peps from struct
  for (const auto& info : people)
  {
    std::cout << info.name << " "; 
    for (const std::string& phone : info.phones)
      std::cout << phone << " ";
    std::cout << std::endl;
  }
}

int main(void)
{
  //read_iss(); 
  //read(std::cin);
    
  read_pers(std::cin);  

  return 0;
}

