#include <iostream>
#include <memory>
using namespace std;
int main()
{   double * add = new (double) ;
    *add = 12 ;
    shared_ptr<double> sptr (add) ;
    cout << "--unicite " << sptr.unique() << endl ;
    delete add ;
    cout << "--unicite " << sptr.unique() << endl ;
    cout << " valeur pointee : " << *sptr << endl ;
    double *add2 = new (double) ;
    *add2 = 20 ;
    cout << "--unicite " << sptr.unique() << endl ;
    cout << " valeur pointee : " << *sptr << endl ;
}