#include <iostream>
using namespace std;
void f (int && n) { cout << "-- appel f(int && n) " << endl ; }
void f (int & n)  { cout << "-- appel f(int & n) " << endl ; }
template< class T > void essai ( T&& n )
{ f (forward <T> (n) ) ; }   // f reçoit une rvalue ou une lvalue en accord
                             // avec la nature de n reçue par essai
int main()
{ essai (5) ;     // 5 est une rvalue qui peut se lier à T&& n --> appel essai
                  // qui appelle f sur la rvalue n --> appel f(int && n)
  int p = 5 ;
  essai (p);      // p est une lvalue qui peut se lier à T&& n --> appel essai
                  // qui appelle f sur la lvalue n --> appel f(int & n)
}