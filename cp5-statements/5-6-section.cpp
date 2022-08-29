#include <iostream>

using namespace std;

void div_ints();

int main()
{
  div_ints();

  return 0;
}


void div_ints()
{
  int n1, n2, result;
  
  cout << "Input two numbers: ";
  if (cin >> n1 >> n2) {
    cout << '\n';
    result = n1 / n2;
  }

  cout << "Div result: " << result << endl;
}
