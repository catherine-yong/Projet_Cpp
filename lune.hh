#include <iostream>
#include <string>
#include "jeu.hh"
#include "plateau.hh"

class Lune : public Planete // Ne reconnait pas Planete comme classe ou struct 
{
  public :
  // constructeurs :
  Lune();
  Lune(std::string name, int nb, double weight, double planet_distance, double price);
  Lune(const Lune & l);

  // destructeur :
  ~Lune(){};

  // fonctions : // pas sûre que std est necessaire pour double et int
  std::string get_nom() const{return nom;};
  int get_nombre() const{return nombre;};
  double get_masse() const{return masse;};
  double get_distance() const{return distance_planete;};
  double get_prix() const{return prix;};
  void affiche_info() const;

  private :
  std::string nom;
  int nombre;
  double masse;
  double distance_planete;
  double prix;

};
