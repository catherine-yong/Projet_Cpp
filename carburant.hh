#include <iostream>
#include <string>
#include "jeu.hh"
#include "plateau.hh"
#include "fusee.hh"

class Carburant : public Fusee
{
  public :
  // constructeurs :
  Carburant();
  Carburant(const Carburant & c);

  // destructeur :
  ~Carburant(){};

  // fonctions :
  std::string get_marque() const{return marque;};
  std::double get_prix() const{return prix;};
  void affiche_info() const;

  private :
  std::string marque;
  std::double prix;
};
