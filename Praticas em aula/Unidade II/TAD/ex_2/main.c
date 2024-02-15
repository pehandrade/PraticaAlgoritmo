#include <stdio.h>
#include <stdlib.h>
#include"ingresso.c"


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
        preencha(&ingresso[cont],cont);
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
    imprime_menor_maior_preco(quantidade_ingresso,ingresso);
    free(ingresso);
}