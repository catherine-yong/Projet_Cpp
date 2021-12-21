#include "jeu.hh"

std::string Jeu::get_nom() const
{
    return nom_du_jeu;
}


int Jeu::get_nombre() const
{
    return nbr_joueur;
}

int Jeu::get_diff() const
{
    return difficulte;
}
 
int Jeu::get_tour() const
{
    return num_tour;
} 