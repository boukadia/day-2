#include<stdio.h>
//Écrivez un programme C qui trouve et affiche le plus grand élément dans un tableau d'entiers. 
//Le programme doit demander le nombre d'éléments et les éléments du tableau.
#include<stdio.h>

int main(){
    int nombre,i,max;
     printf("saisir le nombre des elements");
     scanf("%d",&nombre);
     int tab[nombre];
     
     for ( i=0;i<nombre;i++){
        printf("saisir la  v1aleur");
        scanf("%d",&tab[i]);
        if (i == 0)
         max=tab[0];
        if (max<tab[i])
         max=tab[i];

     }
     printf("le maximum est : %d",max);
     
}