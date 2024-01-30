#include <stdio.h>
#include <stdlib.h>

typedef struct disciplina{
    char nome[50];
    float nota;
    int codigo;
}Disciplina;

typedef struct aluno{
    char nome[50];
    int idade;
    long int matricula;
    Disciplina * materias; //alinhamento da estruruta disciplina na estrutura aluno
}Aluno;

int main(){
    Aluno aluno;//Declarado variavel do tipo aluno
    aluno.idade=19;//Acessado a variavel idade dentro do aluno
    aluno.matricula=20230112032;
    aluno.materias->codigo=98078;
    printf("%d, %d, %d",aluno.idade, aluno.matricula, aluno.materias->codigo);
    return 0;
}