#include <iostream>
#include <vector>
#include <list>

int main(void)
{
  std::list<int> li = {1, 2, 3};
  std::vector<int> vi = {4, 5, 6};

  std::vector<double> vd1(li.begin(), li.end());
  std::vector<double> vd2(vi.begin(), vi.end());

  for (int i = 0; i < 3; i++)
  {
    std::cout << vd1[i] << " " << vd2[i] << std::endl;
  }

  return 0;
}

