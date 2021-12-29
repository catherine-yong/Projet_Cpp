#include "carburant.hh"
#include "case.hh"
#include "fusee.hh"
#include "jeu.hh"
#include "joueurs.hh"
#include "lune.hh"
#include "planete.hh"
#include "soleil.hh"
#include "type.hh"

#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));

    Soleil sun; 
    sun.affiche_info();

    Soleil sol("Soleil",20,10,1);
    sol.affiche_info();

    Soleil sun_(sun);
    sun_.affiche_info();

    Planete planet;
    planet.affiche_info();

    Planete planete_b("Jupiter",200,1,10000,50,4);
    planete_b.affiche_info();

    Planete copied_planet(planet);
    copied_planet.affiche_info();
    
    Fusee rocket;
    rocket.affiche_info();

    Fusee f(rocket);
    f.affiche_info();

    Fusee spaceship("SpaceX",2018,10);
    spaceship.affiche_info();

    Lune moon;
    moon.affiche_info();

    Lune moon_(moon);
    moon_.affiche_info();

    Lune sattelite("satelite",20,100,30);
    sattelite.affiche_info();
    
    Lune l;
    l.affiche_info();

    Carburant oil;
    oil.affiche_info();

    Carburant oil_(oil);
    oil_.affiche_info();

    Carburant essence("random",2);
    essence.affiche_info();




    return 0;
}
