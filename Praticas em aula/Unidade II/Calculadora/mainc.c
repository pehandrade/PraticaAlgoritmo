#include<stdio.h>
#include "operacoes.h"

int main(void){
    int nun_1,nun_2;
    int opcao;


    printf("Informe o primeiro numero: \n");
    scanf("%d",&nun_1);
    printf("1-Soma\n2-subtracao\n3-multiplicacao\n4divisao\n");
    scanf("%d",&opcao);
    printf("Informe segundo numero: \n");
    scanf("%d",&nun_2);
    switch (opcao){
    case 1:
        printf("%d",soma(nun_1,nun_2));
        break;
    
    case 2:
        printf("%d",subtracao(nun_1,nun_2));
        break;

    case 3:
        printf("%d",multiplicacao(nun_1,nun_2));
        break;

    case 4:
        printf("%d",divisao(nun_1,nun_2));
        break;
    
    default:
        printf("Opcao invalida");
        break;
    }

}