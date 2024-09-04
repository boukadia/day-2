#include<stdio.h>
int somme(int a,int b){
    int som=a+b;
    return som;}
    int main (){
        int a,b,n;
        printf("saisis les deux nombres : \n");
        scanf("%d %d",&a,&b);
        n=somme(a,b);
        printf("la somme de %d et %d est : %d",a,b,n);
        return 0;
    }
