#include<stdio.h>
#include<stdlib.h>

 int main(void){
    FILE * arquivo =fopen("xingamento.txt","at");
    if(arquivo==NULL){
        printf("Erro na abertura do arquivo \n");
        exit(1);
    }
    fprintf(arquivo, "Agr vai");

    char c[20];
    fgets(c,20,arquivo);
    
    printf("%s",c);
 }