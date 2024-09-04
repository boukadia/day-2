#include<stdio.h>
/*Écrivez une fonction en C qui prend deux entiers en paramètres et retourne le plus petit des deux. Créez un programme principal qui
 utilise cette fonction pour afficher le minimum entre deux nombres.*/
int min(int a,int b){
    if (a<b){
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
        n=min(a,b);
        printf("le minimum est : %d",n);
        return 0;
    }
