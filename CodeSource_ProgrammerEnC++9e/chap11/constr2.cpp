#include <iostream>
using namespace std ;
class test 
{ public :
   int num ;
   test (int) ;           // d�claration constructeur
   ~test () ;             // d�claration destructeur
} ;
test::test (int n)       // d�finition constructeur
{  num = n ;
   cout << "++ Appel constructeur - num = " << num << "\n" ;
}
test::~test ()           // d�finition destructeur
{  cout << "-- Appel destructeur  - num = " << num << "\n" ;
}
int main()
{  void fct (int) ;
   test a(1) ;      
   for (int i=1 ; i<=2 ; i++) fct(i) ;
}
void fct (int p)
{   test x(2*p) ;      // notez l�expression (non constante) : 2*p
} 
