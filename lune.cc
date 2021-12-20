#include <iostream>
#include <string>
#include "jeu.hh"
#include "plateau.hh"
#include "lune.hh"

Lune::Lune(std::string name, int nb, double weight, double planet_distance, double price):
nom(name) , nombre(nb) , masse(weight) , distance_planete(planet_distance) , prix(price)
{};

Lune::Lune(const Lune & l) // constructeur par copie
{
  nom = l.nom;
  nombre = l.nombre ;
  masse = l.masse;
  distance_planete = l.distance_planete ;
  prix = l.prix;
}

void Lune::affiche_info() const
{
  std::cout << "Les propriétés de cette lune sont ; " << std::endl ;
  std::cout << "- Nom : " <<get_nom()<< std::endl;
  std::cout << "- Nombre : " <<get_nombre()<< std::endl;
  std::cout << "- Masse : " <<get_masse()<< std::endl ;
  std::cout << "- Distance planète - lune : " <<get_distance()<< std::endl ;
  std::cout << "- Prix : " <<get_prix()<< std::endl ;
}
