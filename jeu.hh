#pragma once

#include <iostream>
#include <string>

class Jeu
{
  public :
  // constructeurs :

  // destructeur :
  virtual ~Jeu() = 0 ;

  // getter :
  virtual std::string get_nom() const = 0;
  virtual int get_nombre() const = 0;
  virtual int get_diff() const = 0;
  virtual int get_tour() const = 0;

  private :
  std::string nom_du_jeu ;
  int nbr_joueur ;
  int difficulte ;
  int num_tour ;
  std::string plateau[22] = {"SUN01","Px0x7","LXioR09","PAAR01","LR129",
  "Lrum43","C287907432","LhZZAR","Fom25X","FaRI458","L97360","L86yt70",
  "L5rAaR","PxW20","C864322452","LxXx01","P28Txx","FuSSS43","Lx4531Z","LzyR10","P87XXXR","Fyii111XZ"};

};
