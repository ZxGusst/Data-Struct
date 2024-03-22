#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define erro_fatorialnegativo -1234

void main(){
    system("cls");
    int N;
    int F;
    printf("Digite um numero: ");
    scanf("%d", &N);
    F= fatorial(N);
    if (F != erro_fatorialnegativo)
    {
        printf("Resultado : %d\n", F);
    }
}

int fatorial (int N){
    int R=1;
    if (N>=0){  
        int i;
        for(i = N; i > 0; i--) R=R*i;
        return (R);
    }else{
        return( erro_fatorialnegativo);
    }
}