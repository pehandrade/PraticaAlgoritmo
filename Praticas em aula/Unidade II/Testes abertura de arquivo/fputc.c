#include<stdio.h>
#include<stdlib.h>

 int main(void){
    FILE * arquivo =fopen("xingamento.txt","wt");
    if(arquivo==NULL){
        printf("Erro na abertura do arquivo \n");
        exit(1);
    }
    fputc('A',arquivo);

    int c;
    c = fgetc(arquivo);
    
    printf("%c",c);
 }