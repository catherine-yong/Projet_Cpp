#include <iostream>
#include <string>
#include "jeu.hh"
#include "plateau.hh"

class Fusee : public Plateau // pb héritage à voir
{
  public :
  // constructeurs :
  Fusee();
  Fusee(const Fusee & f);
  Fusee(std::string name, std::size_t year, double price);
  // destructeur :
  // ~Fusee(){};

  // fonctions :
  std::string get_nom() const{return nom;};
  double get_annee() const{return annee;};
  double get_prix() const{return prix;};
  void affiche_info() const;

  private :
  static int cpt;
  int identifiant;
  std::string nom;
  std::size_t annee;
  double prix;

};
