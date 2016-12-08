// fichier pour la lecture du document 

SO lire_fichier () 
{

}

char* nom_du_fichier ()
{

}

void faire_niveau ()
{
// la possibilité de création des niveaux
}

void lire_terminal () 
{

}

void enregister_fichier () 
{

}




/*

#include "constantes.h"
#include "sudoku.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
 
SUDOKU lire (char* str)
{
	SUDOKU S;
	int x,y, k;
 
	FILE *fic = fopen (str,"r");
	if (fic == NULL) 
	{
	//	fprintf(stderr,"echec ouverture %s \n", str);
		printf ("echec ouverture fichier %s \n", str);
		exit (EXIT_FAILURE);
	}

	S.mode = JOUER; 
	for (x=0 ; x<N ; x++)
		for (y=0 ; y<N ; y++) 
		{
			fscanf (fic, "%d ",&k); // fscanf lis dans le fichier fic , ici lis que les int 
			S.la_case [x][y].val = k; 
		}
	for (x=0 ; x<N ; x++)
		for (y=0 ; y<N ; y++) 
		{
			fscanf(fic,"%d ",&k);
			S.la_case[x][y].modifiable = k;
		}

	fclose (fic);
	return S; 
}

char* nomFichier ()
{
	return "toto.sudoku";
}

void ecrireSudoku (SUDOKU S)
{
	FILE* fic;
	int x,y;
	char* str =nomFichier();
	//char str[100];
	//nomFichier (str);	
	fic = fopen(str,"w");
	
	if (fic == NULL) 
	{
	//	fprintf(stderr,"echec ouverture %s \n", str);
		printf ("echec ouverture fichier %s \n", str);
		exit (EXIT_FAILURE);
	}
	for (x=0 ; x<N ; x++)
	{
		for (y=0 ; y<N ; y++) 
		{
			fprintf (fic, "%d ", S.la_case [x][y].val ); // affiche le caractère qui est &k est non la valeur 
			//S.la_case [x][y].val = s; 
		}
		printf("\n");
	}	
	for (x=0 ; x<N ; x++)
	{
		for (y=0 ; y<N ; y++) 
		{
			fprintf(fic,"%d ", S.la_case[x][y].modifiable );

		}
		printf("\n");
	}
	fclose (fic);

}

void NomFichier(char* str)
{
	time_t sec;
	struct tm temps;
	sec = time(NULL);
	temps = *localtime(&sec);
	sprintf (str,"%d-%d-%d_%d:%d:%d", temps.tm_mday, temps.tm_mon+1, temps.tm_year+1900,temps.tm_hour, temps.tm_min, temps.tm_sec);
} 
/*
