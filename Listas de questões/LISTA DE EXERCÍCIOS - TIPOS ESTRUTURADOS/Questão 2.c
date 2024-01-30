#include <stdio.h>
#include <stdlib.h>
#define max_alunos 50

typedef struct Aluno{
    char nome[80];
    int matricula;
    char turma;
    float notas[3];
    float media;
}Aluno;

void inicializar_vetor(Aluno ** alunos){
    int i;
    for(i=0;i<max_alunos;i++){
        alunos[i]=NULL;
    }
}

void matricula(int n,Aluno** alunos){
    if(n<=max_alunos){
        alunos[n]=(Aluno*)malloc(sizeof(Aluno));

        printf("Informe o nome do aluno: \n");
        scanf("%[^\n]s",&alunos[n]->nome);
        printf("Informe a matricula do aluno: \n"); 
        scanf("%d",&alunos[n]->matricula);
        printf("Informe a turma do aluno \n");
        scanf("%c",&alunos[n]->turma);
    }
    else{
        printf("Quantidade maxima de alunos atingida \n");
    }
}

void lanca_notas(int n, Aluno** alunos){
    int i;
    for(i=0;i<n;i++){
        printf("Informe as notas do aluno(a): %s \n",alunos[i]->nome);
        printf("Informe a nota da primeira unidade: \n");
        scanf("%d",&alunos[i]->notas[0]);
        printf("Informe a nota da segunda unidade: \n");
        scanf("%d",&alunos[i]->notas[1]);
        printf("Informe a nota da terceira unidade: \n");
        scanf("%d",&alunos[i]->notas[2]);
        alunos[i]->media=(alunos[i]->notas[0]+alunos[i]->notas[1]+alunos[i]->notas[2])/3;
    }
}
void imprime_tudo(int n, Aluno** alunos){
    int i;
    for(i=0;i<n;i++){
        printf("\n");
        printf("Nome: %s\n",alunos[i]->nome);
        printf("Matricula: %d \n",alunos[i]->matricula);
        printf("Turma: %c \n",alunos[i]->turma);
        printf("Notas: %.2f, %.2f e %.2f \n",alunos[i]->notas[0],alunos[i]->notas[1],alunos[i]->notas[2]);
        printf("Media: %.2f \n",alunos[i]->media);
    }
}

void imprime_turma(int n, Aluno** alunos, char turma){
    int i;
    printf("Alunos da turma %c:",turma);
    for(i=0;i<n;i++){
        if(alunos[i]->turma==turma){
            printf("\n");
            printf("Nome: %s\n",alunos[i]->nome);
            printf("Matricula: %d \n",alunos[i]->matricula);
            printf("Turma: %c \n",alunos[i]->turma);
            printf("Notas: %.2f, %.2f e %.2f \n",alunos[i]->notas[0],alunos[i]->notas[1],alunos[i]->notas[2]);
            printf("Media: %.2f \n",alunos[i]->media);
        }
    }
}

imprime_turma_aprovados(int n, Aluno**alunos, char turma){
    int i;
    printf("Alunos aprovados da turma %c:",turma);
    for(i=0;i<n;i++){
        if(alunos[i]->turma==turma && alunos[i]->media>=7.0){
            printf("\n");
            printf("Nome: %s\n",alunos[i]->nome);
            printf("Matricula: %d \n",alunos[i]->matricula);
            printf("Turma: %c \n",alunos[i]->turma);
            printf("Notas: %.2f, %.2f e %.2f \n",alunos[i]->notas[0],alunos[i]->notas[1],alunos[i]->notas[2]);
            printf("Media: %.2f \n",alunos[i]->media);
        }
    }
}


int main(void){
    Aluno* alunos[max_alunos];
    int nun_alunos=0;
    
    inicializar_vetor(alunos);

    //Matricula
    int opcao=1;
    while(nun_alunos<max_alunos && opcao==1){
        matricula(nun_alunos,alunos);
        nun_alunos++;

        printf("Deseja matricular um novo aluno? 1-(sim) 2-(Não) \n");
        scanf("%d",&opcao);
    }

    //Lançar notas
    lanca_notas(nun_alunos,alunos);

    //Imprimir todos os alunos
    imprime_tudo(nun_alunos,alunos);

    //Imprimir turma
    char turma_busca;
    printf("\n");
    printf("Informe a turma que deseja imrprimir: \n");
    scanf("%c",turma_busca);
    imprime_turma(nun_alunos,alunos,turma_busca);

    //Imprimir aprovados de uma turma
    printf("\n");
    printf("Informe a turma que deseja imrprimir os aprovados: \n");
    scanf("%c",turma_busca);
    imprime_turma_aprovados(nun_alunos,alunos,turma_busca);

    int i;
    for(i=0;i<nun_alunos;i++){
        free(alunos[i]);
    }
}