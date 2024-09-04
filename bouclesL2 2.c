#include<stdio.h>
/*pyramide d'étoile*/

    int main (){
        int n,p;
        printf("saisis un  nombre du ligne : \n");
        scanf("%d",&n);
        p=n-1;
       for(int i=0;i<n;i++){
        for(int j=1;j<=p;j++)
        printf(" ");
        p--;
        for(int j=1;j<=2*i+1;j++)
        printf("*");
        for(int j=1;j<=(n/2)-i;j++)
        printf(" ");
        printf("\n");

       }
        return 0;
    }
