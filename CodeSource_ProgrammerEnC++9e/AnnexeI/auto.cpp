#include <iostream>
using namespace std ;
auto f(auto n) { return 2*n ; }
int main()
{ int n = 3 ;
  cout << "f(3) = " << f(n) << endl ;
  double x = 2.6 ;
  cout << "f(2.6) = " << f(x) << endl ;
}