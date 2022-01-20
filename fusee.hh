#pragma once

#include <iostream>
#include <string>
#include "jeu.hh"
#include "type.hh"
#include "case.hh"

class Fusee : public Type
{
  public :

  // Constructeurs :
  Fusee();
  Fusee(const Fusee & f);
  Fusee(std::string name, std::size_t year, double price);

  // Destructeur :
  ~Fusee(){};

  // Fonctions :
  std::string get_nom() override{return nom;};
  double get_annee() const{return annee;};
  double get_prix() override {return prix;};
  void affiche_info() override;
  bool operator==(const Fusee &f) const;

  private :

  static int cpt;
  int identifiant;
  std::string nom;
  std::size_t annee;
  double prix;
};
