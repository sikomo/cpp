#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle{
public:
  double surface() const;
  double getLongueur() const;
  double getLargeur() const;
  void setLargeur(double);
  void setLongueur(double);

private:
  double largeur;
  double longueur;
};
#endif
