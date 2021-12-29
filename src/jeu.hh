#pragma once

#include <iostream>
#include <string>

class Jeu
{
  public :
  // constructeurs :
  Jeu():num_tour(10){};
  Jeu(int nb_tours):num_tour(nb_tours){};

  ~Jeu(){};

  virtual std::string set_proprio(std::string name) = 0;
  virtual std::string get_nom() = 0;
  virtual double set_budget(double prix) = 0 ;
  virtual double get_prix() = 0;

  int get_tour() const { return num_tour;};

  private :

  int num_tour ;

};
