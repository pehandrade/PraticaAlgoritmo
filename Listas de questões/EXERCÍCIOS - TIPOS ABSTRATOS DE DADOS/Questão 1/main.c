#include<stdio.h>
#include<stdlib.h>
#include"ContaBancaria.c"

int main(void){
    printf("Quantas contas deseja criar\n");
    int nun_contas;
    scanf("%d",&nun_contas);
    ContaBancaria * Conta =Cria_conta(nun_contas);
    int opcao;
    ContaBancaria * conta_busca;
    int numero_busca;
    int cont;
    do{
        printf("Operacoes:\n1-Depositar\n2-Sacar\n3-Transferir\n4-Saldo\n5-sair\n");
        scanf("%d",&opcao);
        switch (opcao)
        {
        case 1:
            printf("Informe o numero da conta:\n");
            scanf("%d",&numero_busca);
            for(cont=0;cont<nun_contas;cont++){
                if(numero_busca==Conta[cont].numero){
                    *conta_busca=Conta[cont];
                }
            }
            break;
        
        default:
            break;
        }
    } while (opcao!=5);
    
}