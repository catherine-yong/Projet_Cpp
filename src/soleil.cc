#include <iostream>
#include <string>
#include "jeu.hh"
#include "type.hh"
#include "soleil.hh"

#include <math.h>

int Soleil::cpt = 0;

Soleil::Soleil() // constructeur
{
  id = cpt;
  cpt++;
  nom = "sun_" + std::to_string(id);
  masse = pow(10,30); // valeurs selon masse et volume du Soleil
  volume = pow(10,18);
  prix = 1000; // a voir
}

Soleil::Soleil(const Soleil & s) // constructeur par copie
{
  id = cpt;
  cpt++;
  nom = "sun_" + std::to_string(id);
  masse = s.masse;
  volume = s.volume;
  prix = s.prix;
}

Soleil::Soleil(std::string name, double weight, double vol, double price)
{
  id = cpt;
  cpt++;
  nom = "sun_" + std::to_string(id);
  masse = weight;
  volume = vol;
  prix = price;
}

void Soleil::affiche_info()
{
  std::cout << "Les propriétés de ce soleil sont : " << std::endl ;
  std::cout << "- Nom : " <<get_nom()<< std::endl;
  std::cout << "- Masse : " <<get_masse()<< std::endl ;
  std::cout << "- Volume : " <<get_volume()<< std::endl ;
  std::cout << "- Prix : " <<get_prix()<< std::endl ;
}
