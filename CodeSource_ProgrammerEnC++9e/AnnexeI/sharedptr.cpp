#include <iostream>
#include <memory>    // pour la classe shared_ptr
using namespace std ;
class point
{ public :
   int x, y ;    // champs exceptionnellement publics ici
   point(int abs=0, int ord=0) : x(abs), y(ord)
     { cout << "construction point " << x << " " << y << " " << "\n" ; }
   ~point()
     {cout << "destruction point " << x << " " << y << " " << "\n" ; }
   void affiche () { cout << "coordonnees : " << x << " " << y << "\n" ; }
} ;
int main()
{ shared_ptr<point> ap1 ;
  { shared_ptr<point> ap2 = make_shared<point>(1,2) ;
       // préféré à shared_ptr<point> ap2 (new point(1,2) ;
    cout << "-- En 1 -- valeur de ap2 : " << ap2.get() << endl ;
    (*ap2).affiche() ;  // ou ap2->affiche() ;
    ap1 = ap2 ;         // ap1 et ap2 pointent sur le meme point
    cout << "-- En 2 -- valeur de ap2 : "  << ap2.get()
         << "  Unicite : " << ap2.unique() <<  endl ;
    cout << "-- En 3 -- valeur de ap1 : "  << ap1.get()
         << "  Unicite : " << ap1.unique() <<  endl ;
    ap2->x=12 ;         // on modifie l’objet par le biais de ap2
                        //  (impossible avec auto_ptr)
  }
  ap1->affiche() ;      // ap1 pointe toujours sur le point
                        //    mais ap2 n'exite plus
  // ap2->affiche() ;   serait rejeté en compilation
  cout << "-- En 4 -- Unicite de ap1 : " << ap1.unique() << endl ;
}