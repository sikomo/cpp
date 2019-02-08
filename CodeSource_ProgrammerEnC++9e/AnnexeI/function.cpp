#include <iostream>
#include <functional>
using namespace std ;
class cl
{ public :
   int f_memb1 (int n) { return 2*n ; }
   int f_memb2 (int n) { return n*n ; }
} ;
int f_us (int n)          // fonction usuelle
{ return 5*n ; }
int main()
{ function <int(int)> f1 ;            // f1 représete une fonction usuelle 
                                      // recevant un int et renvoyant un int
  f1 = f_us ;                         // ici f1 représente f_us
  cout << "-- f1(3) avec f_us     : " << f1(3) <<endl ;

  f1 = [] (int n) { return n*n ; } ; // ici f1 représente une lambda de même signature
  cout << "-- f1(3) avec lambda   : " <<f1(3) << endl ;

  function <int (cl &, int)>  f2 ;   // f2 représente une fonction membre de cl
                                     // recevant un int et renvoyant un int
  cl obj ;
  f2 = &cl::f_memb1 ;                // f2 représente la fonction membre f_memb1 de cl
                                     // qu'on appelle pour l'objet obj
  cout << "-- f2 avec f membre1   : " << f2 (obj, 10) << endl ;
 
  f2 = &cl::f_memb2 ;                // f2 représente la fonction membre f_memb1 de cl
                                     // qu'on appelle ici pour le même objet obj
  cout << "-- f2 avec f membre2   : " << f2 (obj, 10) << endl ;
}