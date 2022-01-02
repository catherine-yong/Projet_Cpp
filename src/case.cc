#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include "jeu.hh"
#include "case.hh"

int Case::cpt = 0;

Case::Case()
{
  id = cpt;
  cpt++;
  nom_case = "case_" + std::to_string(id);
  proprietaire = "Unknown" ;
}

Case::Case(std::string n)
{
  id = cpt;
  cpt++;
  nom_case = "case_" + std::to_string(id);
  proprietaire = "Unknown" ;
}

Case::Case(Jeu &j)
{
  id = cpt;
  cpt++;
  nom_case = "case_" + std::to_string(id);
  proprietaire = "Unknown" ;
}

std::string Case::affiche_proprio()
{
    std::string proprio = get_proprio();
    std::cout << "La case appartient au joueur " << proprio << std::endl;
    return proprio;
}

void Case::affiche_info(int i)
{
  std::cout << "-------------"<< std::endl ;
  std::cout << "• Nom : " <<name_case(i)<< std::endl;
  std::cout << "• Prix : " <<prix_case(i)<< std::endl;
  std::cout << "• Type : " <<affiche_type(i)<< std::endl;
}

std::string Case::name_case(int i)
{
    nom_case = cases[i];
    return nom_case;
}

int Case::prix_case(int i)
{
  srand (time(NULL));
  case_prix[i] = rand()% 900 + 1;
  prix = case_prix[i];
  return prix;
}

std::string Case::affiche_type(int i)
{
  std::string res ;
  std::string n = name_case(i);
  std::string k ;
  k.push_back(n.at(0));

  if (k.compare("L") == 0 )
  {
    res = "Lune";
  }
  if (k.compare("S") == 0 )
  {
    res = "Soleil";
  }
  if (k.compare("C") == 0 )
  {
    res = "Carburant";
  }
  if (k.compare("P") == 0 )
  {
    res = "Planete";
  }
  if (k.compare("F") == 0 )
  {
    res = "Fusee";
  }
  return res;
}

Case Case::trouve_case(int place_pion , Case *list_cases)
{
  Case case_res;
  int case_compteur = 0 ;

  std::string nom_case = cases[place_pion];
  std::string current_nom_case = list_cases[case_compteur].get_nom();


  while ( (nom_case.compare(current_nom_case) != 0) && (case_compteur) != 22 )
  {
    case_compteur++;
    current_nom_case = list_cases[case_compteur].get_nom();
  }

  if (case_compteur == 22)
  {
    std::cout << "Erreur : La case n'existe pas" << std::endl;
    exit(1);
  }

  return case_res;
}
