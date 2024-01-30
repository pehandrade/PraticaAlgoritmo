#include<stdio.h>
#include<stdlib.h>

 int main(void){
    FILE * arquivo =fopen("entrada.txt","rt");
    if(arquivo==NULL){
        printf("Erro na abertura do arquivo \n");
        exit(1);
    }
    int c;
    c = fgetc(arquivo);
    
    printf("%c",c);
 }