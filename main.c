#include <stdio.h>


 typedef struct etudiant{
     int nce;
     char nom[20];
     char prenom[20];
     int niveau;
     float moyenne ;
     int nb_matieres;
 } etudiant;
 
 
 struct matieres{
     char nom[20];
     int coeff;
     float note;
 }
 
 void saisie_etudiant(etud){
     printf("donner nce: ");
     scanf("%d\n",nce);
     printf("donner le nom: ");
     scanf("%s\n",nom);
     printf("donner le prenom: ");
     scanf("%s\n",prenom);
     printf("donner le niveau: ");
     scanf("%d\n",niveau);
     printf("donner le nombre des matieres: ");
     scanf("%d\n",nb_matieres);
 }
 
   int moyenne(int s, int s1, int i, int nb_matieres ){

     s=0;
     for(i=0; i<=nb_matieres; i++){
         s=s+( matieres.note[i] * matieres.coeff[i]) ;
     }
      
    s1=0;
    for(i=0; i<nb_matieres; i++){
        s1=s1+ matieres.coeff;
    }


    moyenne=s/s1;

       return moyenne;
   }
    
   


int main()
{
   
 
 

   

   
   
   
   return 0;
   
}
