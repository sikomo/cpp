#include <iostream>
using namespace std ;
void sosie (int) ;            // les prototypes
void sosie (double) ;
main()                        // le programme de test
{  int n=5 ;
   double x=2.5 ;
   sosie (n) ;
   sosie (x) ; 
}
void sosie (int a)            // la premi�re fonction
{  cout << "sosie numero I   a = " << a << "\n" ;
}
void sosie (double a)         // la deuxi�me fonction
{   cout << "sosie numero II  a = " << a << "\n" ;
}
