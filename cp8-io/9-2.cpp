#include <iostream>
#include <vector>
#include <list>
#include <deque>

void wtf_container(void)
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
}


bool in(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end, const int val)
{
  while (begin != end)
  {
    if (*begin == val)
      return true;
    ++begin;
  }

  return false;
} 

int main(void)
{
  //wtf_container();
  
  std::vector<int> iv = {1, 2, 3, 4};

  bool res = in(iv.cbegin(), iv.cend(), 4);
  std::cout << (res ? "true" : "false") << std::endl;

  res = in(iv.cbegin(), iv.cend(), 6);
  std::cout << (res ? "true" : "false") << std::endl;

  return 0;
}

