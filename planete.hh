#pragma once

#include <iostream>
#include <string>
#include "jeu.hh"
#include "type.hh"

class Planete : public Type
{
  public :
  // constructeurs :
  Planete();
  Planete(const Planete & p);
  Planete(std::string name , double vol , double dist , double weight, double price, int n_lunes);

  // destructeur :
  ~Planete(){};

  // fonctions :
  std::string get_nom() override{return nom;};
  double get_masse() const{return masse;};
  double get_volume() const{return volume;};
  double get_distance() const{return distance_soleil;};
  double get_prix() override {return prix;};
  double get_nb_lunes() const { return nb_lunes;};
  void affiche_info() override ;
  bool operator==(const Planete &p) const;


  private :
  std::string nom;
  int id;
  static int cpt;
  double volume ;
  double distance_soleil;
  double masse;
  double prix;
  int nb_lunes;
};
