#include <iostream>
#include <string>
#include "jeu.hh"
#include "regles.hh"
#include "r_argent.hh"
#include "joueurs.hh"

void R_argent::gain(Jeu* game, Joueur* player1, Joueur* player2)
{
  if ((game->get_tour())%3 == 0 )
  {
    player1.get_budget() = player1->budget_restant * 3 ;
  }

}
