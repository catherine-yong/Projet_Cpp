#include <iostream>
#include <string>

bool bon_pion(std::string pion) // fait expres qu'elle soit en dehors de la classe
{
    bool value = true;

    if ((pion != "@") && (pion != "£") && (pion != "*") && (pion != "$") && (pion != "%"))
        value = false;

    return value;

}