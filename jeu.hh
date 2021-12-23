#pragma once

#include <iostream>
#include <string>

class Jeu
{
  public :
  // constructeurs :
  Jeu(std::string n):nom_du_jeu(n){};

  virtual ~Jeu() = 0 ;

 // getter :

 std::string nom_du_jeu ;
 int nbr_joueur ;
 int difficulte ;
 int num_tour ;

};
