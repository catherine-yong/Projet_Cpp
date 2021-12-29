#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <list>

#include "carburant.hh"
#include "case.hh"
#include "fusee.hh"
#include "jeu.hh"
#include "joueurs.hh"
#include "lune.hh"
#include "planete.hh"
#include "soleil.hh"
#include "type.hh""

TEST_CASE("1: Creation Soleil")
{
  Soleil a , b(a) , c("soleil_c",50,10,300);
  
  REQUIRE(a.get_nom() == "Sun");
  REQUIRE(b.get_nom() == a.get_nom());
  REQUIRE(b.get_masse() == a.get_masse());
  REQUIRE(b.get_volume() == a.get_volume());
  REQUIRE(b.get_prix() == a.get_prix());
  REQUIRE(b.get_nom() == "soleil_c");
  REQUIRE(b.get_masse() == 50);
  REQUIRE(b.get_volume() == 10);
  REQUIRE(b.get_prix() == 300);
  
}


