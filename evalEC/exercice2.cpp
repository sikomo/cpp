#include <iostream>

using namespace std;

// 1/
class Etudiant

{ private:

  char nom[50], prenom[50];

  float tabnotes[10];

public:

  void saisie ();

  void affichage ();

  float moyenne();

  int admis();

  int exae_quo (Etudiant E); };

void Etudiant ::saisie ()

{
        int i;

        cout << "Donner le nom :";

        cin >> nom;

        cout << "Donner le prénom :";

        cin >> prenom;

        cout << "Saisie des notes \n";

        for (i = 0; i < 10; i++)

        {

                cout << "Donner la note N°" << i<< " : ";

                cin >> tabnotes[i];

        }

}

void Etudiant ::affichage ()

{
        int i;

        cout << "Le nom :"<<nom<< endl;

        cout << "Le prénom :" <<prenom<< endl;

        for (i = 0; i < 10; i++)

                cout << "La note N°" << i << "est " << tabnotes[i]<< endl;

}

float Etudiant ::moyenne()

{
        int i;

        float som = 0;

        for (i = 0; i < 10; i++)

                som += tabnotes[i];

        return (som/10);

}

int Etudiant ::admis()

{
        if (moyenne() >= 10) return (1); else return (0);
}

int Etudiant ::exae_quo(Etudiant E)

{
        if (moyenne() == E.moyenne()) return (1); else return (0);
}

// 2/

//a) Les méthodes qui sont à redéfinir dans la classe Etudiant_en_Maitrise sont
//: saisie, affichage, admis et esae_quo.

//b)

class Etudiant_en_Maitrise : public Etudiant

{ private:

  float note_memoire;

public:

  void saisie ();

  void affichage ();

  int admis();

  int exae_quo(Etudiant_en_Maitrise E); 
};

void Etudiant_en_Maitrise ::saisie ()

{
        Etudiant ::saisie ();

        cout << "Donner la note du mémoire :";

        cin >> note_memoire;

}

void Etudiant_en_Maitrise ::affichage ()

{
        Etudiant :: affichage ();

        cout << "La note du mémoire :" << note_memoire<< endl;

}

int Etudiant_en_Maitrise ::admis()

{
        if ((moyenne() >= 10) && (note_memoire >=10)) return (1); else return (0);
}

int Etudiant_en_Maitrise ::exae_quo(Etudiant E)

{
        if ((moyenne() == E.moyenne()) && (note_memoire == E.note_memoire)) return (1); else return (0);
}
