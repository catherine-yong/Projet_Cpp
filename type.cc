#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include "jeu.hh"
#include "type.hh"

Type::Type()
{
  std::vector<std::string> vec(c->cases, c->cases + sizeof(c->cases) / sizeof(c->cases[0]));

  for (size_t i = 0; i < vec.size(); i++)
  {
    plateau.push_back(vec[i]);
  }
}
