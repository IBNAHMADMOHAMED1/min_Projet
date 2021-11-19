#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    char* nom[20][100];
    int tele[10];
}personne;

    personne table[100];
    char* personne_ajouter[30];
    int position;
    char* dab ;
    char*  d ;
    int nomber_personne;
    int i , j ;

void cree_presonne(int nomber_personne);
void afficher (int nomber_personne);

int main()
{



    int Action ;
     while(1)
     {
    printf("Que voulez vous faire : \n");
    printf("-> Saise le repertoir            (0)\n");
    printf("-> Ajouterune personne           (1)\n");
    printf("-> Affichr le repertoir          (2)\n");
    printf("-> Faire un recherche par nom    (3)\n");
    printf("-> Retirer un personne par nom   (4)\n");
    printf("-> Terminer                      (5)\n");

    scanf("%d",&Action);
   // cree_presonne(table[100],nomber_personne);

    if (Action==0)
        {
            printf("Enter nombre des personne :  ");
            scanf("%d",&nomber_personne);
            cree_presonne(nomber_personne);
        }
    if (Action==1)
    {
        ajouterPersonne();
    }

    if (Action==2) afficher(nomber_personne);

 /*
    if (Action==3) recherch();
    if (Action==4) retier();*/
    if (Action==5) break;

    printf("\n");

     }


    return 0;
}


void cree_presonne(int nomber_personne)
{
    int i ;
    for (i=0;i<nomber_personne;i++)
    {
        printf("Enter Nom de Presonne %d :  ",i+1);
        scanf("%s",table->nom);
        printf("Enter num de Tele de %s :  ",table->nom);
        scanf("%d",table->tele);

    }
}
void afficher (int nomber_personne)

    {

        for (i=0;i<nomber_personne;i++)
        {
            printf("%s | %d \n",table->nom,*table->tele);
        }
    }
void ajouterPersonne()
{
           printf("Entrer Le Personne a Ajouter: ");
           scanf("%s",personne_ajouter);
           printf("Entrer la position: ");
           scanf("%d",&position);


           //printf("--------- %d \n",position);
         //  printf("--------- %s",table[0].nom[0]);
          //printf("--------- %s",personne_ajouter);


           dab = table[position].nom;
          *table[position].nom[position]=personne_ajouter;

        for (i=0;i<nomber_personne+1;i++)
        {
                position++;
               d = table[position].nom;
             //  table[position].nom=dab;
               //tab[position]=valeur_ajouter;
               dab =d ;
            table[position].tele=08939;

        }
         for (i=0;i<nomber_personne+1;i++)
        {
            printf("%s | %d \n",table->nom,*table->tele);
        }
}
