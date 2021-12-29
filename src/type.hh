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
  // constructeurs :

  virtual void affiche_info() = 0;
  virtual double get_prix() = 0;
  std::vector<std::string> plateau;

  ~Type(){};

  private :
  
};