#include <string>
#include <iostream>
#include <vector>

using namespace std;

void wh_con();
void which_greater();

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
  //wh_con();

  // 4.11
  //which_greater();

  // 4.12
  // i != j < k means that i != j returns bool value that compared with k, hence k compared with 1/0.
  int i = 1, j = 11, k = 10;

  if (i != j && j < k)
    cout << "should not appear" << endl;

  if (i != j < k) // because i != j returns bool, which cast to 1
    cout << "should not appear" << endl;

  return 0;
}

void wh_con()
{
  int in;
  while (cin >> in && in != 42)
    cout << "not 42 or EOF(((" << endl;
}

void which_greater()
{
  int d = 1, c = 2, b = 3, a = 4;

  if (a > b && b > c && c > d)
    cout << "bruh" << endl;
}

