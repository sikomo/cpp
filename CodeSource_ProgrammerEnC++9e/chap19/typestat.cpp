#include <iostream>
using namespace std ;
class point
<<<<<<< HEAD
{ protected :            // pour que x et y soient accessibles ï¿½ pointcol
=======
{ protected :            // pour que x et y soient accessibles à pointcol
>>>>>>> 186ed450f73d81e27871fc5117b084585b42ceb3
   int x, y ;
  public :
   point (int abs=0, int ord=0) { x=abs ; y=ord ; }
   void affiche ()
     { cout << "Je suis un point \n" ;
<<<<<<< HEAD
       cout << "   mes coordonnees sont : " << x << " " << y << "\n" ;
=======
       cout << "   mes coordonnees sont : " << x << " " << y << "\n" ; 
>>>>>>> 186ed450f73d81e27871fc5117b084585b42ceb3
     }
} ;
class pointcol : public point
{ 
   short couleur ;
  public :
   pointcol (int abs=0, int ord=0, short cl=1) : point (abs, ord)
<<<<<<< HEAD
     { couleur = cl ;
=======
     { couleur = cl ; 
>>>>>>> 186ed450f73d81e27871fc5117b084585b42ceb3
     }
   void affiche ()
     { cout << "Je suis un point colore \n" ;
       cout << "   mes coordonnees sont : " << x << " " << y ;
       cout << "   et ma couleur est :    " << couleur << "\n" ;
     }
} ;
int main()
{  point p(3,5) ; point * adp = &p ;
   pointcol pc (8,6,2) ; pointcol * adpc = &pc ;
   adp->affiche () ; adpc->affiche () ;
   cout << "-----------------\n" ;
<<<<<<< HEAD
   adp = adpc ;             //  adpc = adp serait rejetï¿½
=======
   adp = adpc ;             //  adpc = adp serait rejeté
>>>>>>> 186ed450f73d81e27871fc5117b084585b42ceb3
   adp->affiche () ; adpc->affiche () ;
}
