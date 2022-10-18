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

typedef std::vector<int>::const_iterator iv_iter;

bool in(iv_iter begin, iv_iter end, const int val)
{
  while (begin != end)
  {
    if (*begin == val)
      return true;
    ++begin;
  }

  return false;
} 

iv_iter get(iv_iter begin, iv_iter end, const int val)
{
  while (begin != end)
  {
    if (*begin == val)
     return begin; 
    ++begin;
  }

  return end;
}

int main(void)
{
  //wtf_container();

  std::vector<int> iv = {1, 2, 3, 4};

  bool res = in(iv.cbegin(), iv.cend(), 4);
  std::cout << (res ? "true" : "false") << std::endl;

  res = in(iv.cbegin(), iv.cend(), 6);
  std::cout << (res ? "true" : "false") << std::endl;

  iv_iter ires = get(iv.cbegin(), iv.cend(), 4);
  if(ires != iv.end())
    std::cout << "int position " << ires - iv.cbegin() << std::endl;
  else
    std::cout << "int not found" << std::endl;
 

  return 0;
}

