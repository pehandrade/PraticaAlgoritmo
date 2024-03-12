/*TAD:Conta Bancaria*/
#include"ContaBancaria.h"
#include<stdio.h>
#include<stdlib.h>

struct ContaBancaria{
    char titular[100];
    int numero;
    float saldo;
};

void preencher(ContaBancaria * Conta){
    printf("Informe nome do tilular:\n");
    scanf(" %[^\n]",Conta->titular);
    printf("Informe nunero da conta:\n");
    scanf("%d",&Conta->numero);
    printf("Informe saldo da conta:\n");
    scanf("%f",&Conta->saldo);
}

ContaBancaria * Cria_conta(int n){
    ContaBancaria* Conta=(ContaBancaria*)(n*sizeof(ContaBancaria));
    if(Conta==NULL){
        printf("Memoria insuficiente");
        exit(1);
    }
    int cont;
    for(cont=0;cont<n;cont++){
        preencher(&Conta[cont]);
    }
    return Conta;
}

void Deposita(ContaBancaria * Conta,float valor){
    Conta->saldo=+valor;
}

void Saca(ContaBancaria * Conta,float valor){
    if(Conta->saldo<=valor){
        Conta->saldo=-valor;
        printf("Saque realizado com sucesso");
    }
    else{
        printf("Saldo insuficiente");
    }
}

void Transfere(ContaBancaria * Conta_in,ContaBancaria * Conta_out,float valor){
    if(Conta_out->saldo>=valor){
        Conta_out->saldo=-valor;
        Conta_in->saldo=+valor;
        printf("Valor transferido com sucesso");
    }
    else{
        printf("Saldo insuficiente");
    }
}

float Saldo(ContaBancaria * Conta){
    return Conta->saldo;
}

void libera_memoria(ContaBancaria * Conta){
    free(Conta);
    printf("Memoria liberada com sucesso");
}