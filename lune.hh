#include <iostream>
#include <string>
#include "jeu.hh"
#include "plateau.hh"

class Lune : public Planete
{
  public :
  // constructeurs :
  Lune();
  Lune(std::string name, int nombre, double masse, double distance_planete, double prix);
  Lune(const Lune & l);

  // destructeur :
  ~Lune(){};

  // fonctions : // pas sûre que std est necessaire pour double et int
  std::string get_nom() const{return nom;};
  std::string get_nombre() const{return nombre;};
  std::double get_masse() const{return masse;};
  std::double get_distance() const{return distance_planete;};
  std::double get_prix() const{return prix;};
  void affiche_info() const;

  private :
  std::string nom;
  std::int nombre;
  std::double masse;
  std::double distance_planete;
  std::double prix;

};
