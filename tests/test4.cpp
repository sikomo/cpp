#include <iostream>
#include <cmath>
using namespace std;



int main(int argc, char const *argv[]) {
  double a(2.225);
  double b(sqrt(a));
  double z(a - b * b);
  if (z == 0){
    cout << "a = b * b" << endl;
  }else{
    cout << "a != b * b" << endl;
  }

  cout << "En fait : " << endl;
  cout << "a - b * b = " << a - b * b << endl;
  return 0;
}
