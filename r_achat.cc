#include <iostream>
#include <string>
#include "jeu.hh"
#include "regles.hh"
#include "r_achat.hh"

void R_achat::vente(double prix, Jeu* case_jeu, Jeu* joueur)
{
  // Le joueur courant devient le propietaire de la case :
  case_jeu->proprietaire = joueur->get_nom();

  // Mise à jour du budget restant :
  joueur->budget_restant = joueur->budget_restant - case_jeu->prix ;
}

bool R_achat::achat()
{
  std::string answer;
  std::string yes = "yes";

  bool value = false;

  std::cout << " Voulez - vous etre proprietaire de cette case ? (yes/no)" << std::endl ;
  
  std::cin >> answer;

  int res = answer.compare(yes);

  if (res == 0)
    value = true;


  return value;
}
