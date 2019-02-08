#include <iostream>
using namespace std;
int main()
{ auto fois2 = [] ( auto n) { return 2*n ; } ;
  auto carre = [] (auto n) { return n*n ; } ;
  cout << "fois2(5) = " << fois2(5) << endl ;
  cout << "carre(7) = " << carre(7) << endl ;
  cout << "fois2(2.6) = " << fois2(2.6) << endl ;
}