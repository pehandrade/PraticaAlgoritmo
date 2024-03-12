#include <stdio.h>
#include <stdlib.h>

typedef struct ingresso{
    float preco;
    char local[100];
    char atracao[100];
    int codigo;
}Ingresso;

void preencha(Ingresso * ing){
    printf("Informe o preço do ingresso \n");
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

void imprime_menor_maior_preco(int quantidade_ingresso, Ingresso * ing, void (*imprimir)(Ingresso*)){
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

int main(void){
    int quantidade_ingresso;
    printf("Informe a quantidade de ingressos: \n");
    scanf("%d",&quantidade_ingresso);
    Ingresso * ingresso = (Ingresso*)malloc(quantidade_ingresso * sizeof(Ingresso));
    if(ingresso==NULL){
        exit(1);
    }
    int cont;
    for(cont=0;cont<quantidade_ingresso;cont++){
        preencha(&ingresso[cont]);
    }
    int opcao;
    int codigo_alterar_preco;
    do{
        int conf=1;
        printf("Deseja alterar o preço de algum ingresso? \n");
        scanf("%d",&opcao);
        if (opcao==1)
        {
            printf("Informe o código do ingresso que deseja alterar o preço: \n");
            scanf("%d",&codigo_alterar_preco);
            for(cont=0;cont<quantidade_ingresso;cont++){
                if(ingresso[cont].codigo==codigo_alterar_preco){
                    printf("Preço atual: %.2f \n",ingresso[cont].preco);
                    printf("Informe o novo preço: \n");
                    float novo_preco;
                    scanf("%f",&novo_preco);
                    alterar_preco(&ingresso[cont],novo_preco);
                    conf=2;
                }
            }
            if(conf==1){
                printf("Código inválido \n");
            }
            break;
        }
        else if (opcao==2)
        {
            break;
        }
        else
        {
            printf("Opção invalida \n");
        }
    }while(opcao==1);
    for(cont=0;cont<quantidade_ingresso;cont++){
        imprimir(&ingresso[cont]);
    }
    imprime_menor_maior_preco(quantidade_ingresso,ingresso,&imprimir);
    free(ingresso);
}