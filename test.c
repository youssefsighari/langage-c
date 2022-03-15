#include <stdio.h>
#include <string.h>

typedef struct article
{
    int numero;
    char nom[20];
    float prix;
    int qnt;
} article;

article tab[100];

article saisie_Article()
{
    article a;
    printf("le numero d'article est :");
    scanf("%d", &a.numero);
    printf("le nom d'article est :\n");
    scanf("%s", a.nom);
    printf("le prix d'article est :\n");
    scanf("%f", &a.prix);
    printf("la qnt d'article est :\n");
    scanf("%d", &a.qnt);
}

int saisie_choix()
{
    int choix;
    printf("1=afficher tous les articles");
    printf("2=rechercher un article par reference");
    printf("3=ajouter un article en stock en verifiant l'unicite de la reference");
    printf("4=supprimer un article par reference");
    printf("5=modifier un article par reference");
    printf("6=rechercher un article par nom");
    printf("7=rechercher un article par intervalle de prix de vente");
    printf("0=quitter");

    do
    {
        (printf("entrez votre choix"));
        scanf("%d", &choix);
    } while (choix != 0 || choix != 1 || choix != 2 || choix != 3 || choix != 4 || choix != 5 || choix != 6 || choix != 7);

    return choix;
}



int rechercher_reference(char numero[], article tab[], int n)
{
    int i;
    i = 0;
    while (strcmp(tab[i].numero, numero) != 0 && i < n)
    {
        if (strcmp(tab[i].numero, numero) == 0)
            return i;

        i++;
    }
    return -1;
}

int a;
a = nb_article;

void ajouter_article(article stock[], int a)
{

    article x;
    article saisie_Article(x);
    rechercher_reference(x, stock, n);

    if ()
    {
        stock[a] = x;
        a = a + 1;
    }

    else
    {

        printf("article existe deja");
    }
}

void afficher_stock(article stock[], int n)
{
    int i;
    for (i = 0; i <= n; i++)
    {
        printf("le numero de l'article est %d", tab[i].numero);
        printf("le nom de l'article est %s", tab[i].nom);
        printf("le prix de l'article est %f", tab[i].prix);
        printf("la qnt de l'article est %f", tab[i].qnt);
    }
}



void listerstockparprix(article stock[], int n, int a)
{

    int i;
    article aux;
    bool test = vrai;

    while (test)
    {
        for (i = 0; i < n; i++)
        {
            if (stock[i].artcile.prix > stock[i + 1].article.prix)
            {
                aux = stock[i].artcile.;
                stock[i].artcile= stock[i + 1].article;
                stock[i + 1].article= stock[i].artcile;
            }
        }

        if (!(test))
        {
            afficher_stock(stock[], n);
        }
    }
}

int main()
{
    

    return 0;
}