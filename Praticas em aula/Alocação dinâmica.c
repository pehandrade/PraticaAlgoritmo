#include <stdio.h>
#include <stdlib.h>

int main(void){
    int tamanho=5,contador;

    int *vetor = (int*) malloc(tamanho*sizeof(int));
    if(vetor==NULL){
        printf("Erro");
        exit(1);
    }
    else{
        printf("Alocacao raelziada com sucesso\n");
    }

    printf("Digite os valores do vetor");
    for(contador=0;contador<tamanho;contador++){
        scanf("%d",&vetor[contador]);
    }
free(vetor);
return 0;
}