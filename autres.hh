#include <iostream>
#include <string>

bool bon_pion(std::string pion)
{
    bool value = true;

    if ((pion != "@") && (pion != "!") && (pion != "*") && (pion != "$") && (pion != "%"))
        value = false;

    return value;
}
