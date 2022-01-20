#pragma once

#include <iostream>
#include <string>
#include "jeu.hh"
#include "type.hh"
#include "planete.hh"

class Lune : public Planete
{
  public :

  // Constructeurs :
  Lune();
  Lune(std::string name, double weight, double planet_distance, double price);
  Lune(const Lune & l);

  // Destruteur :
  ~Lune(){};

  // Fonctions :
  std::string get_nom() override{return nom;};
  double get_masse() const{return masse;};
  double get_distance() const{return distance_planete;};
  double get_prix() override {return prix;};
  void affiche_info() override;
  bool operator== (const Lune &l)const ;

  private :

  std::string nom;
  double masse;
  double distance_planete;
  double prix;
  int id;
  int static cpt;
};
