#include<stdio.h>
/*Écrivez un programme C qui lit un entier n et affiche tous les nombres premiers de 1 à n. 
Un nombre est considéré premier s'il est divisible uniquement par 1 et lui-même.*/
#include<stdio.h>

int main(){
    int n,i,p=1;
     printf("saisir le nombre des elements : ");
     scanf("%d",&n);
     for ( i=2;i<n;i++){
        if(n%i==0){
            p=0;
            break;
        }
        }
        if(p==1)
        printf("le nombre est premier");
        else
        printf("le nombre n est pas premier");
    
     
}