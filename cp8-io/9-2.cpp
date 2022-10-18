#include <iostream>
#include <list>
#include <deque>


int main(void)
{
  std::list<std::deque<int>> wtf;

  for (int i = 0; i < 2; ++i)
  {
    std::deque<int> deq;
    for (int j = 0; j < 5; ++j)
    {
      if (j % 2 == 0)
        deq.push_front(j);
      else
        deq.push_back(j);
    }
    if (i % 2 == 0)
      wtf.push_back(deq);
    else
      wtf.push_front(deq);
  }

  for (const auto& de : wtf)
  {
    for (const auto& i : de)
    {
      std::cout << i << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}

