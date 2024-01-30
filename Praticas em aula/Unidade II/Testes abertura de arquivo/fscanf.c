#include<stdio.h>
#include<stdlib.h>

 int main(void){
    char c[20];
    FILE * arquivo =fopen("entrada.txt","rt");
    if(arquivo==NULL){
        printf("Erro na abertura do arquivo \n");
        exit(1);
    }
    fscanf(arquivo,"%s",c);
    
    printf("%s",c);
 }