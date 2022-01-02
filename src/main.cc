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

int main()
{
    // initialisation du plateau

    Case c1("SUN01");
    Case c2("Px0x7");
    Case c3("LXioR09");
    Case c4("PAAR01");
    Case c5("LR129");
    Case c6("Lrum43");
    Case c7("C287907432");
    Case c8("LhZZAR");
    Case c9("Fom25X");
    Case c10("FaRI458");
    Case c11("L97360");
    Case c12("L86yt70");
    Case c13("L5rAaR");
    Case c14("PxW20");
    Case c15("C864322452");
    Case c16("LxXx01");
    Case c17("P28Txx");
    Case c18("FuSSS43");
    Case c19("Lx4531Z");
    Case c20("LzyR10");
    Case c21("P87XXXR");
    Case c22("Fyii111XZ");

    const int len = 22;
    Case list_cases[len];

    list_cases[0] = c1;
    list_cases[1] = c2;
    list_cases[2] = c1;
    list_cases[3] = c4;
    list_cases[4] = c5;
    list_cases[5] = c6;
    list_cases[6] = c7;
    list_cases[7] = c8;
    list_cases[8] = c9;
    list_cases[9] = c10;
    list_cases[10] = c11;
    list_cases[11] = c12;
    list_cases[12] = c13;
    list_cases[13] = c14;
    list_cases[14] = c15;
    list_cases[15] = c16;
    list_cases[16] = c17;
    list_cases[17] = c18;
    list_cases[18] = c19;
    list_cases[19] = c20;
    list_cases[20] = c21;
    list_cases[21] = c22;


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

    std::cout << std::endl ;
    std::cout << std::endl ;

    // Joueur 1 :
    std::cout << "Pour le joueur n°1, saisir les informations suivantes ; " << std::endl ;
    std::cout << "• Nom : " << std::endl ;
    std::cin >> nom ;
    std::cout << "• Pion (@, £, *, $, %) : " << std::endl ;
    std::cin >> pion ;
    while (!bon_pion(pion))
    {
      std::cout << "Choisir entre (@, £, *, $, %)" << std::endl ;
      std::cin >> pion ;
    }
    Joueur a (nom, pion);
    std::cout << "• ID : " << a.get_id() <<std::endl ;

    std::cout << std::endl ;
    std::cout << std::endl ;

    // Joueur 2 :
    std::cout << "Pour le joueur n°2, saisir les informations suivantes ; " << std::endl ;
    std::cout << "• Nom : " << std::endl ;
    std::cin >> nom ;
    std::cout << "• Pion (@, £, *, $, %) : " << std::endl ;
    std::cin >> pion ;
    while (!bon_pion(pion))
    {
      std::cout << "Choisir entre (@, £, *, $, %)" << std::endl ;
      std::cin >> pion ;
    }
    Joueur b (nom, pion);
    std::cout << "• ID : " << b.get_id() <<std::endl ;


    // Débuter le jeu :
    std::cout << "------------------------------------------------------------------------------" << std::endl;
    std::cout << "                        Débutons le jeu " << std::endl ;
    std::cout << "------------------------------------------------------------------------------" << std::endl;
    std::cout << std::endl ;

    std::cout << "------------------------------------------------------------------------------" << std::endl;
    std::cout << "On a les informations suivantes pour chaque joueur : " << std::endl;
    std::cout << "------------------------------------------------------------------------------" << std::endl;
    a.affiche_info();
    b.affiche_info();

    std::cout << std::endl ;

    while ((a.patrimoine).size() != 2 || (b.patrimoine).size() != 2)
    {
        // Le premier joueur commence :
        std::cout << std::endl ;
        std::cout << std::endl ;
        std::cout << "------------------------------------------------------------------------------" << std::endl;
        std::cout<<"                        Au tour de "<<a.get_nom() << ":"<<std::endl ;
        std::cout << "------------------------------------------------------------------------------" << std::endl;
        std::cout << std::endl ;
        std::cout<<a.get_nom()<<" lance le dé !" << std::endl ;
        a.deplacement();

        std::cout<<a.get_nom()<<" se trouve au niveau de la case "<<a.place_pion << std::endl ;
        a.achat();
        a.affiche_info();

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
        b.achat();
        b.affiche_info();
    }

    if (a.patrimoine.size() == 2)
    {
      std::cout << std::endl ;
      std::cout << "------------------------------------------------------------------------------" << std::endl;
      std::cout<<"                    Bravo "<<a.get_nom()<<" est le grand gagant ! " << std::endl ;
      std::cout << "------------------------------------------------------------------------------" << std::endl;
      std::cout << std::endl ;
    }
    if (b.patrimoine.size() == 2)
    {
      std::cout << std::endl ;
      std::cout << "------------------------------------------------------------------------------" << std::endl;
      std::cout<<"                    Bravo "<<b.get_nom()<<" est le grand gagant ! " << std::endl ;
      std::cout << "------------------------------------------------------------------------------" << std::endl;
      std::cout << std::endl ;
    }

    return 0;
}
