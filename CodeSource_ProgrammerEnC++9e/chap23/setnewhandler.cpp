#include <cstdlib>    // pour exit
#include <new>        // pour set_new_handler
#include <iostream>
using namespace std ; 

int main()
{  void deborde () ;   // proto fonction appel�e en cas manque m�moire
   set_new_handler (deborde) ;
   long taille ;
   int * adr ;
   int nbloc ;
   cout << "Taille de bloc souhaitee (en entiers) ? " ;
   cin >> taille ;
   for (nbloc=1 ; ; nbloc++)
      { adr = new int [taille] ;
        cout << "Allocation bloc numero : " << nbloc << "\n" ;
      }
}      

void deborde ()       // fonction appel�e en cas de manque m�moire
{  cout << "Memoire insuffisante\n" ;
   cout << "Abandon de l�execution\n" ;
   exit (-1) ;
}