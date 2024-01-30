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
    int matricula;
    Disciplina * materias; //alinhamento da estruruta disciplina na estrutura aluno
}Aluno;

int main(){
    Aluno * aluno = (Aluno*) malloc(sizeof(Aluno));
    if(aluno==NULL){
        exit(1);
    }
    aluno->materias=(Disciplina*) malloc(2*sizeof(Disciplina));
    if(aluno->materias==NULL){
        exit(1);
    }
    printf("Informe os dados do aluno: nome, idade e matricula \n");
    scanf("%[^\n]",&aluno->nome);
    scanf("%d",&aluno->idade);
    scanf("%d",&aluno->matricula);
    int contador;
    for(contador=0;contador<2;contador++){
        printf("Cadastro da disciplina %d \n",contador+1);
        printf("Informe o nome da disciplina \n");
        scanf(" %[^\n] ",aluno->materias[contador].nome);
        printf("informe a nota: \n");
        scanf(" %d ",&aluno->materias[contador].nota);
        printf("Informe o codigo \n");
        scanf(" %d ",aluno->materias[contador].codigo);
    }
    return 0;
}