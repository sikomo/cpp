#include <iostream>
using namespace std;
class Point
{ int x, y;
public:
  Point(int abs, int ord)
  {
          x = abs; y = ord;
          cout << " ++ Constructeur d'un point : " << x << " " << y << "\n";
  }
  ~Point()
  {
          cout << " ++ Destructeur d'un point : " << x << " " << y << "\n";
  }};
Point a(1,1);
int main()
{
        cout << "****** Debut main ******\n";
        Point b(10,10);
        int i;
        for (i=1; i<=3; i++)
        { cout << "** Boucle numero " << i << "\n";
          Point b(i,2*i); }
        cout << "****** Fin main ******\n";
}
