#include <stdio.h>


typedef struct matiere
{
    char nom[20];
    int coeff;
    float note;
} matiere; 


typedef struct etud
{
    int nce;
    char nom[20];
    char prenom[20];
    int niveau;
    float moyenne;
    int nb_matieres;
    matiere tab[12];
} etud;





void saisie_etud(etud *E)
{
    printf("donner nce: ");
    scanf("%d", &(*E).nce);
    printf("\ndonner le nom: ");
    scanf("%s", &(*E).nom);
    printf("\ndonner le prenom: ");
    scanf("%s", &(*E).prenom);
    printf("\ndonner le niveau: ");
    scanf("%d", &(*E).niveau);
    printf("\ndonner le nombre des matieres: ");
    scanf("%d", &(*E).nb_matieres);

    int i;
    for(i=0; i<(*E).nb_matieres; i++){
        printf("le nom de la matiere est:");
        scanf("%s",(*E).tab[i].nom);
          printf("la coefficient de la matiere est: ");
        scanf("%f",&(*E).tab[i].coeff);
          printf("la note est: ");
        scanf("%f",&(*E).tab[i].note);

    }
}

void afficher_etud(etud E){
  printf("le numero du nce est %d\n",E.nce);
  printf("le nom de l'etudiant est %s\n",E.nom);
  printf("le prenom de l'etudiant est %s\n",E.prenom);
  printf("le niveau de l'etudiant est %d\n",E.niveau);
  printf("le nombre de matieres est %d",E.nb_matieres);
}

void calculer_moyenne_etudiant(etud *E)
{
    
    float s = 0;
    float s1 = 0;
    int i;
    for (i = 0; i < (*E).nb_matieres; i++)
    {
        s = s + (*E).tab[i].note * E.tab[i].coeff;
        s1 = s1 + (*E).tab[i].coeff;
    }

   
    
    float moyenne = s / s1;

    return moyenne;
}

//float calculer_moyenne_classe()







int main()
{
etud A;
saisie_etud(&A);
 afficher_etud(&A);
printf("moyenne de l'etudiant :%f",calculer_moyenne_etudiant(A));
    return 0;
}
