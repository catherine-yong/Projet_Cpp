#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include "jeu.hh"

class Case : public Jeu
{
  public :
  
  Case();
  Case(std::string nom);
  Case(Jeu &j);
  ~Case(){};
  std::string get_nom() override {return nom_case;} ;
  std::string get_proprio() const {return proprietaire; };
  int get_id()const {return id;} ;

  std::string set_proprio( std::string name_proprio) override
  { proprietaire = name_proprio; return proprietaire;};
  double get_prix() override {return prix;};
  double set_budget(double prix) override {return prix;};
  std::string affiche_proprio();

  void affiche_info();

  

  private :
  std::string nom_case ;
  std::string proprietaire;
  double prix;
  int id;
  static int cpt;
  std::string cases[22] = {"SUN01","Px0x7","LXioR09","PAAR01","LR129","Lrum43","C287907432","LhZZAR","Fom25X","FaRI458","L97360","L86yt70","L5rAaR","PxW20","C864322452","LxXx01","P28Txx","FuSSS43","Lx4531Z","LzyR10","P87XXXR","Fyii111XZ"};
  Jeu *j;
};
