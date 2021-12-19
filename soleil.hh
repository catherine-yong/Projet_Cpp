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
  std::double get_masse() const{return masse;};
  std::double get_volume() const{return volume;};
  std::double get_prix() const{return prix;};
  void affiche_info() const;

  private :
  std::string nom;
  std::double masse;
  std::double volume;
  std::double prix;
};
