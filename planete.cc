#include <iostream>
#include <string>
#include "jeu.hh"
#include "plateau.hh"
#include "planete.hh"

Planete::Planete(const Planete & p) // constructeur par copie
{
  nom = p.nom;
  masse = p.masse;
  volume = p.volume;
  distance_soleil = p.distance_soleil ;
  prix = p.prix;
}

void Planete::affiche_info() const
{
  std::cout << "Les propriétés de cette planète sont ; " << std::endl ;
  std::cout << "- Nom : " <<get_nom()<< std::endl;
  std::cout << "- Masse : " <<get_masse()<< std::endl ;
  std::cout << "- Volume : " <<get_volume()<< std::endl ;
  std::cout << "- Distance planète - soleil : " <<get_distance()<< std::endl ;
  std::cout << "- Prix : " <<get_prix()<< std::endl ;
}
