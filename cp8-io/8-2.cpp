#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void get_lines(std::vector<std::string>& ivec);
void append2file(std::string& fname);

int main(void)
{
  /*
  std::vector<std::string> vec;
  get_lines(vec);

  for (auto &line : vec)
    std::cout << line << std::endl;
  */

  std::string filename = "appinput.txt";
  append2file(filename);

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

void append2file(std::string& fname)
{
  std::ofstream app;
  app.open(fname, std::ofstream::app); // mode is out and append

  std::string in;
  while (std::cin >> in)
  {
    app << in;
  }

  if (app)
    app << std::endl;

  app.close();
}

