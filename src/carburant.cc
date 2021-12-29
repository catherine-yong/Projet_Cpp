#include <iostream>
#include <string>
#include <random>
#include <time.h>
#include "jeu.hh"
#include "type.hh"
#include "fusee.hh"
#include "carburant.hh"

int Carburant::cpt = 0;

Carburant::Carburant() // constructeur par défaut
{
  srand(time(NULL));

  id = cpt;
  cpt++;
  marque = "carburant_" + std::to_string(id); 
  prix = rand() % 100 + 300 + 1;
}

Carburant::Carburant(const Carburant & c) // constructeur par copie
{
  id = cpt;
  cpt++;
  marque = "carburant_" + std::to_string(id); 
  prix = c.prix;
}

Carburant::Carburant(std::string brand , double price):marque(brand),prix(price)
{
  id = cpt;
  cpt++;
}

void Carburant::affiche_info() const
{
  std::cout << "Les propriétés de ce carburant sont ; " << std::endl ;
  std::cout << "- Marque : " << get_marque()<< std::endl;
  std::cout << "- Prix : " << get_prix()<< std::endl ;
}
