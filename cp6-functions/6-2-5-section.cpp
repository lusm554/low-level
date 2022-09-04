#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
  /*
  string res = "";

  for (int i = 1; i < argc; i++) 
    res += argv[i] + string(" ");

  cout << res << endl;
  */

  for (int i = 0; i < argc; i++)
    cout << i << ":\t" << argv[i] << endl;

  return 0;
}
