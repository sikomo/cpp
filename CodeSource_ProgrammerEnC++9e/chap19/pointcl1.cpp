#include <iostream>
<<<<<<< HEAD
#include "point.h"     // incorporation des d�clarations de point
using namespace std ;
       /* --- D�claration et d�finition de la classe pointcol ----- */
class pointcol : public point        // pointcol d�rive de point
=======
#include "point.h"     // incorporation des d�clarations de point
using namespace std ;
       /* --- D�claration et d�finition de la classe pointcol ----- */
class pointcol : public point        // pointcol d�rive de point
>>>>>>> 186ed450f73d81e27871fc5117b084585b42ceb3
{  short couleur ;
 public :
   void colore (short cl)  { couleur = cl ; }
} ;
int main()
{ pointcol p ;
  p.initialise (10,20) ; p.colore (5) ;
  p.affiche () ;
  p.deplace (2,4) ;
  p.affiche () ;
}
