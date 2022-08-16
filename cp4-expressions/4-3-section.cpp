#include <string>
#include <iostream>
#include <vector>

using namespace std;

void wh_con();

int main()
{

  // 4.8
  // con1 && con2, con2 will evaluated if con1 is true
  // con1 || con2, con2 will evaluated if con1 is false 
  // con1 > con2, con1 and con2 casting to the same type
  // con1 > con2 > con3, first con1 and con2 returns bool, then bool compared with con3.
  // The best way ==> con1 > con2 && con2 > con3.
  // val == true, bool 'true' cast to the same value as 'val'. So if val is int, then val == 1.
  
  // 4.9
  const char *cp = "";
  if (cp && *cp) // if pointer is good and *cp is not empty string
    cout << cp << endl;

  // 4.10
  wh_con();

  return 0;
}

void wh_con()
{
  int in;
  while (cin >> in && in != 42)
    cout << "not 42 or EOF(((" << endl;
}
