#include <iostream>
#include <string>
#include <cstring>
#include "plateau.hh"
#include "case.hh"
#include "jeu.hh"


Plateau::Plateau() // je cree un plateau comptenant toutes les cases
{
  std::vector<std::string> vec(c->cases, c->cases + sizeof(c->cases) / sizeof(c->cases[0]));

  for (int i = 0; i < vec.size(); i++)
  {
    plateau.push_back(vec[i]);
  }
}
