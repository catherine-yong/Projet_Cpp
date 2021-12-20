#include <iostream>
#include <string>
#include "jeu.hh"
#include "plateau.hh"
#include "fusee.hh"

int Fusee:cpt = 0;

Fusee::Fusee()
{
  identifiant = cpt;
  cpt++;
  nom = "fusee_" + to_string(identifiant);
  annee = 2020; // annee de lancement
  prix = 1000; // prix a voir
}

Fusee::Fusee(std::string name, std::size_t year, std::double price):nom(name), annee(year) , prix(price)
{
  identifiant = cpt;
  cpt++;
}

Fusee::Fusee(const Fusee & f) // constructeur par copie
{
  identifiant = cpt;
  cpt++;
  nom = p.nom;
  annee = p.annee;
  prix = p.prix;
  identifiant = identifiant+1;
}

void Fusee::affiche_info() const
{
  cout << "Les propriétés de cette fusée sont ; " << endl ;
  cout << "- Nom : " <<get_nom()<< endl;
  cout << "- Année : " <<get_annee()<< endl ;
  cout << "- Prix : " <<get_prix()<< endl ;
}
