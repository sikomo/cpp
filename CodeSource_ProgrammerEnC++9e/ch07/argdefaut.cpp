#include <iostream>
using namespace std ;
void fct (int, int=12) ; // prototype avec une valeur par d�faut
int main ()
{  int n=10, p=20 ;
   fct (n, p) ;             // appel "normal"
   fct (n) ;                // appel avec un seul argument
                            // fct()  serait, ici, rejet� */
}
void fct (int a, int b)     // en-t�te "habituelle"
{
   cout << "premier argument : " << a << "\n" ;
   cout << "second argument  : " << b << "\n" ;
} 
