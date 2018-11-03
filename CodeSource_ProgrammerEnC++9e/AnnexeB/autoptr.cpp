#include <iostream>
#include <memory>    // pour la classe auto_ptr ou unique_ptr
using namespace std ;
class point
{ public :
   int x, y ;    // champs exceptionnellement publics ici
   point(int abs=0, int ord=0) : x(abs), y(ord)
   { cout <<"construction point " << x << " " << y << " " << "\n" ; }
   ~point()
   { cout <<"destruction point " << x << " " << y << " " << "\n" ; }
   void affiche () { cout << "coordonnees : " << x << " " << y << "\n" ; }
} ;

int main()
{ auto_ptr <point> ap1 ;  // unique_ptr <point> ap1 ;    à partir de C++11
  { auto_ptr <point> ap2 (new point(1, 2)) ;
     // unique_ptr <point> ap2 (new point(1, 2)) ;     à partir de C++11
     // Depuis C++14 préférer : unique_ptr <point> ap2 = make_unique<point>(1,2);
    cout << "-- En 1 -- valeur de ap2 : " << ap2.get() << endl ;
    (*ap2).affiche() ;   // ou ap2->affiche() ;
    ap1 = ap2 ;          // ap1 = move(ap2) ;  si ap1 et ap2 de type unique_ptr
     // ici, ap2 n'est plus valide (il vaut 0)
    cout << "-- En 2 -- valeur de ap2 : "  << ap2.get() << endl ;
    cout << "-- En 3 -- valeur de ap1 : "  << ap1.get() << endl ;
   // ap2->x=12 ;              // erreur d'exécution
  }
  ap1->affiche() ;              // ap1 pointe toujours sur le point
  // ap2->affiche() ;   // serait ici rejeté en compilation
}
