#include <iostream>
#include <string>
#include <cstring>
#include "jeu.hh"
#include "case.hh"

int Case::cpt = 0;

Case::Case()
{
  id = cpt;
  cpt++;
  nom_case = "case_" + std::to_string(id);
  proprietaire = "Unknown" ;
}

Case::Case(std::string n) 
{
  id = cpt;
  cpt++;
  nom_case = "case_" + std::to_string(id);
  proprietaire = "Unknown" ;
}


std::string Case::affiche_proprio()
{
    std::string proprio = get_proprio();
    std::cout << "La case appartient au joueur " << proprio << std::endl;
    return proprio;
}

Case::Case(Jeu &j)
{
  id = cpt;
  cpt++;
  nom_case = "case_" + std::to_string(id);
  proprietaire = "Unknown" ;
}