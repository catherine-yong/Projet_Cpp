#include <iostream>
#include <string>
#include "jeu.hh"
#include "plateau.hh"
#include "fusee.hh"

Fusee::Fusee(const Fusee & f) // constructeur par copie
{
  nom = p.nom;
  annee = p.annee;
  prix = p.prix;
}

void Fusee::affiche_info() const
{
  cout << "Les propriétés de cette fusée sont ; " << endl ;
  cout << "- Nom : " <<get_nom()<< endl;
  cout << "- Année : " <<get_annee()<< endl ;
  cout << "- Prix : " <<get_prix()<< endl ;
}
