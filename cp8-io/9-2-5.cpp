#include <iostream>
#include <string>
#include <vector>
#include <list>

int main(void)
{
  std::list<char *> lch {"a", "b"};
  std::vector<std::string> vs;

  vs.assign(lch.begin(), lch.end());

  for (auto &ch : vs)
    std::cout << ch << std::endl;

  return 0;
}

