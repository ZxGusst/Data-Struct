#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Gustavo dos Santos Alves - UC23101424
//Trabalho Prático Invidual 2


#define MAX 1000

typedef struct  {
    
    float x;
    float y;

} Ponto ;

float areaTriangulo(Ponto a, Ponto b, Ponto c){

    
    int Det = 0;

    Det = Det + a.x * b.y * 1;
    Det = Det + a.y * 1 * c.x;
    Det = Det + 1 * b.x * c.y;
    Det = Det - c.x * b.y * 1;
    Det = Det - c.y * 1 * a.x;
    Det = Det - 1 * b.x * a.y;

    if(Det < 0) return Det*(-1);
    return Det;

}; 

int main(){

    FILE *arquivo;
    arquivo = fopen("listvert.txt","r");
    int N, i = 0;
    Ponto lista_vertices[MAX];

    if(arquivo != NULL){
       
       fscanf(arquivo, "%d\n", &N); //Lendo e armazenando quantidade de vértices.

       while ( fscanf(arquivo, "%f %f\n", &lista_vertices[i].x , &lista_vertices[i].y) == 2 ) i++; // lendo e armazenando as coordenadas dos vértices.
       
       // for(int i=0; i<N; i++){
               // printf("%.2f %.2f\n", lista_vertices[i].x, lista_vertices[i].y);
            //} ----Debguando o código
        Ponto pontoInicial = lista_vertices[0];

        float areaTotal = 0;

        for(int i = 1; i < N-1;    i++) { // Calculando área de cada sub-triângulo.

            areaTotal += areaTriangulo(pontoInicial, lista_vertices[i], lista_vertices[i+1])/2;
        }
        printf("Resposta: %.2f\n", areaTotal);

    }else{

        printf("Erro ao abrir o arquivo!\n");
    }

    fclose(arquivo);
    return 0;
}