#include<stdio.h>
#include<stdlib.h>

 int main(void){
    FILE * arquivo =fopen("xingamento.txt","wt");
    if(arquivo==NULL){
        printf("Erro na abertura do arquivo \n");
        exit(1);
    }
    fputs("Leia ai pfv ",arquivo);

    char c[20];
    fgets(c,20,arquivo);
    
    printf("%s",c);
 }