#include <iostream>
namespace A
{ void f(char c) { std::cout << "f(char)\n" ; }  // std car pas de using 
  void f(int n)  { std::cout << "f(int)\n" ;  }  
}
using A::f ;    // on aurait la m�me chose avec using namespace A
int main()
{ int n=10 ; char c='a' ;
  f(n) ;
  f(c) ;
}
