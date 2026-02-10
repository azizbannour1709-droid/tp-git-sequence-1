// Affiche un message de bienvenue
#include "fonction-bienvenue.h"
#include <string>
#include <sstream>

int main(int argc, char* argv[])
{
    std::string message = "Bienvenue le monde !";
    int nbAffichage = 1;
    
    // Si un message est fourni
    if(argc >= 2)
    {
        message = argv[1];
    }
    
    // Si un nombre d'affichages est fourni
    if(argc >= 3)
    {
        std::stringstream ss(argv[2]);
        ss >> nbAffichage;
    }
    
    afficherBienvenue(message, nbAffichage);
    
    return 0;
}
