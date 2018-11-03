class nombres
{ public :
    mutex ver ;        // verrou ne pouvant être acquis que par un thread à la fois
    void calcul (int n)
    { for (int i =0 ; i<n ; i++ )
      { { lock_guard<mutex> lg (ver) ;    // acquisiation du verrou ver
          nombre ++ ;
          carre = nombre * nombre ;
        }                                 // libéré à la sortie du bloc
                                          // y compris en cas d'exception
        this_thread::sleep_for (chrono::milliseconds(500)) ;
      }
    }
    void affiche (int n)
    { for (int i =0 ; i<n ; i++ )
      { { lock_guard<mutex> lg (ver) ;
          cout << nombre << " a pour carre " << carre << endl ;
        }
        this_thread::sleep_for (chrono::milliseconds(700)) ;
      }
    }
  private :
    int nombre = 0, carre ;
} ;