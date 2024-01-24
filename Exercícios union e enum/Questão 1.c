#include <stdio.h>
#include <stdlib.h>

typedef enum Genero{
    MASCULINO,
    FEMININO
}Genero;

typedef struct Pessoa{
    char nome[100];
    int idade;
    Genero genero;
}Pessoa;

void preencher_dados(Pessoa * pessoa){
    printf("Informe o nome da pessoa: \n");
    scanf("%[^\n]s",&pessoa->nome);
    printf("Informe a idade da pessoa: \n");
    scanf("%d",&pessoa->idade);
    printf("Informe o genero da pessoa: \n 0-Masculino \n 1-Feminino\n");
    scanf("%d",&pessoa->genero);
}

void imprimir(Pessoa * pessoa){
    printf("Nome: %s \n Idade: %d \n Genero: %s",pessoa->nome,pessoa->idade,pessoa->genero==MASCULINO?"Masculino":"Feminino");
    
}

int main(){
    Pessoa * pessoa = malloc(sizeof(Pessoa));
    preencher_dados(pessoa);
    imprimir(pessoa);

}