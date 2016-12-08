// une structure pour voir les element d'avant et une structure pour le mode, case (jouable, mur, caisse, arrivé caisse) 
struct Action
{
	int val;
	int la_case;  // si case est un mur, vide, perso, endroit pour les case  
		
};

struct Sokoban
{
	int mode_jeux;
	struct Action la_case les_cases [F][F];		
};
typedef struct Sokoban Sokoban;

struct PileUndo{
	int position [x][y];
	struct PileUndo* precedent;  
	bool undo; 		
};
typedef struct PileUndo PileUndo; 

struct PileRedo {
	int position [x][y];
	struct PileRedo* precedent; 
	bool redo;
};
typedef struct PileRedo PileRedo;


void deplacement_clavier() //du perso 
{

}

void deplacement_souris () 
{

}

void mode_de_jeux ()
{

}

PileUndo creerListeVide () 
{
 
}

int estPileUndoVide (PileUndo P) 
{
	
	// si la pile undo est nul on renvoi la valeur 1 sinon 0 est 0 est la valeur pour " tout va bien" 
}

PileUndo ajoutDeplac ( PileUndo P, int x, int y)
{
	
}

PileUndo push ( PileUndo P, int x,y) 
{
	
}

int modeUndo ( PileUndo Pu, PileRedo Pr)
{


}
