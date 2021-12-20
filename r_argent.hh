#include <iostream>
#include <string>
#include "jeu.hh"
#include "regles.hh"

class R_argent: public Regles
{
  public :
  // constructeurs :
  R_argent();
  R_argent(const R_argent &r);

  // destructeur :
  ~R_argent(){};

  // fonctions :
  std::double gain();

  private :

};
