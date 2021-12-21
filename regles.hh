#pragma once

#include <iostream>
#include <string>
#include "jeu.hh"

class Regles : public Jeu
{
  public :
  // constructeurs :
  Regles();
  Regles(const Regles & r): nom(r.get_nom()){};

  // destructeur :
  virtual ~Regles(){};

  // getter :
  std::string get_nom() const{return nom;};

  private :
  std::string nom ;
  Jeu *r;
};
