#include <iostream>
using namespace std;

class Point{
  int x, y;

public:
  Point(int abs = 0, int ord = 0):x(abs), y(ord)
  {
    cout << "++ Appel Const. de Point : " << x << " , " << y << endl;
  }

  void affiche() const{
    cout << x << " , " << y;
  }
};

class PointCol:public Point{
  short color;
public:
  PointCol(short col, int abs, int ord): Point(abs, ord), color(col)
  {
    cout << "++ Appel Const. de PointCol : " << color << endl;
  }
  void colore(short cl){
    color = cl;
  }
};

int main(){
  PointCol pc1(10, 1, 2);
  pc1.affiche();
  return 0;
}
