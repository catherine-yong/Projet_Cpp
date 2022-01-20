#pragma once

#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include "jeu.hh"
#include "case.hh"

class Type : public Case
{
  public :

  // Constructeur :
  Type();

  // Destructeur :
  ~Type(){};

  // Fonctions :
  virtual void affiche_info() = 0;
  virtual double get_prix() = 0;

  // Attributs publics : 
  std::vector<std::string> plateau;
  void affiche_type();

  private :

  Case* c;
};
