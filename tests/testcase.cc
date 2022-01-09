#define CATCH_CONFIG_MAIN
#include <list>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include"catch.hpp"

using namespace std;

#include "carburant.hh"
#include "case.hh"
#include "fusee.hh"
#include "jeu.hh"
#include "joueurs.hh"
#include "lune.hh"
#include "planete.hh"
#include "soleil.hh"

TEST_CASE("1 : Constructeurs")
{
  SECTION("Soleil")
  {
    Soleil a , b(a) , c("soleil_c",50,10,300);

    REQUIRE(a.get_nom() == "Sun");
    REQUIRE(b == a);
    REQUIRE(c.get_nom() == "soleil_c");
    REQUIRE(c.get_masse() == 50);
    REQUIRE(c.get_volume() == 10);
    REQUIRE(c.get_prix() == 300);
  }

  SECTION("2 : Planetes")
  {
    Planete p1 , p2(p1) , p3("Planete_TERRE",33,1000,26,500,3);

    REQUIRE(p1.get_nom() == "planet_1");
    REQUIRE(p1.get_nb_lunes() == 2);
    REQUIRE(p2 == p1);
    REQUIRE(p3.get_nom() == "Planete_TERRE");
    REQUIRE(p3.get_volume() == 33);
    REQUIRE(p3.get_distance() == 1000);
    REQUIRE(p3.get_masse() == 26);
    REQUIRE(p3.get_prix() == 500);
    REQUIRE(p3.get_nb_lunes() == 3);

  }

  SECTION("3 : Lunes")
  {
    Lune l1, l2(l1), l3("moony",5,50,90);

    REQUIRE(l1.get_nom() == "moon_0");
    REQUIRE(l1.get_prix() == 30);
    REQUIRE(l2 == l1);
    REQUIRE(l3.get_nom() == "moony");
    REQUIRE(l3.get_weight() == 5);
    REQUIRE(l3.get_distance() == 50);
    REQUIRE(l3.get_prix() == 90);
  }

  SECTION("4 : Joueurs")
  {
    Joueur paul, julie(paul), marie("marie","%");

    REQUIRE(paul.get_nom() == "joueur_0");
    REQUIRE(julie.get_nom() == "joueur_1");
    REQUIRE(marie.get_nom() == "marie");
    REQUIRE(paul.get_budget() == 1000);
    REQUIRE(julie.get_budget() == 1000);
    REQUIRE(marie.get_budget() == 1000);

  }

  SECTION("5 : Fusee")
  {
    Fusee f1, f2(f1), f3("Rollie",2000,800);

    REQUIRE(f1.get_nom() == "fusee_0");
    REQUIRE(f2.get_nom() == "fusee_1");
    REQUIRE(f1 == f2);
    REQUIRE(f3.get_nom() == "Rollie");
    REQUIRE(f3.get_annee() == 2000);
    REQUIRE(f3.get_prix() == 800);
  }

  SECTION("6 : Carburant")
  {

  }

  SECTION("7 : Case")
  {

  }
}

TEST_CASE("2 : Partie de jeu")
{
  SECTION("1 : Au niveau du joueur")
  {

  }

  SECTION("2 : Au niveau du plateau")
  {

  }

}
