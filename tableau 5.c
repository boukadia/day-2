#include<stdio.h>
//Écrivez un programme C qui trouve et affiche le plus petit élément dans un tableau d'entiers. 
//Le programme doit demander le nombre d'éléments et les éléments du tableau.
#include<stdio.h>

int main(){
    int nombre,i,min;
     printf("saisir le nombre des elements");
     scanf("%d",&nombre);
     int tab[nombre];
     
     for ( i=0;i<nombre;i++){
        printf("saisir la  v1aleur");
        scanf("%d",&tab[i]);
        min=tab[0];
        if (min>tab[i])
        min=tab[i];

     }
     printf("le minimum est : %d",min);
     
}