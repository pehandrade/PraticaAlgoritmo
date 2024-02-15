#include <stdio.h>
#include <stdlib.h>

int main(void){
    /*  Variáveis   */
    char le[50];
    char nomes[20];
    float n1,n2,n3,media;


    /*  Arquivo de entrada  */
    FILE* turmaE = fopen("entrada_q3.txt", "r");
    if (turmaE == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    } else{
        printf("Arquivo criado com sucesso!\n");
    }

    /*  Arquivo de saída  */
    FILE* turmaS = fopen("saida_q3.txt", "w");
    if (turmaS == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(2);
    } else{
        printf("Arquivo criado com sucesso!\n");
    }

    /*  Ler dados   */
    while ((fgets(le, 50, turmaE)) != NULL){ // Dúvida nesse while
        // Processar dados
        sscanf(le,"%20[^\t]\t%f\t%f\t%f", nomes, &n1, &n2, &n3);
        media=(n1+n2+n3)/3;
        fprintf(turmaS,"%s\t%.1f\n",nomes,media);
    }

    /*  Fecha arquivos  */
    // Entrada
    if (fclose(turmaE)){
        printf("Execucao de arquivo encerrada!\n");
    }
    // Saída
    if (fclose(turmaS)){
            printf("Execucao de arquivo encerrada!\n");
    }
    
    return 0;
}