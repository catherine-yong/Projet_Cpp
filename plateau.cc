#include "plateau.hh"

std::string Plateau::affiche_proprio()
{
    std::string proprio = get_proprio();

    std::cout << "La case appartient au joueur " << proprio << std::endl; 

    return proprio;
}