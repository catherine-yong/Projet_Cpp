#pragma once

#include <iostream>
#include <string>
#include "jeu.hh"
#include "type.hh"
#include "fusee.hh"

class Carburant : public Fusee 
{
  public :
    // constructeurs :
    Carburant();
    Carburant(const Carburant & c);
    Carburant(std::string brand , double price);

    // destructeur :
    ~Carburant(){};

    // fonctions :
    std::string get_marque() const{return marque;};
    double get_prix() const{return prix;};
    void affiche_info() const;

  private :
    std::string marque;
    double prix;
    int id;
    static int cpt;
};
