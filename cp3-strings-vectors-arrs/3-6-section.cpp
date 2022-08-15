#include <iostream>
#include <string>
#include <vector>

using namespace std;

void dif_2dim_vec();
  
int main()
{
  dif_2dim_vec();
  return 0;
}

void dif_2dim_vec()
{
  // range for
  // ordinary for, using subscripts
  // ordinary for, using pointers
  
  int ia[3][4] = {
    {0, 1, 2, 3},
    {4, 5, 6, 7},
    {8, 9, 10, 11}
  };

  // range for
  for (int (&r1)[4] : ia) {
    for (int (&r2) : r1) {
      cout << r2 << " ";
    }
    cout << endl;
  }

  // using subscripts
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cout << ia[i][j] << " ";
    }
    cout << endl;
  }


}

