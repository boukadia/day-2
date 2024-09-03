//Écrivez un programme C qui demande à l'utilisateur le nombre d'éléments d'un tableau, puis demande à 
//l'utilisateur de saisir ces éléments. Affichez ensuite les éléments du tableau.
#include<stdio.h>
int main(){
    int nombre,i;
     printf("saisir le nombre des elements");
     scanf("%d",&nombre);
     int tab[nombre];
     for ( i=0;i<nombre;i++){
        
        printf("saisir la  valeur");
        scanf("%d",&tab[i]);
     }
     for ( i=0;i<nombre;i++){
        printf("%d\n",tab[i]);
     }
     
     
}