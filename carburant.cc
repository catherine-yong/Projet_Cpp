#include <iostream>
#include <string>
#include "jeu.hh"
#include "plateau.hh"
#include "fusee.hh"
#include "carburant.hh"

Carburant::Carburant() // constructeur par défaut
{
  int a = rand()%65+26+1;
  marque = std::to_string(a); // A REVOIR
  prix = rand() % 100 + 300 + 1;
}

Carburant::Carburant(const Carburant & c) // constructeur par copie
{
  marque = c.marque;
  prix = c.prix;
}

void Carburant::affiche_info() const
{
  std::cout << "Les propriétés de ce carburant sont ; " << std::endl ;
  std::cout << "- Marque : " << get_marque()<< std::endl;
  std::cout << "- Prix : " << get_prix()<< std::endl ;
}
