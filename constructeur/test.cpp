#include <iostream>
using namespace std;

class B{
public:
  int varB;

};

class A{
public:
  B *b;
};


int main(){
  A a;
  a.b = new B;
  a.b->varB = 0;

  A aa(a);

  cout << "a.b->varB = " << a.b->varB << endl;
  cout << "aa.b->varB = " << aa.b->varB << endl;

  aa.b->varB = 1;

  cout << "a.b->varB = " << a.b->varB << endl;
  cout << "aa.b->varB = " << aa.b->varB << endl;

}
