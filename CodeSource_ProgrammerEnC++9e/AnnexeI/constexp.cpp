#include <iostream>
using namespace std ;
constexpr f (int a, int b)
{ int c = 0 ; 
  if (a) c = a*b ;
    else c = a + b ;
   return c  ;
}
int main()
{ int n ;
  cout << "Donnez un entier : " ; cin >> n ;
  constexpr int val = f(3, 8) ;
  cout << "Resultat : " << val << endl ;
}