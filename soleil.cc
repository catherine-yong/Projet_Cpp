#include <iostream>
#include <string>
#include "jeu.hh"
#include "plateau.hh"
#include "soleil.hh"

Soleil::Soleil(const Soleil & s) // constructeur par copie
{
  nom = s.nom;
  masse = s.masse;
  volume = s.volume;
  prix = s.prix;
}


void Soleil::affiche_info() const
{
  cout << "Les propriétés de ce soleil sont ; " << endl ;
  cout << "- Nom : " <<get_nom()<< endl;
  cout << "- Masse : " <<get_masse()<< endl ;
  cout << "- Volume : " <<get_volume()<< endl ;
  cout << "- Prix : " <<get_prix()<< endl ;
}
