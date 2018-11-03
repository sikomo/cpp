#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{ vector<pair<int, int>> note_coeff { {12, 2}, {15, 4}, {9, 1}, {11, 4}, {8, 2} } ;
  sort(note_coeff.begin(), note_coeff.end(),
     [](auto v1, auto v2) { return (v1.first*v1.second)>(v2.first*v2.second) ; } ) ;
  for (auto x:note_coeff) cout << " ( " << x.first << ", " << x.second << " ) " ;
}
