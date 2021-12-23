#pragma once

#include <iostream>
#include <string>
#include "jeu.hh"
#include "plateau.hh"

class Planete : public Plateau
{
  public :
  // constructeurs :
  Planete();
  Planete(const Planete & p);

  // destructeur :
  //~Planete(){};

  // fonctions :
  std::string get_nom() const{return nom;};
  double get_masse() const{return masse;};
  //std::vector<int> v;
  double get_volume() const{return volume;};
  double get_distance() const{return distance_soleil;};
  double get_prix() const{return prix;};
  void affiche_info() const;

  private :
  std::string nom;
  double masse;
  // vector<string> lunes; a voir pcq je sais pas manipuler les vector
  double volume ;
  double distance_soleil;
  double prix;
  //Jeu *j;
};
