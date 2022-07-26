struct Foo { /* empty */ } // note: NO SEMICOLOM HERE
int main() 
{
  return 0;
}

/* ERROR
compile-err-class.cpp:1:27: error: expected ';' after struct
struct Foo { / empty / } // note: NO SEMICOLOM HERE
                          ^
                          ;
1 error generated.
*/
