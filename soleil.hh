#include <iostream>
#include <string>
#include "jeu.hh"
#include "plateau.hh"

class Soleil : public Plateau
{
  public :
  // constructeurs :
  Soleil();
  Soleil(const Soleil & s);

  // destructeur :
  ~Soleil(){};

  // fonctions :
  std::string get_nom() const{return nom;};
  double get_masse() const{return masse;};
  double get_volume() const{return volume;};
  double get_prix() const{return prix;};
  void affiche_info() const;

  private :
  std::string nom;
  double masse;
  double volume;
  double prix;
};
