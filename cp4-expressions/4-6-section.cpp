#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  vector<string> vec = {"hello", "world"};

  vector<string>::iterator iter = vec.begin();
 
  // iter return copy of current object, original object increments by 1, ex returns current iter value 
  //*iter++;

  // increment value of iter points to, error because of cannot increment string
  // (*iter)++;

  // error, cannot use method empty on iterator
  //*iter.empty();

  // works! 
  //iter->empty();

  // error, cannot increment value of string((
  //++*iter;
  
  // get empty() of current item, then iter increments 
  //iter++->empty();

  return 0;
}
