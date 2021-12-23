#include <iostream>
#include <string>
#include <cstring>
#include "jeu.hh"
#include "case.hh"

Case::Case(std::string n):Jeu(n)
{
  id = cpt;
  cpt++;
  nom_case = "case_" + std::to_string(id);
}


std::string Case::affiche_proprio()
{
    std::string proprio = get_proprio();

    std::cout << "La case appartient au joueur " << proprio << std::endl;

    return proprio;
}
