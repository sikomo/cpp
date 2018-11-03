#include <iostream>
using namespace std;
void f (int & n)        { cout << "f(int &) \n" ; }
void f (const int & n)  { cout << "f(const int &) \n" ; }
void f (int && n)       { cout << "f(int &&) \n" ; }
int g (int n)  { return 2*n ; }
int main()
{
  int n = 3 ;
  const int p = 3 ;
  f(n) ;        // n est une lvalue
  f(p) ;        // p est aussi une lvalue constante²
  f(g(n)) ;     // g(n) est valeur tmporaire --> rvalue
  f(4) ;        // 4 est recopiée dans un emplacement temporaire (rvalue)
  f(move(n)) ;  // move(n) est une rvalue
}