#include <iostream>
#include <string>
#include "jeu.hh"
#include "type.hh"
#include "planete.hh"

int Planete::cpt = 0;

Planete::Planete()
{
  id = cpt;
  cpt++;
  nom = "planet_" + std::to_string(id);
  masse = rand() %1000;
  volume = rand() %2000;
  distance_soleil = rand() %1000;
  prix = rand() %100;
  nb_lunes = 2;
}

Planete::Planete(const Planete & p)
{
  id = cpt;
  cpt++;
  nom = "planet_" + std::to_string(id);
  masse = p.masse;
  volume = p.volume;
  distance_soleil = p.distance_soleil ;
  prix = p.prix;
  nb_lunes = p.nb_lunes ;
}

Planete::Planete(std::string name , double vol , double dist ,double weight, double price, int n_lunes):
nom(name),volume(vol),distance_soleil(dist),masse(weight),prix(price),nb_lunes(n_lunes)
{
  id = cpt;
  cpt++;
}

void Planete::affiche_info()
{
  std::cout << "Les propriétés de cette planète sont ; " << std::endl ;
  std::cout << "- Nom : " <<get_nom()<< std::endl;
  std::cout << "- Masse : " <<get_masse()<< std::endl ;
  std::cout << "- Volume : " <<get_volume()<< std::endl ;
  std::cout << "- Distance planète - soleil : " <<get_distance()<< std::endl ;
  std::cout << "- Prix : " <<get_prix()<< std::endl ;
  std::cout << "- Nombre de lunes : " << get_nb_lunes() << std::endl ;
}

bool Planete::operator==(const Planete &p) const
{
  bool val = false;

  if (( p.masse == this->masse) && ( p.volume == this->volume) &&
  ( p.prix== this->prix) && (p.distance_soleil == this->distance_soleil) &&
  ( p.nb_lunes == this->nb_lunes) )
    val = true;

  return val;
}
