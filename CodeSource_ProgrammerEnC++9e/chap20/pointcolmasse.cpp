#include <iostream>
using namespace std ;
class point
{ int x, y ;
  public :
   point (int abs, int ord)
     { cout << "++ Constr. point " << abs << " " << ord << "\n" ;
       x=abs ; y=ord ;
     }
<<<<<<< HEAD
   point ()  // constr. par dï¿½faut nï¿½cessaire pour dï¿½rivations virtuelles
=======
   point ()  // constr. par défaut nécessaire pour dérivations virtuelles
>>>>>>> 186ed450f73d81e27871fc5117b084585b42ceb3
     { cout << "++ Constr. defaut point \n" ; x=0 ; y=0 ; }
   void affiche () const
    { cout << "Coordonnees : " << x << " " << y << "\n" ;
    }
} ;
class coul
{  short couleur ;
  public :
   coul (short cl)
     { cout << "++ Constr. coul " << cl <<  "\n" ;
       couleur = cl ;
     }
   void affiche () const
     { cout << "Couleur : " << couleur << "\n" ;
     }
} ;

class masse
{  int mas ;
  public :
   masse (int m)
     { cout << "++ Constr. masse " << m << "\n" ;
       mas = m ;
     }
   void affiche () const
     { cout << "Masse   : " << mas << "\n" ;
     }
 } ;

class pointcoul : public virtual point, public coul
{ public :
    pointcoul (int abs, int ord, int cl) : coul (cl)
<<<<<<< HEAD
      // pas dï¿½info pour point car dï¿½rivation virtuelle
=======
      // pas d’info pour point car dérivation virtuelle
>>>>>>> 186ed450f73d81e27871fc5117b084585b42ceb3
    { cout << "++++ Constr. pointcoul " << abs << " " << ord << " "
                                        << cl << "\n" ;
    }
    void affiche () const
     { point::affiche () ; coul::affiche () ;
     }
} ;

class pointmasse : public virtual point, public masse
{ public :
    pointmasse (int abs, int ord, int m) : masse (m)
<<<<<<< HEAD
     // pas dï¿½info pour point car dï¿½rivation virtuelle
    { cout << "++++ Constr. pointmasse " << abs << " " << ord << " "
=======
     // pas d’info pour point car dérivation virtuelle
    { cout << "++++ Constr. pointmasse " << abs << " " << ord << " " 
>>>>>>> 186ed450f73d81e27871fc5117b084585b42ceb3
                                         << m << "\n" ;
    }
    void affiche () const
     { point::affiche () ; masse::affiche () ;
     }
} ;

class pointcolmasse : public pointcoul, public pointmasse
{ public :
    pointcolmasse (int abs, int ord, short c, int m) : point (abs, ord),
      pointcoul (abs, ord, c), pointmasse (abs, ord, m)
      // infos abs ord en fait inutiles pour pointcol et pointmasse
<<<<<<< HEAD
    { cout << "++++ Constr. pointcolmasse " << abs << " " << ord << " "
=======
    { cout << "++++ Constr. pointcolmasse " << abs + " " << ord << " "
>>>>>>> 186ed450f73d81e27871fc5117b084585b42ceb3
                                            << c << " " << m << "\n" ;
    }
    void affiche () const
     { point::affiche () ; coul::affiche() ; masse::affiche () ;
     }
} ;

int main()
{  pointcoul p(3,9,2) ;
   p.affiche () ;                 // appel de affiche de pointcoul
   pointmasse pm(12, 25, 100) ;
   pm.affiche () ;
   pointcolmasse pcm (2, 5, 10, 20) ;
   pcm.affiche () ;
   int n ; cin >> n ;
}
