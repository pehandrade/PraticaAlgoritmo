#include <stdio.h>
#include <stdlib.h>

typedef enum Mes{
    JANEIRO=1, 
    FEVEREIRO, 
    MARCO, 
    ABRIL, 
    MAIO,
    JUNHO, 
    JULHO, 
    AGOSTO, 
    SETEMBRO, 
    OUTUBRO, 
    NOVEMBRO, 
    DEZEMBRO
}Mes;

typedef struct Data{
    int dia;
    Mes mes;
    int ano;
}Data;

void preencher_data(Data * data){
    printf("Dia: \n");
    scanf("%d",&data->dia);
    printf("Mes: \n");
    scanf("%d",&data->mes);
    printf("Ano: \n");
    scanf("%d",&data->ano);
}

void imprimir(Data * data){
    printf("Dia: %d \n",data->dia);
    switch(data->mes){
        case 1:
            printf("Mes: Janeiro \n");
            break;
        case 2:
            printf("Mes: Fevereiro \n");
            break;
        case 3:
            printf("Mes: Marco \n");
            break;
        case 4:
            printf("Mes: Abril \n");
            break;
        case 5:
            printf("Mes: Maio \n");
            break;
        case 6:
            printf("Mes: Junho \n");
            break;
        case 7:
            printf("Mes: Julho \n");
            break;
        case 8:
            printf("Mes: Agosto \n");
            break;
        case 9:
            printf("Mes: Setembro \n");
            break;
        case 10:
            printf("Mes: Outubro \n");
            break;
        case 11:
            printf("Mes: Novembro \n");
            break;
        case 12:
            printf("Mes: Dezembro \n");
            break;
    }
    printf("Ano: %d  \n",data->ano);
}

int main(void){
    Data * data = malloc(sizeof(Data));
    preencher_data(data);
    imprimir(data);
}