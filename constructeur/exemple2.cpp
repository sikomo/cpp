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
  }
};

void fct(Point *);

int main4()
{
        Point * adr;
        cout << "****** Debut main ******\n";
        adr = new Point(3,7);
        fct(adr);
        cout << "****** Fin main ******\n";
}

void fct(Point * adp){
  cout << "****** Debut fct ******\n";
  delete adp;
  cout << "****** Fin fct ******\n";
}
