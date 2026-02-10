#include "fonction-bienvenue.h"
#include <iostream>

void afficherBienvenue(std::string message/*="Bienvenue le monde !"*/, int nbAffichage/*=1*/)
{
    for(int i = 0; i < nbAffichage; i++)
    {
        std::cout << message << std::endl;
    }
}
