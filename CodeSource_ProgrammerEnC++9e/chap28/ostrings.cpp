#include <iostream>
#include <sstream>
using namespace std ;
int main()
{ ostringstream sortie ;  
  int n=12, p=1234 ;
  float x=1.25 ;
  sortie << "n = " << n << " p = " << p ;  // on envoie des caract�res dans
                                  // sortie comme on le ferait pour un flot
  string ch1 = sortie.str() ;     // ch1 contient maintenant une copie
                                  // des caract�res engrang�s dans sortie
  cout << "ch1 premiere fois = " << ch1 << "\n" ;

  sortie << " x = " << x ;  // on peut continuer � engranger des caract�res
                            // dans sortie, sans affecter ch1
  cout << "ch1 deuxieme fois = " << ch1 << "\n" ;

  string ch2 = sortie.str() ;     // ch2 contient maintenant une copie
                                  // des caract�res engrang�s dans sortie
  cout << "ch2               = " << ch2 << "\n" ;
}