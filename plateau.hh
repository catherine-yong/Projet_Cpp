#include <iostream>
#include <string>
#include "jeu.hh"

class Plateau : public Jeu
{
  public :
  // constructeurs :

  // destructeur :
  ~Plateau(){};

  // fonctions :
  std::string affiche_propio();
  std::int get_id() const{return id;};

  private :
  std::string propietaire ;
  static std::int id;
};
