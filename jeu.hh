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

};
