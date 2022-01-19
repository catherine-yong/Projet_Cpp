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

    REQUIRE(a.get_nom() == "sun_0");
    REQUIRE(b == a);
    REQUIRE(c.get_masse() == 50);
    REQUIRE(c.get_volume() == 10);
    REQUIRE(c.get_prix() == 300);
  }

  SECTION("2 : Planetes")
  {
    Planete p1 , p2(p1) , p3("Planete_TERRE",33,1000,26,500,3); // erreur : SIGSEGV - Segmentation violation signal

    REQUIRE(p1.get_nom() == "planet_0");
    REQUIRE(p1.get_nb_lunes() == 2);
    REQUIRE(p2 == p1);
    REQUIRE(p3.get_volume() == 33);
    REQUIRE(p3.get_distance() == 1000);
    REQUIRE(p3.get_masse() == 26);
    REQUIRE(p3.get_prix() == 500);

  }

  SECTION("3 : Lunes")
  {
    Lune l1, l2(l1), l3("moony",5,50,90);

    REQUIRE(l1.get_nom() == "moon_0");
    REQUIRE(l1.get_prix() == 30);
    REQUIRE(l2 == l1);
    REQUIRE(l3.get_masse() == 5);
    REQUIRE(l3.get_distance() == 50);
  }

  SECTION("4 : Joueurs")
  {
    Joueur paul, julie(paul), marie("marie","%");

    REQUIRE(paul.get_nom() == "joueur_1");
    REQUIRE(julie.get_nom() == "joueur_2");
    REQUIRE(marie.get_nom() == "marie");
    REQUIRE(paul.get_budget() == 1000);
  }

  SECTION("5 : Fusee")
  {
    Fusee f1, f2(f1), f3("Rollie",2000,800);

    REQUIRE(f1.get_nom() == "fusee_0");
    REQUIRE(f1.get_prix() == 1000);
    REQUIRE(f2 == f1);
    REQUIRE(f3.get_nom() == "Rollie");
    REQUIRE(f3.get_annee() == 2000);
  }

  SECTION("6 : Carburant")
  {
    Carburant C1, C2(C1), C3("Total", 2000);

    REQUIRE(C1.get_marque() == "carburant_0");
    REQUIRE(C1.get_prix() != 1000);
    REQUIRE(C2 == C1);
    REQUIRE(C3.get_marque() == "Total");
    REQUIRE(C3.get_prix() == 2000);
  }

  SECTION("7 : Case")
  {
    Case ca1, ca2(ca1), ca3("SUN01");

    REQUIRE(ca1.get_nom() == "case_33");
    REQUIRE(ca2.get_proprio(2) == "Unknown");
  }
}

TEST_CASE("2 : Partie de jeu")
{
  SECTION(" Au niveau du joueur")
  {
    Joueur james;

    REQUIRE(james.lancer() != 9);
  }
}
