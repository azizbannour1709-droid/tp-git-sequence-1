# Bienvenue

Programme C++ qui affiche "Bienvenue le monde !"
## Utilisation

Programme simple qui affiche un message de bienvenue.
## Compilation
```sh
$ make rebuild
rm -f *.o
g++ -c -Wall -std=c++11 bienvenue.cpp
g++ -c -Wall -std=c++11 fonction-bienvenue.cpp
g++ -o bienvenue bienvenue.o fonction-bienvenue.o
$ ./bienvenue
Bienvenue le monde !
```
## Modifications

- Ajout d'un paramètre `message` avec valeur par défaut dans la fonction `afficherBienvenue()`
- Le message peut maintenant être personnalisé
