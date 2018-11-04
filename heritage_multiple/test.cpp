#include <iostream>
using namespace std;

class Ovipare {
public:
Ovipare(unsigned int nb_eggs) : nb_oeufs(nb_eggs){
}
void afficher() const;

private:
unsigned int nb_oeufs;
};

class Vivipare {
public:
Vivipare(unsigned int duree_gest) : duree_gestation(duree_gest){
}
void afficher() const;

private:
unsigned int duree_gestation;
};


class Ovovivipare : public Ovipare, public Vivipare
{
public:
Ovovivipare(unsigned int nb_oeufs, unsigned int duree_gestation, bool rarete) :
        Ovipare(nb_oeufs),
        Vivipare(duree_gestation),
        espece_rare(rarete){
}

private:
bool espece_rare;
};

void Ovipare::afficher() const{
  cout << "Nombre d'oeufs : " << nb_oeufs << endl;
}

void Vivipare::afficher() const{
  cout << "Duree_gestation : " << duree_gestation << endl;
}


int main(int argc, char const *argv[]) {
        Ovovivipare o(10, 12, true);
        o.Vivipare::afficher();
        o.Ovipare::afficher();
        return 0;
}
