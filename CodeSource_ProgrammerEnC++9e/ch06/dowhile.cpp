#include <iostream>
using namespace std ;
int main ()
{  int n ;
   do
     { cout << "donnez un nb >0 : " ;
       cin >> n ;
       cout << "vous avez fourni : " << n << "\n" ;
     }
   while (n <= 0) ;
   cout << "reponse correcte" ;
}
