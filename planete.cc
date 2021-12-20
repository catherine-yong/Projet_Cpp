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
  cout << "Les propriétés de cette planète sont ; " << endl ;
  cout << "- Nom : " <<get_nom()<< endl;
  cout << "- Masse : " <<get_masse()<< endl ;
  cout << "- Volume : " <<get_volume()<< endl ;
  cout << "- Distance planète - soleil : " <<get_distance()<< endl ;
  cout << "- Prix : " <<get_prix()<< endl ;
}
