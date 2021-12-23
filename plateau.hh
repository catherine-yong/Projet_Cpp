#pragma once

#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include "jeu.hh"
#include "case.hh"

class Plateau : public Case
{
  public :
  // constructeurs :
  Plateau();

  // destructeur :

  // getter :

  // fonctions :

  // ATTRIBUTS :

  std::vector<std::string> plateau;

  private :
  Case* c;

};
