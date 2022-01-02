#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "jeu.hh"
#include "type.hh"
#include "case.hh"

class Joueur : public Jeu
{
  public :

  Joueur();
  Joueur(std::string n);
  Joueur(std::string name , std::string pion);
  Joueur(Joueur &j);

  ~Joueur(){};

  int get_id() const {return id;};
  std::string get_nom() override {return nom;} ;
  std::string get_pion() const{return pion;};
  double get_budget()const {return budget_restant;};
  double set_budget(double prix) override;
  std::string set_proprio(std::string name)override { return name;};
  double get_prix() override { return -1;};

  void print_pion();
  void set_budget_tour();
  bool achat();
  //void set_budget_achat();
  void affiche_info();
  int lancer();
  void deplacement();
  void vente(Case &case_jeu); 
  double gain(Jeu &game);
  std::string maj_p();


  Case c; //pour avoir accès aux attributs de la classe Case

  std::vector<std::string> patrimoine;
  static int place_pion ;

  private :

  int id;
  std::string nom;
  static int cpt;
  std::string pion ;
  double budget_restant;

};
