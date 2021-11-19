#include<stdio.h>
#include<string.h>

// Définition de la structure Salle
typedef struct Salle {
	int id;
	char libelle[20];
	int capacite;
} Salle;
// *************       Fonction qui cree une salle     *****************************************

Salle CreerSalle() {
	Salle s;
	printf("Entrer l'' identificateur : ");
	scanf("%d", &s.id);
	printf("Entrer le libelle : ");
	scanf("%s", s.libelle);
	printf("Entrer la capacite : ");
	scanf("%d", &s.capacite);
	return s;
}


// ********************* onction qui remplit un tableau de salles *******************

void SaisirInfosSalle(Salle Liste[],int n) {
	int i;
	for(i=0; i<n; i++){
		Liste[i] = CreerSalle();
	}
}

// ********************************** Affichage d'une salle *****************************
void AfficherSalle(Salle s) {
	printf("Id Salle : %d; ", s.id);
	printf("Libelle Salle : %s; ", s.libelle);
	printf("Capacite Salle : %d\n\n", s.capacite);

}

// ********************************** Affichage de la liste des salles *************************

void AfficherInfosSalles(Salle Liste[], int n ) {
	int i;
	for(i=0; i<n; i++){
		printf("Salle %d : \n", i+1);
		AfficherSalle(Liste[i]);
	}
}

// ********************************** Recherche d'une salle par ID ******************************

int RechercherSalle(int id, Salle Liste[], int n){
	int var_Recherch = 0, i;
	for(i=0; i<n; i++){
		if(Liste[i].id == id){
			var_Recherch;
			break;
		}
	}
	return var_Recherch;
}

// ********************************** Suppression d'un salle **************************************
void SupprimerSalle(int id, Salle Liste[], int n){
	int i, j;
	if(!RechercherSalle(id, Liste, n)){
		printf("Salle n''existe pas!\n");
	}
	else{

		for(i=0; i<n; i++){
			if(Liste[i].id == id){
				for(j=i; j<n-1; j++){
					Liste[j] = Liste[j+1];
				}

				n--;

			}
		}
		printf("Liste des salles apres suppression de la salle %d : \n", id);
		AfficherInfosSalles(Liste, n);
	}
}

// **************************************Tri de la liste des salles par ordre (Croissant) alphabétique des libelles **********

void TrierSallesParLibelle(Salle Liste[], int n){
	int i, j;
	Salle s;
	for(i=0; i<n; i++){
		for(j=i;j<n;j++){
	        if(strcmp(Liste[i].libelle , Liste[j].libelle) == 1)
			{
	        	s = Liste[i];
	           	Liste[i] = Liste[j];
	           	Liste[j] = s;
	        }
    	}
	}
	puts("Liste des Salles triees par libelle:");
	AfficherInfosSalles(Liste, n);
}



main(){
	int n, choix, id;


	Salle t[30], * a;


	do{
//      ************************* Menu **********************

		puts("--_-_-_-_-_-_-_-_-_-_-_-Menu-_-_-_-_-_-_-_-_-_-_-_-_-_\n\n");
		puts("1:	Lire les salles.");
		puts("2:	Afficher la liste des salles.");
		puts("3:	Supprimer une salle.");
		puts("4:	Afficher les salles classées par libelle.");
		puts("6:	Quitter le programme.");
		puts("Tapez votre choix :");
		scanf("%d", &choix);

		switch(choix){
			case 1:
					printf("Donner le nombre d'articles: ");
					scanf("%d", &n);
					SaisirInfosSalle(t, n);
					break;

			case 2:
					AfficherInfosSalles(t,n);
					break;
			case 3:
					printf("Entrer l'identificatuer de la salle a supprime: ");
					scanf("%d", &id);
					SupprimerSalle(id, t, &n);
					break;
			case 4:
					TrierSallesParLibelle(t,n);
					break;

			case 5:
					printf("Fin du programme\n");
					break;
			default:
					printf("Choix invalid!\n");

		}
	}while(choix != 5);
}
