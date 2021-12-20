#include <iostream>
#include <string>
#include "joueurs.hh"

Joueur::Joueur(std::string name , std::string pion): nom(name),pion(pion)
{
    budget_restant = 1000; // budget de base
}

void Joueur::print_pion()
{
    std::cout << get_pion() << std::endl;

}

void Joueur::set_budget(double amount)
{
    amount = budget_restant;
    budget_restant = 3*amount;
}