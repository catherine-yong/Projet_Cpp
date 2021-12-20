#include <iostream>
#include <string>
#include "jeu.hh"
#include "regles.hh"
#include "r_argent.hh"

std::double R_argent::gain(Jeu* n, Jeu* b)
{
  if ((n.num_tour)%3 == 0 )
  {
    b.budget_restant = b.budget_restant * 3 ;
  }
}
