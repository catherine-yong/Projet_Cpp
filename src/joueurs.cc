#include <iostream>
#include <string>
#include "joueurs.hh"
#include "jeu.hh"

int Joueur::cpt = 1;
int Joueur::place_pion = 0 ;

int const budget_constant(1000);


Joueur::Joueur()
{
    id = cpt;
    cpt++;
    nom = "joueur_" + std::to_string(id);
    pion = "pion_" + std::to_string(id);
    budget_restant = budget_constant;
}

Joueur::Joueur(Joueur &j)
{
    id = cpt;
    cpt++;
    nom = "joueur_" + std::to_string(id);
    pion = "pion_" + std::to_string(id);
    budget_restant = j.get_budget();
}

Joueur::Joueur(std::string name , std::string pion): nom(name),pion(pion)
{
    id = cpt;
    cpt++;
    budget_restant = budget_constant;
}

double Joueur::set_budget(double prix)
{
  budget_restant -= prix;
  return budget_restant;
}

void Joueur::print_pion()
{
  std::cout << get_pion() << std::endl;
}

double Joueur::set_budget_tour()
{
  budget_restant = 3*budget_restant;
  return budget_restant;
}

double Joueur::gain(Jeu &game)
{
  if ((game.get_tour())%3 == 0 )
    set_budget_tour();

  return budget_restant;
}

void Joueur::vente(Type &case_achetee)
{

  if (achat())
  {
    case_achetee.set_proprio(nom);
    set_budget(case_achetee.get_prix());
  }
}

void Joueur::affiche_info()
{
  std::cout << std::endl ;
  std::cout << " Joueur "<< id <<" :"<< std::endl ;
  std::cout << "-------------"<< std::endl ;
  std::cout << "- Nom : " <<get_nom()<< std::endl;
  std::cout << "- Pion : " <<get_pion()<< std::endl;
  std::cout << "- Budget : " <<budget_restant<< std::endl;
  std::cout << "- Liste du patrimoine de "<<get_nom()<<":"<<std::endl;
  for (size_t i = 0 ; i < patrimoine.size(); i++)
  {
    std::cout << "    - "<<patrimoine[i]<<std::endl;
  }
}

int Joueur::lancer()
{
  srand (time(NULL));
  int res = rand()% 6 + 1;
  return res;
}

void Joueur::deplacement()
{
  // Lancer du dé :
  int de = lancer();

  // Déplacement :
  if ((de == 1 || de == 2) && place_pion != 0)
  {
    place_pion -- ;
    std::cout <<"De = "<< de << ", dommage on recule d'une case ! "<< std::endl;
    std::cout << std::endl ;
  }
  if ((de == 1 || de == 2) && place_pion == 0)
  {
    std::cout <<"De = "<< de << ", on n'avance pas ! "<< std::endl;
    std::cout << std::endl ;
  }
  if (de == 3 || de == 4 )
  {
    std::cout <<"De = "<< de << ", on n'avance pas ! "<< std::endl;
    std::cout << std::endl ;

  }
  if (de == 5 || de == 6 )
  {
    place_pion ++ ;
    std::cout <<"De = "<< de << ", gagne ! On avance d'une case et on rejoue !"<< std::endl;
    std::cout << std::endl ;

    de = lancer();

    if (de == 5 || de == 6 )
    {
      place_pion ++ ;
      std::cout <<"Nouveau de = "<< de <<" Bravo! On avance d'une case !"<< std::endl;
      std::cout << std::endl ;
    }
  }
}

bool Joueur::achat()
{
  std::string answer;
  std::string yes = "yes";
  std::string no = "no";
  std::string pat = c.name_case(place_pion);
  std::string prop = c.get_proprio(place_pion);
  double nouv_budget = 0.0;
  double prix = c.prix_case(place_pion);

  std::cout << std::endl ;
  std::cout << "Voici les informations relatives a la case : "<< place_pion << std::endl;
  c.affiche_info(place_pion);
  std::cout << "Son prix est de : "<< prix<< std::endl;

  bool value = false;

  std::cout << std::endl ;
  std::cout << "Voulez - vous etre proprietaire de la case "<< place_pion <<", du nom de "<<c.name_case(place_pion)<<"? (yes/no)"<< std::endl ;
  std::cin >> answer;
  std::cout << std::endl ;

  int res_yes = answer.compare(yes);
  int res_no = answer.compare(no);
  
  while (!(res_yes == 0) && !(res_no == 0))
  {
    std::cout << std::endl ;
    std::cout << "Erreur : Repondez par yes ou no." << std::endl;
    std::cin >> answer;
    std::cout << std::endl ;

    res_yes = answer.compare(yes);
    res_no = answer.compare(no);
  }

  if (res_yes == 0)
  {
    value = true;
    prop = c.get_proprio(place_pion);

    if (budget_restant > prix)
    {
      patrimoine.push_back(pat);
      std::cout << "Felicitations ! Vous etes le proprietaire de la case "<< place_pion << std::endl;
      nouv_budget = budget_restant - prix;
    }
    if (budget_restant < prix)
    {
      std::cout << "Vous n'avez pas un budget suffisant pour acheter la case "<< place_pion << std::endl;
    }
    budget_restant = nouv_budget;
  }

  if (res_no == 0)
  {
    std::cout << "Vous avez refuse d'acheter la case." << std::endl;
  }

  return value;
}
