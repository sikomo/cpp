#include <iostream>
using namespace std;
int main()
{
    enum class couleur  { jaune, rouge=3, bleu, vert } coul1 ;
    enum couleur_bois { noir, rouge } bois ;
    couleur coul2 ;
    coul1 = couleur::vert ;
    coul2 = coul1 ;
    bois = couleur_bois::rouge ;
    int n = static_cast<int>(coul1) ;      // n = c1  serait rejete
    cout << "couleur coul1 = " << static_cast<int>(coul1) << endl ;   // cast necessaire ici
    coul1 = static_cast<couleur>(12325) ;                     // accdpté mais non sens
    cout << "couleur coul1 = " << static_cast<int> (coul1 ) << endl ;
}