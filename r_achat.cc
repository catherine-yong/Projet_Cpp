#include <iostream>
#include <string>
#include "jeu.hh"
#include "regles.hh"
#include "r_achat.hh"

void R_argent :: vente(std::double prix, std::string type, Jeu* joueur, Jeu* id_joueur /*pointeur vers la classe joueur*/)
{
  // Le joueur courant devient le propietaire de la case :
  joueur.propietaire = id_joueur;

  // Mise à jour du budget restant :
  joueur.budget_restant = joueur.budget_restant - case.prix ;
}

bool R_argent :: achat()
{
  cout << " Voulez - vous être propriétaire de cette case ? " << endl ;
  if (cin == "yes"){return TRUE;}
  else {return FALSE;}
}
