#include <iostream>
using namespace std ;
int main()
{  int i ;
   for ( i=1 ; i<=10 ; i++ )
      { cout << "d�but tour " << i << "\n" ;
        cout << "bonjour\n" ;
        if ( i==3 ) goto sortie ;
        cout << "fin tour " << i << "\n" ;
      }
   sortie : cout << "apr�s la boucle" ;
}
