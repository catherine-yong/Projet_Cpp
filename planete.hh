#include <iostream>
#include <string>
#include "jeu.hh"
#include "plateau.hh"

class Planete : public Plateau
{
  public :
  // constructeurs :
  Planete();
  Planete(const Planete & p);

  // destructeur :
  ~Planete(){};

  // fonctions :
  std::string get_nom() const{return nom;};
  std::double get_masse() const{return masse;};
  //std::vector<int> v;
  std::double get_volume() const{return volume;};
  std::double get_distance() const{return distance_soleil;};
  std::double get_prix() const{return prix;};
  void affiche_info() const;

  private :
  std::string nom;
  std::double masse;
  std::vector<string> lunes;
  std::double volume ;
  std::double distance_soleil;
  std::double prix;
};
