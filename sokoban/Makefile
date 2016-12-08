CFLAGS = -c -g -Wall -std=c99

all : sokoban
	./skoban

sokoban: # dependance 
	gcc 

sokoban.o: sokoban.c constantes.h
	gcc $(CFLAGS) sokoban.c

affichage.o: affichage.c constantes.h
	gcc $(CFLAGS) affichage.c

clean: 
	rm -f sokoban
	rm -f sokoban.o
	rm -f affichage.o 

