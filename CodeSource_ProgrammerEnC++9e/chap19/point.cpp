#include <iostream>
#include "point.h"
using namespace std ;

       /* ------------ D�claration de la classe point ------------- */
/*class point
{              //d�claration des membres priv�s
  private :
    int x ;
    int y ;
              // d�claration des membres publics
  public :
    void initialise (int, int) ;
    void deplace (int, int) ;
    void affiche () const ;
} ;
*/
     /* ----- D�finition des fonctions membres de la classe point ---- */
void point::initialise (int abs, int ord)
{
    x = abs ; y = ord ;
}
void point::deplace (int dx, int dy)
{
    x = x + dx ; y = y + dy ;
}
void point::affiche () const
{
    cout << "Je suis en " << x << " " << y << "\n" ;
}
