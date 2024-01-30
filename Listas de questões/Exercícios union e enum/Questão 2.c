#include <stdio.h>
#include <stdlib.h>

typedef enum Tipos{
    ALIMENTOS,
    BEBIDAS,
    ELETRONICOS
}Tipos;

typedef struct Produtos{
    char nome[100];
    float preco;
    Tipos tipo_produto;
}Produtos;

void preencher_dados(Produtos * produtos){
    printf("Nome do produto: \n");
    scanf("%[^\n]s",&produtos->nome);
    printf("Preco do produto: \n");
    scanf("%f",&produtos->preco);
    printf("Tipo do produto: \n 0-Alimento \n 1-Bebida\n 2-Eletronico \n");
    scanf("%d",&produtos->tipo_produto);
}

void imprimir(Produtos * produtos){
    printf("Nome: %s \n Preco: %f \n",produtos->nome,produtos->preco);
    switch (produtos->tipo_produto){
    case 0:
        printf("Alimento");
        break;
    
    case 1:
        printf("Bebida");
        break;

    case 2:
        printf("Eletronico");
    }
}
int main(void){
    Produtos * produtos = malloc(sizeof(Produtos));
    preencher_dados(produtos);
    imprimir(produtos);
}