#include <iostream>
using namespace std ;
int main ()
{  int i ;
   for ( i=1 ; i<=5 ; i++ )
      { printf ("d�but tour %d\n", i) ;
        if (i<4) continue ;
        printf ("bonjour\n") ;
      }
}
