#include <iostream>
#include <string>

class Jeu
{
  public :
  // constructeurs :

  // destructeur :
  virtual ~Jeu() = 0 ;

  // getter :
  std::string get_name() const{return nom_du_jeu;};
  std::int get_number() const{return nbr_joueur};
  std::int get_diff() const{return difficulte};
  std::int get_tour() const{return num_tour;};

  private :
  std::string nom_du_jeu ;
  std::int nbr_joueur ;
  std::int difficulte ;
  // plateau : liste des cases
  std::int num_tour ;
  std::string plateau[22] = {"SUN01","Px0x7","LXioR09","PAAR01","LR129",
  "Lrum43","C287907432","LhZZAR","Fom25X","FaRI458","L97360","L86yt70",
  "L5rAaR","PxW20","C864322452","LxXx01","P28Txx","FuSSS43","Lx4531Z","LzyR10","P87XXXR","Fyii111XZ"};

};
