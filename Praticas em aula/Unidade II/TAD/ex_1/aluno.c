/*TAD: Aluno*/
#include"aluno.h"
#include<stdlib.h>
#include<stdio.h>
struct aluno{
    char nome[20];
    int matricula;
    float IRA;
};

void recebe_dados(Aluno * aluno){
    printf("Informe o nome do aluno: \n");
    scanf(" %[^\n]s",aluno->nome);
    printf("Informe a matricula do aluno: \n");
    scanf("%d",&aluno->matricula);
    printf("Informe o IRA do aluno: \n");
    scanf("%f",&aluno->IRA);
}

void imprime_dados(Aluno * aluno){
    printf("Nome:%s \n",aluno->nome);
    printf("Matricula:%d \n",aluno->matricula);
    printf("IRA:%f \n",aluno->IRA);
}

void libera(Aluno * aluno){
    free(aluno);
}

void matricula(int n,Aluno * recebe_dados()){
    Aluno * alunos=(Aluno*)malloc(n*sizeof(Aluno));
    
    int cont;
    for(cont=0;cont<n;cont++){
        
    }

}