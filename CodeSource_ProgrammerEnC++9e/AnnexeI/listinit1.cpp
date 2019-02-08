#include <iostream>
using namespace std;
void f (initializer_list<float> val)       // val est une liste de int
{ cout << val.size() << " Valeurs : " ;
  for (float v : val) cout << v << "  " ;  // forme g�n�ralis�e de for
  cout << endl ;                           //   pr�sent�e plus loin
}
int main()
{ f({1.5, 2.3}) ;              // liste de 2 valeurs de type float
  f({}) ;   // liste vide (attention f {} serait consid�r� comme f sans arguments)
  f ({1.25, 5, 9, 3.4, 7 }) ;  // liste de 5 valeurs convertibles en float
}