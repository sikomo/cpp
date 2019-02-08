#include <iostream>
using namespace std ;
void f ( int & n )   { cout << "f par lvalue\n"; }
void f ( int && n )  { cout << "f par rvalue\n"; }
template< class T > void essai ( T && n )
{ cout << "--- avec forward :          " ;
  f( forward <T> (n) );
  cout << "--- avec move :             " ;
  f( move (n) ) ;
  cout << "--- sans forward, ni move : " ;
  f (n) ;
}
int main()
{ cout << "Appel essai avec rvalue:\n";
  essai (5);
  cout << "Appel essai avec lvalue:\n";
  int p = 5;
  essai (p) ;
 }