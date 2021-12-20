#include <iostream>
#include <string>
#include "jeu.hh"
#include "regles.hh"

class R_achat: public Regles
{
  public :
  // constructeurs :
  R_achat();
  R_achat(const R_achat &r);

  // destructeur :
  //~R_achat(){};

  // fonctions :
  bool achat();
  void vente();

  private :
  double prix ;
  std::string type ;

};
