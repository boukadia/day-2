#include<stdio.h>
//Écrivez un programme C qui calcule et affiche la somme des éléments d'un tableau d'entiers. Le programme 
//doit demander le nombre d'éléments, puis les éléments du tableau, et afficher la somme totale.

int main(){
    int nombre,i,somme=0;
     printf("saisir le nombre des elements");
     scanf("%d",&nombre);
     int tab[nombre];
     for ( i=0;i<nombre;i++){
        
        printf("saisir la  valeur");
        scanf("%d",&tab[i]);
        somme=somme+tab[i];
     }
     
        printf("%d",somme);
     
}