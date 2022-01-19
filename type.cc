#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include "jeu.hh"
#include "type.hh"

Type::Type()
{
  c = new Case ;
  std::vector<std::string> vec(c->cases, c->cases + sizeof(c->cases) / sizeof(c->cases[0]));

  for (size_t i = 0; i < vec.size(); i++)
  {
    plateau.push_back(vec[i]);
  }
}

void Type::affiche_type()
{
  std::pair<int,std::string> p;

  for (int i = 0; i < 22 ; i++)
  {
    p = std::make_pair(i, plateau[i]);
    std::cout << Case n° <<p.first << ' ' << p.second << std::endl;
  }
}
