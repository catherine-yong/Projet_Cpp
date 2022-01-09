#include "carburant.hh"
#include "case.hh"
#include "fusee.hh"
#include "jeu.hh"
#include "joueurs.hh"
#include "lune.hh"
#include "planete.hh"
#include "soleil.hh"
#include "type.hh"
#include "autres.hh"

#include <time.h>
#include <stdlib.h>
#include <vector>

int const nb_final(2);

int main()
{
    srand(time(NULL));
    std::cout << "------------------------------------------------------------------------------ " << std::endl;
    std::cout << "------------------------------------------------------------------------------" << std::endl;
    std::cout << "------------------------------------------------------------------------------" << std::endl;
    std::cout << "                      Bienvenue dans le Plano-Poly 2.0 ! " << std::endl;
    std::cout << "------------------------------------------------------------------------------"<< std::endl;
    std::cout << "------------------------------------------------------------------------------" << std::endl;
    std::cout << "------------------------------------------------------------------------------" << std::endl;
    std::cout << "                   ~~~~~~ Ce jeu se joue a 2 joueurs ~~~~~~" << std::endl ;
    std::cout << "------------------------------------------------------------------------------" << std::endl;

    std::string nom ;
    std::string pion;
    Case c;
    int cmpt_tour = 1;
    std::string answer;

    std::cout << std::endl ;
    std::cout << std::endl ;

    // Joueur 1 :
    std::cout << "Pour le joueur 1, saisir les informations suivantes : " << std::endl ;
    std::cout << "- Nom : " << std::endl ;
    std::cin >> nom ;
    std::cout << "- Pion (@, !, *, $, %) : " << std::endl ;

    std::cin >> pion ;

    while(!bon_pion(pion))
    {
      std::cout << "Veuillez choisir un pion parmi (@, !, *, $, %)" << std::endl;
      std::cin >> pion ;
    }

    Joueur a (nom, pion);
    std::cout << "- ID : " << a.get_id() <<std::endl ;

    std::cout << std::endl ;
    std::cout << std::endl ;

    // Joueur 2 :
    std::cout << "Pour le joueur 2, saisir les informations suivantes ; " << std::endl ;
    std::cout << "- Nom : " << std::endl ;
    std::cin >> nom ;
    std::cout << "- Pion (@, !, *, $, %) : " << std::endl ;
    std::cin >> pion ;

    while(!bon_pion(pion))
    {
      std::cout << "Veuillez choisir un pion parmi (@, !, *, $, %)" << std::endl;
      std::cin >> pion ;
    }

    while (pion == a.get_pion())
    {
      std::cout << "Vous avez pris le meme pion que le joueur 1. Recommencez SVP " << std::endl;
      std::cin >> pion ;
    }
    Joueur b (nom, pion);
    std::cout << "- ID : " << b.get_id() <<std::endl ;


    // Débuter le jeu :
    std::cout << "------------------------------------------------------------------------------" << std::endl;
    std::cout << "                        Debutons le jeu " << std::endl ;
    std::cout << "------------------------------------------------------------------------------" << std::endl;
    std::cout << std::endl ;

    while ((a.patrimoine).size() != nb_final && (b.patrimoine).size() != nb_final)
    {
        // Le premier joueur commence :
        std::cout << std::endl ;
        std::cout << std::endl ;
        std::cout << "------------------------------------------------------------------------------" << std::endl;
        std::cout<<"                        Au tour de "<<a.get_nom() << ":"<<std::endl ;
        std::cout << "------------------------------------------------------------------------------" << std::endl;
        std::cout << std::endl ;
        std::cout<<a.get_nom()<<" lance le de !" << std::endl ;
        a.deplacement();
        std::cout<<a.get_nom()<<" se trouve au niveau de la case "<<a.place_pion << std::endl ;
        std::cout<<"budget : "<<a.get_budget()<< std::endl ;

        if(c.liste_propio[a.place_pion].compare("Unknown")==0)
        {
          a.achat();
          c.liste_propio[a.place_pion]=a.get_nom();
        }
        else
        {
          std::cout << "La case "<< a.place_pion <<" appartient a un autre joueur ! "<< std::endl;
        }

        std::string Ok("Ok");
        std::string ok("ok");
        std::cout << "Entrez Ok pour continuer "<<std::endl ;
        std::cin >> answer;

        while ((answer.compare(ok) != 0 ) && (answer.compare(Ok)))
        {
          std::cout << "Entrez Ok pour continuer "<<std::endl ;
          std::cin >> answer;
        }

        std::cout << std::endl ;
        std::cout << std::endl ;

        // Au tour du deuxième joueur :
        std::cout << "------------------------------------------------------------------------------" << std::endl;
        std::cout<<"                        Au tour de "<<b.get_nom() << ":"<<std::endl ;
        std::cout << "------------------------------------------------------------------------------" << std::endl;
        std::cout << std::endl ;
        std::cout<<b.get_nom()<<" lance le de !" << std::endl ;
        b.deplacement();
        std::cout<<b.get_nom()<<" se trouve au niveau de la case "<<b.place_pion << std::endl ;
        std::cout << std::endl ;
        std::cout<<"Budget : "<<b.get_budget()<< std::endl ;
        std::cout << std::endl ;

        if(c.liste_propio[b.place_pion].compare("Unknown")==0)
        {
          b.achat();
          c.liste_propio[b.place_pion]=b.get_nom();
        }
        else
        {
          std::cout << "La case "<< b.place_pion <<" appartient a un autre joueur ! "<< std::endl;
        }

        std::cout << "Entrez Ok pour continuer "<<std::endl ;
        std::cin >> answer;

        while ((answer.compare(ok) != 0 ) && (answer.compare(Ok)))
        {
          std::cout << "Entrez Ok pour continuer "<<std::endl ;
          std::cin >> answer;
        }

        cmpt_tour ++;

        if ((cmpt_tour)%3 == 0 )
        {
          a.set_budget_tour();
          b.set_budget_tour();
        }
    }

    if (a.patrimoine.size() == nb_final)
    {
      std::cout << std::endl ;
      std::cout << "------------------------------------------------------------------------------" << std::endl;
      std::cout<<"                    Bravo ! " <<a.get_nom()<<" est le grand gagnant ! " << std::endl ;
      std::cout << "------------------------------------------------------------------------------" << std::endl;
      std::cout << std::endl ;
    }
    
    if (b.patrimoine.size() == nb_final)
    {
      std::cout << std::endl ;
      std::cout << "------------------------------------------------------------------------------" << std::endl;
      std::cout<<"                    Bravo ! " <<b.get_nom()<<" est le grand gagnant ! " << std::endl ;
      std::cout << "------------------------------------------------------------------------------" << std::endl;
      std::cout << std::endl ;
    }

    return 0;
}
