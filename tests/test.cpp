#include <iostream>

using namespace std;

class B {
public:
B(int v) : varB(v){
};


int varB;
};

class A {
public:
A(int v, B *bb) : var(v), b(bb){
};


int var;
B *b;
};






int main(int argc, char const *argv[]) {
        B objetB(200);
        A objetA(10, &objetB);
        A autreObjetA = objetA;

        cout << objetA.b->varB << endl;
        cout << autreObjetA.b->varB << endl;

        objetB.varB = 50;

        cout << objetA.b->varB << endl;
        cout << autreObjetA.b->varB << endl;
        cout << &objetA<<endl;
        A *p = &objetA ;
        cout << (*p).b->varB << endl;
        B *q = &objetB;

        cout << (*q).varB << endl;
        (*q).varB = 80;
        cout << (*p).b->varB << endl;

        return 0;
}
