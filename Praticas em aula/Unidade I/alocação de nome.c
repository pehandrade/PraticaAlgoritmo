#include<stdio.h>
#include<stdlib.h>
int main(void){
    char *nome=(char*) malloc(50*sizeof(char));
    if(nome==NULL){
        printf("Erro de alocacao")
        exit(1);
    }
    printf("Digite seu nome");
    scanf(",&nome);
    free(nome);
    return 0;
}