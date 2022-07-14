#include <iostream>

int main(void) {
  std::cout << '\n'; 

  std::cout << "\t1" << std::endl;
    
  std::cout << "Hi \x4dO\115!\n"; // Hi MOM!
  std::cout << '\115' << '\n'; // M

  return 0;
}

