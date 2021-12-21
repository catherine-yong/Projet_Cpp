#pragma once

#include <iostream>
#include <string>
#include "jeu.hh"
#include "regles.hh"
#include "joueurs.hh"

class R_argent: public Regles
{
  public :
  // constructeurs :
  R_argent();
  R_argent(const R_argent &r);
  void gain(Jeu* game, Joueur* player1, Joueur* player2);

  // destructeur :
  //~R_argent(){};

  // fonctions :
  double gain();

  private :

};
