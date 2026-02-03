bienvenue: bienvenue.o fonction-bienvenue.o
	g++ -o bienvenue bienvenue.o fonction-bienvenue.o

bienvenue.o: bienvenue.cpp fonction-bienvenue.h
	g++ -c -Wall -std=c++11 bienvenue.cpp

fonction-bienvenue.o: fonction-bienvenue.cpp fonction-bienvenue.h
	g++ -c -Wall -std=c++11 fonction-bienvenue.cpp

clean:
	rm -f *.o

cleanall:
	rm -f *.o bienvenue

rebuild: clean bienvenue
