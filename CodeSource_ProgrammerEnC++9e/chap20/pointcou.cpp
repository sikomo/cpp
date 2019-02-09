<<<<<<< HEAD
#include <iostream>
=======
##include <iostream>
>>>>>>> 186ed450f73d81e27871fc5117b084585b42ceb3
using namespace std ;
class point
{  int x, y ;
  public :
<<<<<<< HEAD
   point (int abs, int ord)
=======
   point (int abs, int ord) 
>>>>>>> 186ed450f73d81e27871fc5117b084585b42ceb3
     { cout << "++ Constr. point \n" ; x=abs ; y=ord ;
     }
   ~point () { cout << "-- Destr. point \n" ; }
   void affiche () const
    { cout << "Coordonnees : " << x << " " << y << "\n" ;
    }
} ;

class coul
{  short couleur ;
  public :
<<<<<<< HEAD
   coul (int cl)
=======
   coul (int cl) 
>>>>>>> 186ed450f73d81e27871fc5117b084585b42ceb3
     { cout << "++ Constr. coul \n" ; couleur = cl ;
     }
   ~coul () { cout << "-- Destr.  coul \n" ; }
   void affiche () const
     { cout << "Couleur : " << couleur << "\n" ;
     }
} ;

<<<<<<< HEAD
class pointcoul : public point, public coul
=======
class pointcoul : public point, public coul 
>>>>>>> 186ed450f73d81e27871fc5117b084585b42ceb3
{  public :
    pointcoul (int, int, int) ;
    ~pointcoul () { cout << "---- Destr. pointcoul \n" ; }
    void affiche () const
<<<<<<< HEAD
     { point::affiche () ; coul::affiche () ;
     }
=======
     { point::affiche () ; coul::affiche () ; 
     } 
>>>>>>> 186ed450f73d81e27871fc5117b084585b42ceb3
} ;
pointcoul::pointcoul (int abs, int ord, int cl) : point (abs, ord), coul (cl)
{  cout << "++++ Constr. pointcoul \n" ;
}

int main()
{  pointcoul p(3,9,2) ;
   cout << "------------\n" ;
   p.affiche () ;                 // appel de affiche de pointcoul
   cout << "------------\n" ;
<<<<<<< HEAD
   p.point::affiche () ;          // on force lï¿½appel de affiche de point
   cout << "------------\n" ;
   p.coul::affiche () ;           // on force lï¿½appel de affiche de coul
=======
   p.point::affiche () ;          // on force l’appel de affiche de point
   cout << "------------\n" ;
   p.coul::affiche () ;           // on force l’appel de affiche de coul
>>>>>>> 186ed450f73d81e27871fc5117b084585b42ceb3
   cout << "------------\n" ;
}
