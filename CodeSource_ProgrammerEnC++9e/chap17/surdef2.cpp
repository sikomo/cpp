#include <iostream>
using namespace std ;

   // patron num�ro I
template <class T> T min (T a, T b)
{  if (a < b) return a ;
         else return b ;
}

   // patron num�ro II
template <class T> T min (T * a, T b)
{  if (*a < b) return *a ;
          else return b ;
}

   // patron num�ro III
template <class T> T min (T a, T * b)
{  if (a < *b) return a ;
          else return *b ;
}

int main()
{
  int n=12, p=15 ;
  float x=2.5, y=5.2 ;
  cout << min (n, p) << "\n" ;   // patron num�ro I    int min (int, int)
  cout << min (&n, p) << "\n" ;  // patron num�ro II   int min (int *, int)
  cout << min (x, &y) <<"\n" ;   // patron num�ro III  float min (float, float *)
  cout << min (&n, &p) << "\n" ; // patron num�ro I    int * min (int *, int *)
}
