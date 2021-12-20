#include <iostream>
#include <string>
#include "jeu.hh"
#include "plateau.hh"

class Fusee : public Plateau
{
  public :
  // constructeurs :
  Fusee();
  Fusee(const Fusee & f);
  Fusee(std::string name, std::size_t year, std::double price);
  // destructeur :
  ~Fusee(){};

  // fonctions :
  std::string get_nom() const{return nom;};
  std::double get_annee() const{return annee;};
  std::double get_prix() const{return prix;};
  void affiche_info() const;

  private :
  static int cpt;
  int identifiant;
  std::string nom;
  std::size_t annee;
  std::double prix;

};
