#ifndef PROJECT_H_INCLUDED
#define PROJECT_H_INCLUDED

typedef struct 
{
	int id ;
	int N_bv;
	char Type_de_reclamation [50];
	char Texte_de_reclamation[1500] ;
} reclamer;

int ajouter (reclamer R, char * filename);
int modifier (int id , reclamer nouv ,char * filename);
int supprimer (int id , char * filename);
reclamer chercher ( char * filename,int id);



#endif //PROJECT_H_INCLUDED
