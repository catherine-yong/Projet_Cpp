#include <iostream>
#include <string>
#include "jeu.hh"
#include "type.hh"
#include "fusee.hh"

int Fusee::cpt = 0;

Fusee::Fusee()
{
  identifiant = cpt;
  cpt++;
  nom = "fusee_" + std::to_string(identifiant);
  annee = 2020;
  prix = 1000;
}

Fusee::Fusee(std::string name, std::size_t year, double price):nom(name), annee(year) , prix(price)
{
  identifiant = cpt;
  cpt++;
}

Fusee::Fusee(const Fusee & f)
{
  identifiant = cpt;
  cpt++;
  nom = "fusee_" + std::to_string(identifiant);
  annee = f.annee;
  prix = f.prix;
  identifiant = identifiant+1;
}

void Fusee::affiche_info()
{
  std::cout << "Les propriétés de cette fusee sont ; " << std::endl ;
  std::cout << "- Nom : " <<get_nom()<< std::endl;
  std::cout << "- Année de lancement : " <<get_annee()<< std::endl ;
  std::cout << "- Prix : " <<get_prix()<< std::endl ;
}

bool Fusee::operator==(const Fusee &f) const
{
  bool val = false;

  if (( f.annee == this->annee)  &&  ( f.prix == this->prix) )
    val = true;

  return val;
}
