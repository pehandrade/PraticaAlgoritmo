#include<stdio.h>
#define dias_ano 365


 
 int main(){
    int dia,mes,ano;
    int dias_mes[12]={31,59,90,120,151,181,212,243,273,304,334,365};
    printf("Dia: \n");
    scanf("%d",&dia);
    printf("Mes: \n");
    scanf("%d",&mes);
    printf("Ano: \n");
    scanf("%d",&ano);
    int total;
    if(mes==1){
        total=((ano-1)*dias_ano)+dia;
    }
    else{
        total=((ano-1)*dias_ano)+dias_mes[(mes-2)]+dia;
    }

    int dias_bissextos=(ano-1)/4;
    int resto;
    if(ano%4==0 && mes>2){
        resto=(total+dias_bissextos+1)%7;
    }
    else{
        resto=(total+dias_bissextos)%7;
    }
    char nome_mes[12][20]={'Janeiro','Fevereiro','Março','Abril','Maio','Junho','Julho','Agosto','Setembro','Outubro','Novembro','Dezembro'};
    switch (resto)
    {
    case 0:
        printf("Sabado \n%d de %s de %d",dia,nome_mes[mes-1],ano);
        break;
    case 1:
        printf("Domingo \n%d de %s de %d",dia,nome_mes[mes-1],ano);
        break;
    case 2:
        printf("Segunda-feira \n%d de %s de %d",dia,nome_mes[mes-1],ano);
        break;
    case 3:
        printf("Terca-feira \n%d de %s de %d",dia,nome_mes[mes-1],ano);
        break;
    case 4:
        printf("Quarta-feira \n%d de %s de %d",dia,nome_mes[mes-1],ano);
        break;
    case 5:
        printf("Quinta-feira \n%d de %s de %d",dia,nome_mes[mes-1],ano);
        break;
    case 6:
        printf("Sexta-Feira \n%d de %s de %d",dia,nome_mes[mes-1],ano);
        break;
    }
 }
 