#include <iostream>
#include <string>
#include "jeu.hh"
#include "regles.hh"

class R_argent: public Regles
{
  public :
  // constructeurs :

  // destructeur :
  ~R_argent(){};

  // fonctions :
  std::bool achat();
  void vente();


  private :
  std::double prix ;
  std::string type ;

};
