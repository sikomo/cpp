#include <iostream>
using namespace std;

class Point{
public:
  Point(int abs=0, int ord=0):x(abs), y(ord)
  {}

protected:
  int x, y;
};

class PointColor:public Point{
public:
  PointColor(int abs=0, int ord=0, char c = 'V'):Point(abs, ord), color(c)
  {}
  void affiche() const{
    cout << "x = " << x << ", y = "  << y << " et couleur : " << color << endl;
  }
private:
  char color;
};


int main(int argc, char const *argv[]) {
  PointColor pc1;
  pc1.affiche();

  PointColor pc2(1,2,'R');
  pc2.affiche();

  return 0;
}
