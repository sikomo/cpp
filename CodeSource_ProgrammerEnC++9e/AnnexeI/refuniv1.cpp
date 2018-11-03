#include <iostream>
using namespace std;
void f(int && n) { cout << " -- f ( int && ) --" << endl ; }
template <class T> void g (T&& n) { cout << " -- g( T&& ) ---" << endl ; }
int main()
{  f(5) ;
   int n = 5 ;
   //  f(n) ;   // serait rejeté
   g(n) ;     // OK  --> g(T&&)
   g(5) ;     // OK -->  g(T&&)
}