#pragma once

#include <iostream>
#include <string>
#include "jeu.hh"
#include "type.hh"

class Soleil : public Type
{
  public :

  Soleil();
  Soleil(const Soleil & s);
  Soleil(std::string name, double weight, double vol, double price);

  ~Soleil(){};

  std::string get_nom() override {return nom;};
  double get_masse()  {return masse;};
  double get_volume() {return volume;};
  double get_prix() override {return prix;};

  void affiche_info()override ;


  private :

  int id;
  static int cpt;
  std::string nom;
  double masse;
  double volume;
  double prix;
};
