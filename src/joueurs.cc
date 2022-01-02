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
    budget_restant = j.get_budget(); // a voir
}

Joueur::Joueur(std::string name , std::string pion): nom(name),pion(pion)
{
    id = cpt;
    cpt++;
    budget_restant = budget_constant; // budget de base
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

void Joueur::set_budget_tour()
{
    budget_restant = 3*budget_restant;
}

double Joueur::gain(Jeu &game)
{
  if ((game.get_tour())%3 == 0 )
    set_budget_tour();

  return budget_restant;
}

void Joueur::vente(Case &case_achetee)
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
  std::cout << " Joueur n°"<< id <<" :"<< std::endl ;
  std::cout << "-------------"<< std::endl ;
  std::cout << "• Nom : " <<get_nom()<< std::endl;
  std::cout << "• Pion : " <<get_pion()<< std::endl;
  std::cout << "• Budget initial : " << get_budget() << std::endl;
  std::cout << "• Liste du patrimoine de "<<get_nom()<<":"<<std::endl;
  
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
    std::cout <<"Valeur du lancer = "<< de << ", dommage on recule d'une case ! "<< std::endl;
    std::cout << std::endl ;
  }
  if ((de == 1 || de == 2) && place_pion == 0)
  {
    std::cout <<"Valeur du lancer = "<< de << ", on n'avance pas ! "<< std::endl;
    std::cout << std::endl ;
  }
  if (de == 3 || de == 4 )
  {
    std::cout <<"Valeur du lancer = "<< de << ", on n'avance pas ! "<< std::endl;
    std::cout << std::endl ;

  }
  if (de == 5 || de == 6 )
  {
    place_pion ++ ;
    std::cout <<"Valeur du lancer = "<< de << ", c'est gagne ! On avance d'une case et on rejoue !"<< std::endl;
    std::cout << std::endl ;

    de = lancer();

    if (de == 5 || de == 6 )
    {
      place_pion ++ ;
      std::cout <<"Nouvelle valeur du lancer = "<< de <<" Bravo ! On avance d'une case !"<< std::endl;
      std::cout << std::endl ;
    }
  }
}

std::string Joueur::maj_p()
{
  c.get_proprio() = nom;
  return c.get_proprio();
}

bool Joueur::achat()
{
  std::string answer;
  std::string yes = "yes";
  std::string pat = c.name_case(place_pion);
  std::string prop ;

  std::cout << std::endl ;
  std::cout << "Voici les informations relatives a la case : "<< place_pion << std::endl;
  c.affiche_info(place_pion);

  bool value = false;

  std::cout << std::endl ;
  std::cout << "Voulez - vous etre proprietaire de la case "<< place_pion <<", du nom de "<<c.name_case(place_pion)<<"? (yes/no)"<< std::endl ;
  std::cin >> answer;
  std::cout << std::endl ;


  int res = answer.compare(yes);

  std::cout <<"NOM : "<< nom<< std::endl ;
  std::cout <<"PROP : "<< c.get_proprio()<< std::endl ;

  if (res == 0)
  {
    value = true;
    prop = c.get_proprio();

    if (budget_restant > c.prix_case(place_pion) && prop.compare("Unknown") == 0)
    {
      patrimoine.push_back(pat);

      // ACTUALISER LE PROPRIETAIRE !!
      set_proprio(nom);
      std::cout << "Félicitation vous etes le proprietaire de la case "<< place_pion << std::endl;
      std::cout <<"NOM : "<< nom<< std::endl ;
      std::cout <<"PROP : "<< c.get_proprio()<< std::endl ;
    }
    if (budget_restant < c.prix_case(place_pion))
    {
      std::cout << "Vous n'avez pas un budget suffisant pour acheter la case "<< place_pion << std::endl;
    }
    if (prop.compare("Unknown") != 0)
    {
      std::cout << "La case "<< place_pion<<" appartient a un autre joueur " << std::endl;
    }
  }
  return value;
}
