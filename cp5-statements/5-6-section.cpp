#include <iostream>

using namespace std;

void div_ints();
void zero_exception();

int main()
{
  //div_ints();
  zero_exception();

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

void zero_exception()
{
  int n1, n2, result;

  cout << "Enter two nums: " << endl;
  while (cin >> n1 >> n2) {
    try {
      if (n2 == 0) {
        throw runtime_error("Second number should no equal zero");
      }  
      result = n1 / n2;
      
      cout << "Div result: " << result << endl;
    } catch (runtime_error err) {
      cout << "Error: " << err.what() << '\n'
           << "Try again?(y/n)" << endl;
      char c;
      cin >> c;
      if (!cin || c == 'n')
        break;
      cout << "Enter two nums: " << endl;
    }
  }
}

