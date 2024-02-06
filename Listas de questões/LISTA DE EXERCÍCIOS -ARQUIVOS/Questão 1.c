#include<stdio.h>
#include<stdlib.h>
#define max_alunos 30

typedef struct Alunos{
    char nome[50];
    float nota[3];
    float media;
}Alunos;

int main(void){
    Alunos aluno;
    FILE * entrada_q3 =fopen("entrada_q3.txt","at");
    FILE * saida_q3 =fopen("saida_q3.txt","at");
    if(entrada_q3==NULL || saida_q3==NULL){
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    int nun_aluno=0;
    int opcao;
    do{
        if(nun_aluno<=max_alunos){
            printf("Informe o nome do aluno \n");
            scanf(" %[^\n]s",&aluno.nome);
            printf("Informe a primeira nota: \n");
            scanf("%f",&aluno.nota[0]);
            printf("Informe a segunda nota: \n");
            scanf("%f",&aluno.nota[1]);
            printf("Informe a terceira nota: \n");
            scanf("%f",&aluno.nota[2]);

            fprintf(entrada_q3,"%s  %.1f  %.1f  %.1f \t \n",aluno.nome,aluno.nota[0],aluno.nota[1],aluno.nota[2]);
            aluno.media=(aluno.nota[0]+aluno.nota[1]+aluno.nota[2])/3;
            if(aluno.media>=7){
                fprintf(saida_q3,"%s  %.1f  aprovado \t \n",aluno.nome,aluno.media);
            }
            else{
                fprintf(saida_q3,"%s  %.1f  reprovado \t \n",aluno.nome,aluno.media);
            }
            nun_aluno++;

            printf("Deseja cadastrar um novo aluno? 1-(sim)  2-(nao) \n");
            scanf("%d",&opcao);
        }
    } while (opcao==1);
    fclose(entrada_q3);
    fclose(saida_q3);
    
}
