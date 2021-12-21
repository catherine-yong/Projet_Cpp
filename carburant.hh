#pragma once

#include <iostream>
#include <string>
#include "jeu.hh"
#include "plateau.hh"
#include "fusee.hh"

class Carburant : public Fusee // a voir pb héritage
{
  public :
  // constructeurs :
  Carburant();
  Carburant(const Carburant & c);

  // destructeur :
  // ~Carburant(){};

  // fonctions :
  std::string get_marque() const{return marque;};
  double get_prix() const{return prix;};
  void affiche_info() const;

  private :
  std::string marque;
  double prix;
};
