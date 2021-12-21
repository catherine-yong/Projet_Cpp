#pragma once

#include <iostream>
#include <string>
#include "jeu.hh"
#include "plateau.hh"
#include "planete.hh"

class Lune : public Planete 
{
  public :
  
  Lune();
  Lune(std::string name, int nb, double weight, double planet_distance, double price);
  Lune(const Lune & l);

  
  ~Lune(){};

  
  std::string get_nom() const{return nom;};
  int get_nombre() const{return nombre;};
  double get_masse() const{return masse;};
  double get_distance() const{return distance_planete;};
  double get_prix() const{return prix;};
  void affiche_info() const;

  private :
  std::string nom;
  int nombre;
  double masse;
  double distance_planete;
  double prix;

};
