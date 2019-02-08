#include "../headers/rectangle.h"

double Rectangle::surface() const {
  return largeur * longueur;
}

double Rectangle::getLongueur() const {
  return longueur;
}

double Rectangle::getLargeur() const {
  return largeur;
}

void Rectangle::setLargeur(double larg){
  largeur = larg;
}

void Rectangle::setLongueur(double lon){
  longueur = lon;
}
