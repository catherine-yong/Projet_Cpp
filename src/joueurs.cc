#include <iostream>
#include <string>
#include "joueurs.hh"
#include "jeu.hh"

int Joueur::cpt = 0;

int const budget_constant(1000);

Joueur::Joueur()
{
    id = cpt;
    cpt++;
    nom = "joueur_" + std::to_string(id);
    pion = "pion_" + std::to_string(id);
    budget_restant = budget_constant;
}

Joueur::Joueur(Joueur &j)
{
    id = cpt;
    cpt++;
    nom = "joueur_" + std::to_string(id);
    pion = "pion_" + std::to_string(id);
    budget_restant = j.get_budget(); // a voir
}

Joueur::Joueur(std::string name , std::string pion): nom(name),pion(pion)
{
    budget_restant = budget_constant; // budget de base
}

double Joueur::set_budget(double prix)
{
    budget_restant -= prix;

    return budget_restant;
}

void Joueur::print_pion()
{
    std::cout << get_pion() << std::endl;

}

void Joueur::set_budget_tour()
{
    budget_restant = 3*budget_restant;
}

double Joueur::gain(Jeu &game)
{
  if ((game.get_tour())%3 == 0 )
    set_budget_tour(); 

  return budget_restant;
}

void Joueur::vente(Type &case_achetee)
{
 
  if (achat())
  {
    case_achetee.set_proprio(nom);
    set_budget(case_achetee.get_prix());
  }
}

bool Joueur::achat()
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
