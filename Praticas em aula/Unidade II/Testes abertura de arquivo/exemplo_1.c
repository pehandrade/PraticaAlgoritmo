#include<stdio.h>


int main(void){
    int c;
    int nlinhas=0;
    FILE *arquivo;

    arquivo=fopen("entrada.txt", "rt");
    if(arquivo==NULL){
        printf("Erro na abertura do arquivo \n");
        return(1);
    }

    while((c=fgetc(arquivo))!= EOF){
        if(c== '\n'){
            nlinhas++;
        }
        
    }
    fclose(arquivo);
    printf("Numero de linhas = %d \n",nlinhas);
    return 0;
}