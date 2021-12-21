#pragma once

#include <iostream>
#include <string>
#include "jeu.hh"

class Joueur : public Jeu
{
  public :
  // constructeurs :
  Joueur(std::string name , std::string pion);
  Joueur();
  

  // destructeur :
  //~Joueur(){};

  // fonctions :
  std::string get_nom(){return nom;};
  int get_id(){return id;};
  std::string get_pion(){return pion;};
  void print_pion(); 
  double get_budget(){return budget_restant;};
  void set_budget_tour();
  //void set_budget_achat();
  
  
  
  private :
  std::string nom;
  static int cpt;
  int id;
  std::string pion;
  int lancer;
  bool achat;
  double budget_restant;
  Jeu *j1;
  // int vector<string> patrimoine; A REVOIR AVEC LES VECTOR

  
};
