#include <iostream>
#include <string>
#include "jeu.hh"

class Joueur : public Jeu
{
  public :
  // constructeurs :
  Joueur(std::string name , std::string pion);
  double get_budget(){return budget_restant;};
  void set_budget(double amount);
  int get_id(){return id;};
  std::string get_pion(){return pion;};
  void print_pion(); 

  // destructeur :
  //~Joueur(){};

  // fonctions :
  

  private :
  std::string nom;
  static int id;
  std::string pion;
  int lancer;
  bool achat;
  double budget_restant;
  // int vector<string> patrimoine; A REVOIR AVEC LES VECTOR

  
};
