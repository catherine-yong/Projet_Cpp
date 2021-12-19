#include <iostream>
#include <string>
#include "jeu.hh"
#include "plateau.hh"
#include "lune.hh"

Lune::Lune(const Lune & l) // constructeur par copie
{
  nom = l.nom;
  nombre = l.nombre ;
  masse = l.masse;
  distance_planete = l.distance_planete ;
  prix = l.prix;
}

void Planete::affiche_info() const
{
  cout << "Les propriétés de cette lune sont ; " << endl ;
  cout << "- Nom : " <<get_nom()<< endl;
  cout << "- Nombre : " <<get_nombre()<< endl;
  cout << "- Masse : " <<get_masse()<< endl ;
  cout << "- Distance planète - lune : " <<get_distance()<< endl ;
  cout << "- Prix : " <<get_prix()<< endl ;
}
