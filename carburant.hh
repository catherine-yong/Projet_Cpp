#pragma once

#include <iostream>
#include <string>
#include "jeu.hh"
#include "type.hh"
#include "fusee.hh"

class Carburant : public Fusee
{
  public :

    Carburant();
    Carburant(const Carburant & c);
    Carburant(std::string brand , double price);

    ~Carburant(){};

    std::string get_marque() const{return marque;};
    double get_prix() override{return prix;};
    void affiche_info()override;
    bool operator==(const Carburant &car) const;

  private :

    int id;
    static int cpt;
    std::string marque;
    double prix;
};
