#include <iostream>
#include <string>
#include "jeu.hh"
#include "plateau.hh"
#include "soleil.hh"

#include <math.h>

Soleil::Soleil() // constructeur 
{
  nom = "Sun";
  masse = std::pow(10,30); // valeurs selon masse et volume du Soleil
  volume = std::pow(10,18);
  prix = 1000; // a voir
}



Soleil::Soleil(const Soleil & s) // constructeur par copie
{
  nom = s.nom;
  masse = s.masse;
  volume = s.volume;
  prix = s.prix;
}


void Soleil::affiche_info() 
{
  std::cout << "Les propriétés de ce soleil sont : " << std::endl ;
  std::cout << "- Nom : " <<get_nom()<< std::endl;
  std::cout << "- Masse : " <<get_masse()<< std::endl ;
  std::cout << "- Volume : " <<get_volume()<< std::endl ;
  std::cout << "- Prix : " <<get_prix()<< std::endl ;
}
