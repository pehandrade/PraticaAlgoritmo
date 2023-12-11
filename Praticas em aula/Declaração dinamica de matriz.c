#include<stdio.h>
#include<stdlib.h>
int main(){
    int linha=5,coluna=5,j,i,contador;
    int **matriz=(int*) malloc (linha*sizeof(int*));//Alocação do vetor das linhas.
    for(contador=0;contador<linha;contador++){
        matriz[contador]=(int) malloc(coluna*sizeof(int));//Alocação dos vetores das colunas dentro do vetor das linhas.
    }
    for(contador=0;contador<linha;contador++){
        if(matriz==NULL || matriz[contador]==NULL){
            exit(1);//Verificação se teve memória suficiente para as alocações.
        }
    }
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            matriz[i][j]=i*5+j;//Preenchimento da matriz.
        }
    }
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            printf("%d\n",matriz[i][j]);
        }
    }
    for(contador=0;contador<linha;contador++){
        free(matriz[contador]);
    }
    free(matriz);//Liberação da memória.
    return 0;
}