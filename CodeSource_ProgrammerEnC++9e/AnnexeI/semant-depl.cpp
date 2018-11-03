#include <iostream>
#include <memory>
using namespace std ;
class vect
{  int nelem ;                             // nombre d’éléments
   unique_ptr<double[]> adr = nullptr ;    // pointeur sur ces éléments
  public :
   vect (const int n)                      // constructeur "usuel"
   { adr = unique_ptr<double[]>(new double [nelem = n]) ;
     cout << "+ const. usuel   - obj cree : " << this << " - " << adr.get() << endl ;
   }
  vect (const vect & v)                     // constructeur de recopie
   { adr = unique_ptr<double[]> ( new double [nelem = v.nelem]) ;
     int i ; for (i=0 ; i<nelem ; i++) adr[i]=v.adr[i] ;
     cout << "+ const. recopie - obj cree : " << this << " - " << adr.get() << endl ;
   }
  vect (vect && v)                          // constructeur de déplacement
   { adr = move(v.adr) ; nelem = v.nelem ; v.adr = nullptr ;
     cout << "+ const. depl - obj cree    : " << this << " - "  << adr.get() << endl ;
     cout << "              - obj deplace : " << &v << " - "  << v.adr.get() << endl ;
   }
   vect & operator= (vect && v)             // affectation par déplacement
   { cout << "+ Avant affec - depl de     : " << &v << " - " << v.adr.get() << endl ;
     cout << "              - vers        : " << this << " - " << adr.get() << endl ;
     nelem = v.nelem ; adr = move(v.adr) ; v.adr = nullptr ;
     cout << "  Apres affec - depl de     : " << &v << " - " << v.adr.get() << endl ;
     cout << "              - vers        : " << this << " - " << adr.get() << endl ;
     return *this ;
   }
   ~vect ()                        // destructeur
   { cout << "- Destr. objet              : " << this << " - " << adr.get() << "\n" ;
   }
} ;
vect  fct (vect  v)
{ cout << "*** appel de fct ***\n" ;
  return v ;
}
int main()
{ vect a(5) ;
  vect b(fct(a)) ;  // fct(a) temporaite -> appel cr par deplacement
  a = move(b) ;     // appel affectation par deplacement
  // a = b ;        // ici, serait rejeté en compilation puisque l’opérateur
                    //   d’affectation par défaut n’est pas généré (voir remarque)
 }
