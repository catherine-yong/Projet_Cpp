#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include "jeu.hh"

class Case : public Jeu
{
  public :

  // Constructeurs : 
  Case();
  Case(std::string nom);
  Case(Jeu &j);

  // Destruteur :
  ~Case(){};

  // Fonctions :
  int get_id()const {return id;};
  std::string get_nom() override {return nom_case;};
  std::string get_proprio(int i) const {return liste_propio[i];};
  std::string set_proprio(std::string name_proprio) override {proprietaire = name_proprio; return proprietaire;};
  double get_prix() override {return prix;};
  double set_budget(double prix) override {return prix;};
  std::string get_case();

  std::string affiche_proprio(int i);
  void affiche_info(int i);
  std::string name_case(int i);
  std::string name_proprio(int i);
  std::string affiche_type(int i);
  int prix_case(int i);
  void affiche_info();

  // Attribut public :
  std::string cases[22] = {"SUN01","Px0x7","LXioR09","PAAR01","LR129","Lrum43","C287907432","LhZZAR","Fom25X","FaRI458","L97360","L86yt70","L5rAaR","PxW20","C864322452","LxXx01","P28Txx","FuSSS43","Lx4531Z","LzyR10","P87XXXR","Fyii111XZ"};
  int case_prix[22];
  std::string liste_propio[22] = {"Unknown","Unknown","Unknown","Unknown","Unknown","Unknown","Unknown","Unknown","Unknown","Unknown","Unknown","Unknown","Unknown","Unknown","Unknown","Unknown","Unknown","Unknown","Unknown","Unknown","Unknown","Unknown"};

  private :

  int id;
  static int cpt;
  std::string nom_case ;
  std::string proprietaire;
  int prix;
  Jeu *j;
};
