#include <iostream>
using namespace std ;
void echange (int a, int b) ;
int main ()
{   int n=10, p=20 ;
   cout << "avant appel   : " << n << " " << p << "\n" ;
   echange (n, p) ;
   cout << "apres appel   : " << n << " " << p << "\n" ;
}
void echange (int a, int b)
{
   int c ;
   cout << "d�but echange : "<< a << " " <<  b << "\n"  ;
   c = a ;
   a = b ;
   b = c ;
   cout << "fin echange   : " << a << " " << b << "\n"  ;
}