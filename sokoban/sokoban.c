#include <stdlib.h>
#include <string.h>
#include <stdio.h>



int main (int argc, char** argv)
{
	Sokoban S;
	Action A;
	afficher_menu();
	S = choix_niveau( int argc, char **argv); 
	S = afficher_plateau();
	
	do{
		A = action_effectuer();
		S = effectuer_action(S,A);
		actualiser_plateau();	

	}while (mode_action() != quitter); 

	return 0; 
}

