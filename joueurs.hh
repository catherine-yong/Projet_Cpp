#include <iostream>
#include <string>
#include "jeu.hh"

class Joueur : public Jeu
{
  public :
  // constructeurs :

  // destructeur :
  ~Joueur(){};

  // fonctions :


  private :
  std::string nom;
  static std::int id;
  std::string pion;
  std::int lancer;
  bool achat;
  std::double budget_restant;
  std::vector<string> patrimoine;
};
