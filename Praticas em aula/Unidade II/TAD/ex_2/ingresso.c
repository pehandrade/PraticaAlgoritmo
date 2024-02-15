#include"ingresso.h"
#include<stdlib.h>
#include<stdio.h>

struct ingresso{
    float preco;
    char local[100];
    char atracao[100];
    int codigo;
};

void preencha(Ingresso * ing,int cont){
    printf("\n");
    printf("    %d ingresso     \n",cont+1);
    printf("Informe o preço do ingresso: \n");
    scanf("%f",&ing->preco);
    printf("Informe local do evento: \n");
    scanf(" %[^\n]s",ing->local);
    printf("Informe qual sera a atração: \n");
    scanf(" %[^\n]s",ing->atracao);
    printf("Informe o codigo do ingresso: \n");
    scanf("%d",&ing->codigo);
}

void imprimir(Ingresso * ing){
    printf("Preço do ingresso: %.2f \n",ing->preco);
    printf("Local do ingresso: %s \n",ing->local);
    printf("Atração do ingresso: %s \n",ing->atracao);
    printf("Codigo do ingresso: %d \n",ing->codigo);
}

void alterar_preco(Ingresso * ing, float valor){
    ing->preco=valor;
}

void imprime_menor_maior_preco(int quantidade_ingresso, Ingresso * ing){
    Ingresso * menor_preco = (Ingresso*)malloc(sizeof(Ingresso));
    Ingresso * maior_preco = (Ingresso*)malloc(sizeof(Ingresso));
    if(maior_preco==NULL || menor_preco==NULL){
        exit(1);
    }
    *maior_preco = ing[0];
    *menor_preco = ing[0];
    int cont;
    for(cont=0;cont<quantidade_ingresso;cont++){
        if(maior_preco->preco<ing[cont].preco){
            *maior_preco=ing[cont];
        }
        if(menor_preco->preco>ing[cont].preco){
            *menor_preco=ing[cont];
        }
    }
    printf("Menor preço: \n");
    imprimir(menor_preco);
    printf("Maior preço: \n");
    imprimir(maior_preco);
    free(maior_preco);
    free(menor_preco);
}