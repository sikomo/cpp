#include <iostream>
using namespace std ;
int main ()
{  int i ;
   for ( i=1 ; i<=10 ; i++ )
      { cout << "d�but tour " << i << "\n" ;
        cout << "bonjour\n" ;
        if ( i==3 ) break ;
        cout << "fin tour " << i << "\n" ;
      }
   cout << "apr�s la boucle\n" ;
}
