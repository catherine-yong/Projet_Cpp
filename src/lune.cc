#include <iostream>
#include <string>
#include "jeu.hh"
#include "type.hh"
#include "lune.hh"

int Lune::cpt = 0;

Lune::Lune()
{
  id = cpt;
  cpt++;
  nom = "moon_" + std::to_string(id);
  masse = rand() %100;
  distance_planete = rand() %1000;
  prix = 30; 
}

Lune::Lune(std::string name,  double weight, double planet_distance, double price):
nom(name) , masse(weight) , distance_planete(planet_distance) , prix(price)
{
  id = cpt;
  cpt++;
}

Lune::Lune(const Lune & l) // constructeur par copie
{
  id = cpt;
  cpt++;
  nom = "moon_" + std::to_string(id);
  masse = l.masse;
  distance_planete = l.distance_planete ;
  prix = l.prix;
}

void Lune::affiche_info() 
{
  std::cout << "Les proprietes de cette lune sont ; " << std::endl ;
  std::cout << "- Nom : " <<get_nom()<< std::endl;
  std::cout << "- Masse : " <<get_masse()<< std::endl ;
  std::cout << "- Distance planète - lune : " <<get_distance()<< std::endl ;
  std::cout << "- Prix : " <<get_prix()<< std::endl ;
}

bool Lune::operator==(const Lune &l) const 
{
  bool val = false;

  if (( l.masse == this->masse)  &&  ( l.prix == this->prix) && 
  (l.distance_planete == this->distance_planete)) 
    val = true;
  
  return val;
}
