#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define ERRO -1234

int Mystrlen(char *str);

void main(){
    char frase[] = "Meu nome e Gustavo!!!";
    printf("%s - %d caracteres.\n", frase, MyStrlen(frase));
}

int Mystrlen (char *str){
    int Tamanho;
    for (Tamanho=0; str[Tamanho] != '\0';Tamanho++);
    return(Tamanho);
}