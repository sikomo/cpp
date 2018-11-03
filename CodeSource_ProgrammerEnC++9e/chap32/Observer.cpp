#include <iostream>
#include <vector>
#include <string>
using namespace std ;
class AbscisseObservable ;   // d�claration anticip�e
class ObservateurDAbscisses
{ public :
    virtual void actualise (AbscisseObservable *p) = 0 ;
    virtual ~ObservateurDAbscisses () {} ;
} ;
class AbscisseObservable
{ public :
    virtual void enregistre (ObservateurDAbscisses *obs)
    { observateurs.push_back (obs) ;
    }
    virtual void prevenir() // faut-il virtual ici
    { for (unsigned int i=0 ; i<observateurs.size() ; i++) 
        observateurs[i]->actualise(this) ;
    }
    virtual int getX () = 0 ;
    virtual string getNom () = 0 ;
    virtual ~AbscisseObservable () {}
  private :
    vector <ObservateurDAbscisses *> observateurs  ;
} ;
class Point : public AbscisseObservable
{ public :
    Point (string nom, int x, int y)
    { this->nom = nom ; this->x = x ; this->y = y ; }
    void deplace (int dx, int dy)
    { x += dx ; y += dy ;
      if (dx != 0) prevenir() ;
    }
    int getX () { return x ; }
    string getNom () { return nom ; }
  private :
    int x, y ;
    string nom ;
} ;
class Cercle : public AbscisseObservable
{ public :
    Cercle (string nom, int x, int y, float r)
    { this->nom = nom ; this->x = x ; this->y = y ; 
      this->rayon = rayon ; 
    }
    void deplace (int dx, int dy)
    { x += dx ; y += dy ;
      if (dx != 0) prevenir() ;
    }
    int getX () { return x ; }
    string getNom () { return nom ; }
  private :
    int x, y ;
    float rayon ;
    string nom ;
} ;
class ObservateurA : public ObservateurDAbscisses  // affiche nouvelle abscisse
{ public :
   void actualise (AbscisseObservable *objet)
   { cout << "Nouvelle abscisse " << objet->getX() << endl ;
   }
} ;
class ObservateurB : public ObservateurDAbscisses  // affiche abscisse et nom
{ public :
   void actualise (AbscisseObservable *objet)
   { cout << "Nouvelle abscisse " << objet->getX()
          << " dans objet de nom " << objet->getNom() << endl ;
   }
} ;

int main ()
{ ObservateurA obsA ; ObservateurB obsB ;
  Point *p1 = new Point("A", 3, 5) ;
  Point *p2 = new Point ("B", 2, 2) ;
  Cercle *c = new Cercle ("C", 3, 8, 2.5f) ;
  p1->deplace (3, 9) ;      // ici, on n'est pas prevenu
  p1->enregistre (&obsA) ;  // obsA observe maintenant p1
  p1->deplace (2, 8) ;      // ici, obsA previent pour p1
  p2->deplace (3, 2) ;      //   mais pas pour p2
  p2->enregistre (&obsA) ;  // obsA observe maintenant p1 et p2
  p1->deplace (1, 8) ;      // ici, on est prevenu par obsA pour p1
  p2->deplace (2, 2) ;      //   et pour p2
  p1->enregistre (&obsB) ;  // p1 est maintenant obsrv� par obsA et obsB
  p1->deplace (5, 2) ;      // on est prevenu pour p1 par obsA et obsB
  c->enregistre (&obsB) ;   // c est maintenant observe par obsB
  c->deplace (2, 2) ;       // on est prevenu par c par obsB
}
