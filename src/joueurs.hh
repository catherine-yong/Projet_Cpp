#pragma once
#include <iostream>
#include <string>
#include "jeu.hh"
#include "type.hh"
#include "case.hh"

class Joueur : public Jeu
{
  public :
  // constructeurs :
  Joueur();
  Joueur(std::string name , std::string pion);
  Joueur(Joueur &j);
  
  // destructeur :
  ~Joueur(){};

  // getter :
  std::string get_nom() override {return nom;} ;
  int get_id() const {return id;};
  std::string get_pion() const {return pion;};
  double get_budget()const {return budget_restant;};
  double set_budget(double prix) override; 

  std::string set_proprio(std::string name)override { return name;};
  double get_prix() override { return -1;};


  // fonctions :
  void print_pion();
  void set_budget_tour();
  bool achat(); 
  void vente(Type &case_jeu); // idem
  double gain(Jeu &game);
  //void set_budget_achat();
  void affiche_info() ;
  Case c; //pour avoir accès aux attributs de la classe Case
  

  private :
  int id;
  std::string nom;
  static int cpt;
  std::string pion;
  //int lancer;
  //bool achat;
  double budget_restant;
  
  
  // int vector<string> patrimoine; A REVOIR AVEC LES VECTOR


};
