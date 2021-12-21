#pragma once

#include <iostream>
#include <string>
#include "jeu.hh"

class Plateau : public Jeu
{
  public :
  // constructeurs :

  // destructeur :
  

  // fonctions :
  std::string affiche_proprio();
  std::string get_proprio(){return proprietaire;};
  int get_id() const{return id;};

  private :
  std::string proprietaire ;
  static int id;
  Jeu *j;
};
