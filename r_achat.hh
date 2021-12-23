#pragma once

#include <iostream>
#include <string>
#include<cstring>
#include "jeu.hh"
#include "regles.hh"

class R_achat: public Regles
{
  public :
  // constructeurs :
  //R_achat(std::string n, std::string name, double p, std::string t):Regles(n,name), prix(p), type(t){};
  //R_achat(const R_achat &r);
  R_achat(std::string n, std::string name):Regles(n){};

  // destructeur :
  //~R_achat(){};

  // getter :
  double get_prix() {return prix;};
  std::string get_type() {return type;};

  // fonctions :
  bool achat();
  void vente(double prix, Jeu* case_jeu, Jeu* joueur);

  private :
  double prix ;
  std::string type ;
  //Jeu* j;


};
