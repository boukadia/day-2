#include<stdio.h>
/*Écrivez une fonction en C qui prend deux entiers en paramètres et retourne leur produit. 
Créez un programme principal qui utilise cette fonction pour afficher le produit de deux nombres.*/
int produit(int a,int b){
    int p=a*b;
    return p;
    }
    int main (){
        int a,b,n;
        printf("saisis les deux nombres : \n");
        scanf("%d %d",&a,&b);
        n=produit(a,b);
        printf("le produit  de %d et %d est : %d",a,b,n);
        return 0;
    }
