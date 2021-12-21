#pragma once

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
  // ~Soleil(){};

  // fonctions :
  std::string get_nom()  {return nom;};
  double get_masse()  {return masse;};
  double get_volume() {return volume;};
  double get_prix() {return prix;};
  void affiche_info() ;

  private :
  std::string nom;
  double masse;
  double volume;
  double prix;
  Jeu *j;
};
