#include<stdio.h>
/*Écrivez un programme C qui lit un entier à plusieurs chiffres et l'affiche en ordre inverse sans utiliser de tableaux.
 Par exemple, si l'entrée est 12345, affichez 54321.*/

int main(){
    int nombre,rest,inverse;
     printf("saisir le nombre  : ");
     scanf("%d",&nombre);
     while(nombre!=0){
        
           rest=nombre%10;
           inverse=inverse*10+rest;
           nombre=nombre/10;  
        
        }
        printf("%d",inverse);
        return 0;
}