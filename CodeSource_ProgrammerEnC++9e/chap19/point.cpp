#include <iostream>
<<<<<<< HEAD
#include "point.h"
using namespace std ;

/* komo */

       /* ------------ Dï¿½claration de la classe point ------------- */
/*class point
{              //dï¿½claration des membres privï¿½s
  private :
    int x ;
    int y ;
              // dï¿½claration des membres publics
  public :
    void initialise (int, int) ;
    void deplace (int, int) ;
    void affiche () const ;
} ;
*/
     /* ----- Dï¿½finition des fonctions membres de la classe point ---- */
void point::initialise (int abs, int ord)
{
    x = abs ; y = ord ;
}
void point::deplace (int dx, int dy)
{
=======
using namespace std ;

       /* ------------ Déclaration de la classe point ------------- */
class point
{              /* déclaration des membres privés */
  private :
    int x ;
    int y ;
              /* déclaration des membres publics */
  public :
    void initialise (int, int) ;
    void deplace (int, int) ;
    void affiche () ;
} ;

     /* ----- Définition des fonctions membres de la classe point ---- */
void point::initialise (int abs, int ord)
{    
    x = abs ; y = ord ;
}
void point::deplace (int dx, int dy)
{  
>>>>>>> 186ed450f73d81e27871fc5117b084585b42ceb3
    x = x + dx ; y = y + dy ;
}
void point::affiche () const
{
    cout << "Je suis en " << x << " " << y << "\n" ;
}
