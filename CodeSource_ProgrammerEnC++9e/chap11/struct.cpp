#include <iostream>
using namespace std ;
       /* ------------ D�claration du type point ------------- */
struct point
{              /* d�claration "classique" des donn�es */
    int x ;
    int y ;
          /* d�claration des fonctions membres (m�thodes) */
    void initialise (int, int) ;
    void deplace (int, int) ;
    void affiche () ;
} ;

     /* ----- D�finition des fonctions membres du type point ---- */
void point::initialise (int abs, int ord)
{   x = abs ; y = ord ;
}
void point::deplace (int dx, int dy)
{   x += dx ; y += dy ;
}
void point::affiche ()
{   cout << "Je suis en " << x << " " << y << "\n" ;
}

int main()
{  point a, b ;
   a.initialise (5, 2) ; a.affiche () ;
   a.deplace (-2, 4) ;  a.affiche () ;
   b.initialise (1,-1) ; b.affiche () ;
}
