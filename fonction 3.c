#include<stdio.h>
/*Écrivez une fonction en C qui prend deux entiers en paramètres et retourne le plus grand des deux. Créez un programme 
principal qui utilise cette fonction pour afficher le maximum entre deux nombres.*/
int max(int a,int b){
    if (a>b){
    return a;
    }
    else{
    return b;
    }

    }
    int main (){
        int a,b,n;
        printf("saisis les deux nombres : \n");
        scanf("%d %d",&a,&b);
        n=max(a,b);
        printf("le maximum est : %d",n);
        return 0;
    }
