#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include "jeu.hh"

class Case : public Jeu
{
  public :
  // constructeur:
  Case(std::string nom);
  Case();

  // destructeur :

  // getter :
  std::string get_nom() {return nom_case;};
  std::string get_proprio() {return proprietaire;};
  int get_id() {return id;};

  // fonctions :
  std::string affiche_proprio();

  //attribut :
  std::string cases[22] = {"SUN01","Px0x7","LXioR09","PAAR01","LR129","Lrum43","C287907432","LhZZAR","Fom25X","FaRI458","L97360","L86yt70","L5rAaR","PxW20","C864322452","LxXx01","P28Txx","FuSSS43","Lx4531Z","LzyR10","P87XXXR","Fyii111XZ"};

  private :
  std::string nom_case ;
  std::string proprietaire;
  int id;
  static int cpt;
};
