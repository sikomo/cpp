#include <iostream>
#include <string>
#include "../headers/rectangle.h"

using namespace std;


void afficcherMessage(string);

int main(int argc, char const *argv[]) {
  Rectangle r1;

  r1.setLargeur(3.0);
  r1.setLongueur(4.0);

  afficcherMessage("Voici les resultats : ");


  cout << r1.getLargeur() << endl;
  cout << r1.getLongueur() << endl;

  return 0;
}

void afficcherMessage(string msg){
  cout << msg << endl;
}
