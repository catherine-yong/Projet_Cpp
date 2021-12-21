#include <iostream>
#include <string>
#include "joueurs.hh"

int Joueur::cpt = 0;

#define BUDGET_RESTANT 1000

Joueur::Joueur()
{
    id = cpt;
    cpt++;
    nom = "joueur_" + std::to_string(id);
    pion = "pion_" + std::to_string(id);
    budget_restant = BUDGET_RESTANT;
}

Joueur::Joueur(std::string name , std::string pion): nom(name),pion(pion)
{
    budget_restant = BUDGET_RESTANT; // budget de base
}

void Joueur::print_pion()
{
    std::cout << get_pion() << std::endl;

}

void Joueur::set_budget_tour()
{
    budget_restant = 3*budget_restant;
}

