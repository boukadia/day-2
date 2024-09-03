#include<stdio.h>
/*Écrivez une fonction en C qui calcule la factorielle d'un entier positif. 
La fonction doit prendre un entier en paramètre et retourner sa factorielle. Créez un programme principal qui utilise cette fonction 
pour afficher la factorielle d'un nombre donné.*/
int facturiel(int n){
    int p=1;
    for(int i=1;i<=n;i++)
    p =p*i;
    return p;
    

    }
    int main (){
        int n,p;
        printf("saisis le nombres : \n");
        scanf("%d",&n);
        p=facturiel(n);
        printf("la facturiel est : %d",p);
        return 0;
    }
