#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#define TOT 50

int main()
{
    char vet[TOT];
    int num,i=0,j=0,bolean=0;
    printf("Digite um numero para converter: ");
    scanf("%d",&num);

    while(TOT>i++){
            vet[i]='\0';

    }

    for(i=0;num>=0&&bolean!=1;i++){

         if(num==0){
            bolean=1;
         }

        if(num%2==0){
            num=num/2;
            vet[i]='0';
            j++;
        }else
        if(num%2==1){
            num=(num/2);
            vet[i]='1';
            j++;
        }

        printf("%c",vet[i]);
    }

    printf("\n\n%s\n\n",vet);

    system("pause");
    return 0;
}
