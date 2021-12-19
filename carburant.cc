#include <iostream>
#include <string>
#include "jeu.hh"
#include "plateau.hh"
#include "fusee.hh"
#include "carburant.hh"

Carburant::Carburant(const Carburant & c) // constructeur par copie
{
  marque = c.marque;
  prix = c.prix;
}

void Carburant::affiche_info() const
{
  cout << "Les propriétés de ce carburant sont ; " << endl ;
  cout << "- Marque : " <<get_marque()<< endl;
  cout << "- Prix : " <<get_prix()<< endl ;
}
