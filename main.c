#include <stdio.h>

typedef struct etud
{
    int nce;
    char nom[20];
    char prenom[20];
    int niveau;
    float moyenne;
    int nb_matieres;
} etud;

typedef struct matiere
{
    char nom[20];
    int coeff;
    float note;
} matiere; 

matiere tab[12];

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
    scanf("%d\n", &(*E).nb_matieres);
}

float calculer_moyenne(int nb_matiere)
{
    struct matiere matiere;
    float s = 0;
    int i;
    for (i = 0; i <= 12; i++)
    {
        s = s + tab[i].note * tab[i].coeff;
    }

    float s1 = 0;
    for (i = 0; i <= 12; i++)
    {
        s1 = s1 + tab[i].coeff;
    }

    float moyenne = s / s1;

    return moyenne;
}

int main()
{

    return 0;
}
