#include <iostream>
using namespace std ;
class matrice ;        // pour pouvoir compiler la d�claration de vect

       // *********** La classe vect *******************
class vect 
{
    double v[3] ;      // vecteur � 3 composantes
  public :
    vect (double v1=0, double v2=0, double v3=0)   // constructeur
      { v[0] = v1 ; v[1]=v2 ; v[2]=v3 ; 
      }
    friend vect prod (const matrice&, const vect &) ;  // fct amie ind�pendante
  void affiche () const
      { int i ;
        for (i=0 ; i<3 ; i++) cout << v[i] << " " ;
        cout << "\n" ;
      }
} ;

       // *********** La classe matrice *****************
class matrice
{ 
    double mat[3] [3] ;       // matrice 3 X 3
  public :
    matrice (double t[3][3])    // constructeur, � partir d�un tableau 3 x 3 
      { int i ; int j ;
        for (i=0 ; i<3 ; i++) 
          for (j=0 ; j<3 ; j++) 
            mat[i] [j] = t[i] [j] ;
      }
    friend vect prod (const matrice &, const vect &) ;
} ;

        // ********** La fonction prod *****************
vect prod (const matrice & m,const vect & x)
{  int i, j ;
   double som ;
   vect res ;     // pour le r�sultat du produit
   for (i=0 ; i<3 ; i++)
     { for (j=0, som=0 ; j<3 ; j++)
          som += m.mat[i] [j] * x.v[j] ;
       res.v[i] = som ;  
     }
   return res ;
}
       // ********** Un petit programme de test *********
int main()
{  vect prod (const matrice & m,const vect & x) ;
   vect w (1,2,3) ;
   vect res  ; 
   double tb [3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 } ;
   matrice a =  tb  ;
   res = prod(a, w) ;
   res.affiche () ;
}